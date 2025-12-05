#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

typedef struct {
    char name[100];
    int year;
} Attraction;

typedef struct {
    char name[100];
    char country[50];

    Attraction* attractions;
    int attrCount;
    int capacity;

} City;

void init_city(City* city)
{
    city->attrCount = 0;
    city->capacity = 3;
    city->attractions = (Attraction*)malloc(city->capacity * sizeof(Attraction));
}

void add_attraction(City* city, const char* name, int year)
{
    if (city->attrCount >= city->capacity)
    {
        city->capacity *= 2;
        city->attractions = (Attraction*)realloc(city->attractions,
            city->capacity * sizeof(Attraction));
    }

    strcpy(city->attractions[city->attrCount].name, name);
    city->attractions[city->attrCount].year = year;
    city->attrCount++;
}

City* find_city_with_max_attr(City* cities, int n) {
    if (n == 0)
    {
        return NULL;
    }

    City* best = &cities[0];
    for (int i = 1; i < n; i++)
    {
        if (cities[i].attrCount > best->attrCount)
        {
            best = &cities[i];
        }
    }
    return best;
}

void print_city(const City* city)
{
    printf("Город: %s (%s)\n", city->name, city->country);
    printf("Достопримечательности (%d):\n", city->attrCount);

    for (int i = 0; i < city->attrCount; i++)
    {
        printf(" - %s, год: %d\n", city->attractions[i].name, city->attractions[i].year);
    }
}

void free_cities(City* cities, int n)
{
    for (int i = 0; i < n; i++)
    {
        free(cities[i].attractions);
    }

    free(cities);
}

void newline(char* s) {
    s[strcspn(s, "\n")] = '\0';
}


int main(int argc, char** argv) {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n = 0;
    printf("Введите количество городов: ");
    scanf_s("%d", &n);
    getchar();

    City* cities = (City*)malloc(n * sizeof(City));

    for (int i = 0; i < n; i++)
    {
        init_city(&cities[i]);

        printf("\nГород\n", i + 1);

        printf("Название города: ");
        fgets(cities[i].name, sizeof(cities[i].name), stdin);
        newline(cities[i].name);

        printf("Страна: ");
        fgets(cities[i].country, sizeof(cities[i].country), stdin);
        newline(cities[i].country);

        int count = 0;
        printf("Количество достопримечательностей: ");
        scanf_s("%d", &count);
        getchar();

        for (int j = 0; j < count; j++)
        {
            char attr_name[100];
            int year = 0;

            printf("  Название достопримечательности %d: ", j + 1);
            fgets(attr_name, sizeof(attr_name), stdin);
            newline(attr_name);

            printf("  Год создания: ");
            scanf_s("%d", &year);
            getchar();

            add_attraction(&cities[i], attr_name, year);
        }
    }

    printf("\n- Все города -\n");
    for (int i = 0; i < n; i++)
    {
        printf("\n%d.\n", i + 1);
        print_city(&cities[i]);
    }

    City* best = find_city_with_max_attr(cities, n);
    printf("\nГород с наибольшим количеством достопримечательностей:\n");
    print_city(best);

    free_cities(cities, n);
    return 0;
}
