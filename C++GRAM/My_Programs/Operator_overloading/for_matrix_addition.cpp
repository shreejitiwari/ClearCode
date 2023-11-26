#include<iostream>
using namespace std;


struct matrix
{ 
    int matrix[3][3];
};

void print_matrix(matrix);
matrix operator +(matrix, matrix);
matrix operator - (matrix, matrix);



int main()
{
    matrix A = {1,2,3,
                4,5,6,
                7,8,9};

    matrix B = {9,8,7,
                6,5,4,
                3,2,1};


    matrix SUM = A+B;
    matrix DIFF_A_B = A-B;
    matrix DIFF_B_A = B-A;

    cout<<"Summation of two matrix"<<endl;
    print_matrix(SUM);
    
    cout<<endl<<"A-B"<<endl;
    print_matrix(DIFF_A_B);

    cout<<endl<<"B-A"<<endl;
    print_matrix(DIFF_B_A);



    return 0;
}


void print_matrix(matrix A)
{
    for (int row=0; row<3; row++)
    {
        for (int col=0; col<3; col++)
        {
            cout<<A.matrix[row][col]<<" ";
        }
        cout<<endl;
    }

}


matrix operator +(matrix A, matrix B)
{
    matrix sum;

    for (int row=0; row<3; row++)
    {
        for (int col=0; col<3; col++)
        {
            sum.matrix[row][col] = A.matrix[row][col] + B.matrix[row][col];
        }
    }

    return sum;

}


matrix operator -(matrix A, matrix B)
{
    matrix sum;

    for (int row=0; row<3; row++)
    {
        for (int col=0; col<3; col++)
        {
            sum.matrix[row][col] = A.matrix[row][col] - B.matrix[row][col];
        }
    }

    return sum;

}
