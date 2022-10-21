// C Program to Insert an element
// at a specific position in an Array

#include <stdio.h>

int main()
{
	int arr[100] = { 0 };
	int i, x, pos, n;
	printf("C Program to Insert an element on array\n\n");
	printf("Enter the array limit:");
	scanf("%d", &n);
	printf("Enter the array:");

	for (i = 0; i < 10; i++)
		scanf("%d", &arr[i]);

	printf("The given array:");
	for (i = 0; i < n; i++)
		printf("%d, ", arr[i]);
	printf("\n");
	printf("Enter the element to insert:");
	scanf("%d", &x);
	printf("Enter the element position:");
	scanf("%d", &pos);
	n++;
	for (i = n - 1; i >= pos; i--)
		arr[i] = arr[i - 1];
		
	arr[pos - 1] = x;

	for (i = 0; i < n; i++)
		printf("%d, ", arr[i]);
	printf("\n");

	return 0;
}

