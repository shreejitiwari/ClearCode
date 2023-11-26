#include<iostream>
#include<math.h>

using namespace std;

class co_ordinate
{
    private:
        float x,y,z;

    public:
        co_ordinate()
        {
            x=0.00f;
            y=0.00f;
            z=0.00f;
        }

        co_ordinate(float X,float Y)
        {
            x = X;
            y = Y;
            z = 0.00f;
        }

        co_ordinate(float X,float Y, float Z)
        {
            x = X;
            y = Y;
            z = Z;
        }

        void set_coordinates(float X,float Y, float Z)
        {
            x = X;
            y = Y;
            z = Z;
        }

        void show_coordinates()
        {
            cout<<"(x,y,z) = "<<"("<<x<<","<<y<<","<<z<<")"<<endl;
        }

        friend float calculate_distance(co_ordinate &, co_ordinate &);
        friend float calculate_distance(co_ordinate &);
        friend co_ordinate operator+(co_ordinate &, co_ordinate &);


};


float calculate_distance(co_ordinate &p)
{
    float distance = sqrt(pow(p.x,2) + pow(p.y, 2) + pow(p.z,2));

    return distance;

}



float calculate_distance(co_ordinate &p1, co_ordinate &p2)
{
    float x_diff = p2.x - p1.x;
    float y_diff = p2.y - p1.y;
    float z_diff = p2.z - p1.z;

    float distance = sqrt(pow(x_diff,2) + pow(y_diff, 2) + pow(z_diff,2));

    return distance;

}


co_ordinate operator+(co_ordinate &p1, co_ordinate &p2)
{
    co_ordinate temp;
    temp.x = p1.x + p2.x;
    temp.y = p1.y + p2.y;
    temp.z = p1.z + p2.z;

    return temp;
}


int main()
{
    co_ordinate A(1,1), B(4,5);
    cout<<"co-ordinates of A : ";
    A.show_coordinates();
    cout<<"co-ordinates of B : ";
    B.show_coordinates();

    cout<<"Distance of A from origin : "<<calculate_distance(A)<<endl;
    cout<<"Distance of A from origin : "<<calculate_distance(B)<<endl;
    cout<<"Distance between A and B = "<<calculate_distance(A,B)<<endl<<endl;

    co_ordinate C = A+B;

    cout<<"New co-ordinates from A + B : ";
    C.show_coordinates();

}