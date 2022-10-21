/*
* C Program to print a matrix diagonally from top to bottom
*/
 
#include <stdio.h>
#include <conio.h>
 
int main(){
    int rows, cols, rowCounter, colCounter, currentRow, currentCol;
    int inputMatrix[50][50];
     
    /*  Input matrix*/
    printf("Enter size of matrix\n");
    scanf("%d %d", &rows, &cols);
     
    printf("Enter the matrix of size %dX%d\n", rows, cols);
    for(rowCounter = 0; rowCounter < rows; rowCounter++){
        for(colCounter = 0; colCounter < cols; colCounter++){
            scanf("%d", &inputMatrix[rowCounter][colCounter]);
        }
    }
    printf("Printing matrix diagonally\n");
    if(rows == cols){
    	for(rowCounter = 0; rowCounter < rows; rowCounter++){
        for(colCounter = 0; colCounter < cols; colCounter++){
            if(rowCounter == colCounter){
            	printf("%d\t", inputMatrix[rowCounter][colCounter]);
						}
						else{
							printf("-\t");
						}
        }
        printf("\n");
    	}
		}
     
    getch();
    return 0;
}
