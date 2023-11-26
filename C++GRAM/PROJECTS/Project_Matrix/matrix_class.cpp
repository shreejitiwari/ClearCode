#include<iostream>
using namespace std;

class matrix
{
    private:
        int i,j;
        int matrix[i][j];

    public:

        //constructors : 

        matrix()
        {
            i=3; j=3;
            matrix = {
                    0,0,0,
                    0,0,0,
                    0,0,0
                    };

        }

        matrix(int row, int col)
        {
            i = row;
            j = col;
        }

        matrix(int row, int col, int array[])
        {
            i = row;
            j = col;

            int size = sizeof(array)/sizeof(array[0]);

            int idx = 0;
            for (int r=0; r<i; r++)
            {
                for (int c=0; c<j; c++)
                {
                    matrix[r][c] = array[idx];
                    idx++;
                }                
            }

        }

        matrix(matrix &other_matrix)
        {
            i = other_matrix.i;
            j = other_matrix.j;

            for (int r=0; r<i; r++)
            {
                for (int c=0; c<j; c++)
                {
                    matrix[r][c] = other_matrix[r][c];
                }                
            }
        }

        void get_matrix()
        {
            cout<<"Enter the matrix elements for a "<<i<<"x"<<j<<" matrix"<<endl;
            for (int row=0; row<i; row++)
            {
                for (int col=0; col<j; col++)
                {
                    cin>>matrix[row][col]
                }
            }
        }

        void show_matrix()
        {
            cout<<endl;
            for (int row=0; row<i; row++)
            {
                for (int col=0; col<j; col++)
                {
                    cout<<matrix[row][col]<<" ";
                }
                cout<<endl;
            }
        }
    
    

};



int main()
{
    matrix M;
    M.show_matrix();


    return 0;
}
