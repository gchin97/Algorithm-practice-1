#include <stdio.h>

int main(void)
{

    int i, j, temp;
    int array[10] = { 1,
                      10,
                      5,
                      8,
                      9,
                      2,
                      6,
                      7,
                      4 }

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9 - j; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf()
    }
}