#include <stdio.h>

void BubbleSort(int *a, int n);

int main(void)
{
    int a[] = {
        0};
    printf("Enter the number of elements in the array: ");
    int n;
    scanf("%d", &n);
    if (n > 100)
    {
        printf("Please refrain from entering more than 100 elements.\n");
        return 0;
    }
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    BubbleSort(a, n);
    printf("The sorted array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
void BubbleSort(int *a, int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}