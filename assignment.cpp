#include <stdio.h>
int main()
{
    char ch, cat;
    int yr, fmem;
    float inc;

    scanf("%c %d %d %f", &cat, &yr, &fmem, &inc);
    if (cat == 'x' || cat == 'y' || cat == 'z')
    {
        if (cat == 'x')
        {
            if (yr >= 12 || fmem > 5 || (inc < 1000.50))
            {
                printf("will receive the bonus");
            }
            else
            {
                printf("will not receive the bonus");
            }
        }
        else
        {
            if ((cat == 'y' || cat == 'z') && fmem > 8 && inc < 1100.78)
            {
                printf("will receive the bonus");
            }
            else
            {
                printf("will not receive the bonus");
            }
        }
    }

    else
    {
        printf("will not receive the bonus");
    }
}