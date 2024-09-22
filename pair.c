#include <stdio.h>
int number[5] = {1, 2, 3, 4, 5};

int main(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        if (number[i] % 2 == 0)
        {
            printf('%d\n', number[i]);
        }
        else
        {
            printf('%d\n', number[i]);
        }
    };
    return 0;
}