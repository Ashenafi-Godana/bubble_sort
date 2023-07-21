#include <stdio.h>
#include <stdbool.h>

void bubble_sort(int a[], int n);
int main(void)
{
    int myArray[] = {5, 2, 6, 1, 8, 4, 0, 3, 89, 23};

    int len = 10;

    bubble_sort(myArray, len);

    for (int i = 0; i < len; i++)
    {
        printf("%d\t", myArray[i]);
    }

    printf("\n");
}

void bubble_sort(int a[], int n)
{
    bool swapped = false;
    int i = 0;
    do
    {
        swapped = false;

        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swapped = true;
            }
        }

        i++;
    } while (swapped);
}