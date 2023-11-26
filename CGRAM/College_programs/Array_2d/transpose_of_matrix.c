#include<stdio.h>
#define SIZE 3

void display(int a[][SIZE]);

int main()
{
    int matrix[SIZE][SIZE], i,j, temp;
    printf("Enter the elements of 3x3 matrix : \n");
    for (i=0; i<SIZE; i++)
    {
        for (j=0; j<SIZE; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("\n\nEntered Matrix : \n");
    display(matrix);

    // transposing matrix
    for (i=0; i<SIZE; i++)
    {
        for (j=i; j<SIZE; j++)
        {
            
            
            temp = matrix[j][i];
            matrix[j][i] = matrix[i][j];
            matrix[i][j] = temp;
                
            
        }
    }

    printf("\n\n");

    // printing transposed matrix
    printf("Transposed matrix : \n");
    display(matrix);


    return 0;
}

void display(int a[][SIZE])
{
    int i=0,j=0;
    for (i=0; i<SIZE; i++)
    {
        for (j=0; j<SIZE; j++)
        {

            printf("%d ", a[i][j]);

        }
        printf("\n");
    }   

}