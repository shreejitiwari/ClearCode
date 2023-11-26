#include<iostream>
using namespace std;

class prime
{
    private:
        int lower_range, upper_range;

    public:
        prime()
        {
            lower_range = 0;
            upper_range = 0;
        }

        prime(int l, int u)
        {
            lower_range = l;
            upper_range = u;
        }

        void show_prime()
        {
            for (int i=lower_range; i<=upper_range; i++)
            {   int isprime = 1;
                for (int j=2; j<=i; j++)
                {
                    if (i%j ==0 && i!=j)
                    {
                        isprime=0; 
                        break;
                    }
                }

                if (isprime && i>=2)
                {
                    cout<<i<<" , ";
                }
            }
        }


};

int main()
{
    prime series(1,20);
    series.show_prime();
}