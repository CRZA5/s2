#include <stdio.h>
#include <stdlib.h>

int item = 0, size = 5, stack[5], n, i;
int main()
{
	printf("\n                Stack               \n\n");
	while (1)
	{
		printf("\nEnter your choice:\n\t\t1.Push\n\t\t2.Pop\n\t\t3.display\n\t\t4.exit\nChoice:  ");
		scanf("%d", &n);	// Take choice from user
		printf("\n");
		if (n == 1)	//Testing choice
		{
			push();	//Calling push function
			printf("\n");
		}
		else if (n == 2)
		{
			pop();	//Calling pop function
			printf("\n");
		}
		else if (n == 3)
		{
			display();	//Calling display function
			printf("\n");
		}
		else
			break;
	}
}
push()	//Push function
{
	if (item == size)
	{
		printf("Overflow\n");
	}
	else
	{
		printf("Enter item : ");
		scanf("%d", &stack[item]);
		item++;
	}
}
pop()	//Pop function
{
	if (item == 0)
		printf("Underflow\n");
	else
	{
		item--;
		printf("pop item : %d", stack[item]);
	}
}
display()	
{
	if (item != 0)
	{
		printf("\tItems: \n\n");
		for (i = item - 1; i >= 0; i--)
		{
			printf("\t| %d |\n", stack[i]);
		}
		printf("\t------");
	}
	else
	{
		printf("Not Found");
	}
}
