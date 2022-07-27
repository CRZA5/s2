#include <stdio.h>
int Search(int *a, int n, int key);
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
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (a[mid] == key)
            return mid;
        else if (a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}