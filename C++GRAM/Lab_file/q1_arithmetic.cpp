#include<iostream>
using namespace std;

class Arithmetic_operations
{
    private:
        double result;

    public:
        double add(double a, double b)
        {
            result = a+b;
            return result;
        }

        double subtract(double a, double b)
        {
            result = a-b;
            return result;
        }

        double multiply(double a, double b)
        {
            result = a*b;
            return result;
        }

        double divide(double a, double b)
        {
            if (b!=0)            
                result = a/b;

            else
                result = -1;

            return result;

        }

};

int main()
{
    Arithmetic_operations Operate;
    
    auto sum = Operate.add(2.6,7.8);
    cout<<"Sum = "<<sum<<endl;

    auto difference = Operate.subtract(2.6, 7.8);
    cout<<"Difference = "<<difference<<endl;

    auto product = Operate.multiply(2.6, 7.8);
    cout<<"Product = "<<product<<endl;

    auto quotient = Operate.divide(2.6, 7.8);
    cout<<"Quotient = "<<quotient<<endl;

    return 0;


}