#include <cstdio>

struct Student {
    char lastName[101];
    char firstName[101];
    int math;
    int physics;
    int informatics;
};

int main(int argc, char** argv)
{
    int n = 0;
    scanf_s("%d", &n);

    Student students[100];

    for (int i = 0; i < n; i++)
    {
        scanf_s("%100s %100s %d %d %d",
            students[i].lastName, 101,
            students[i].firstName, 101,
            &students[i].math,
            &students[i].physics,
            &students[i].informatics);
    }

    double sumMath = 0.0;
    double sumPhysics = 0.0;
    double sumInformatics = 0.0;

    for (int i = 0; i < n; i++)
    {
        sumMath += students[i].math;
        sumPhysics += students[i].physics;
        sumInformatics += students[i].informatics;
    }

    printf("%.2lf %.2lf %.2lf\n",
        sumMath / n,
        sumPhysics / n,
        sumInformatics / n);

    return 0;
}
