#include <stdio.h>

int Search(int *, int, int);
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
    int key;
    printf("Enter a number to search: ");
    scanf("%d", &key);
    int pos = Search(a, n, key);
    if (pos == -1)
    {
        printf("%d is not in the array.\n", key);
    }
    else
    {
        printf("%d is in the array at position %d.\n", key, pos);
    }
    return 0;
}
int Search(int *a, int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
            return i;
    }
    return -1;
}