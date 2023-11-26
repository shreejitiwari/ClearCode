/*
STEP 1:

4 4 4 4 
4 3 3 3 
4 3 2 2 
4 3 2 1 

*/

/*
STEP 2: 

*/


#include<stdio.h>

int min(int, int);

int main()
{
    int row,col,col2,row2,n;
    n = 4;
    for (row=0;row<n;row++)
    {
        for (col=0; col<n; col++)
        {
            printf("%d ", n-min(row,col));
        }

        for (col2 = col-2;col2>=0; col2--)
        {
            printf("%d ", n-min(row,col2));          
        }


        printf("\n");

    }

    for (row2=row-2;row2>=0;row2--)
    {
        for (col=0; col<n; col++)
        {
            printf("%d ", n-min(row2,col));
        }

        for (col2 = col-2;col2>=0; col2--)
        {
            printf("%d ", n-min(row2,col2));
        }


        printf("\n");

    }


    return 0;
}

int min(int x,int y)
{
    if (x>=y)
    {
        return y;
    }
    else
    {
        return x;
    }
}