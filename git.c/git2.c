#include <stdio.h>

int engKattaRaqam(int n)
{
    int max = 0;

    while (n > 0)
    {
        int raqam = n % 10;

        if (raqam > max)
        {
            max = raqam;
        }

        n = n / 10;
    }

    return max;
}

int main()
{
    int n;

    printf("Sonni kiriting: ");
    scanf("%d", &n);

    printf("%d\n", engKattaRaqam(n));

    return 0;
}