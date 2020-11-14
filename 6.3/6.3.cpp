#include <stdio.h>
#define N 5
int main()
{
    int  arr[N];

    for (int i = 0; i < N; i++)
    {
        printf("Enter a number: ");
        scanf_s("%d", &arr[i]);
    }
    printf("\n");
    for (int i = 0; i < N; i++)
    {
        printf("%-5d", arr[i]);
    }
    printf("\n");
    int min;
    for (int i = 0; i < N; i++)
    {
        if (i == 0)
            min = arr[i];
        else if (min > arr[i])
            min = arr[i];
        else if (min <= arr[i])
        {
            printf("no");
            goto inv;
        }

    }
    for (int i = 0; i < N; i++)
    {
        if (i == N - 1)
            printf("yes");

    }
inv: return 0;
}