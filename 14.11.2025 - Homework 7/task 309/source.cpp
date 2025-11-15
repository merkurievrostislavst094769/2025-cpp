#include <cstdio>

bool Election(bool x, bool y, bool z)
{
    int count = 0;

    if (x)
    {
        count++;
    }
    if (y)
    {
        count++;
    }
    if (z)
    {
        count++;
    }

    if (count >= 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(int argc, char** argv) 
{
    int a = 0;
    int b = 0;
    int c = 0;

    scanf_s("%d %d %d", &a, &b, &c);

    bool x = false;
    bool y = false;
    bool z = false;

    x = (a != 0);
    y = (b != 0);
    z = (c != 0);

    bool result = false;
    result = Election(x, y, z);

    printf("%d", result ? 1 : 0);

    return 0;
}
