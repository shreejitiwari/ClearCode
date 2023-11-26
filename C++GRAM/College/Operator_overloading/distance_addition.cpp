#include<iostream>
using namespace std;

class distance_d
{
    private:
        int km,m;

    public:
        distance_d()
        {
            km=0;
            m=0;
        }

        distance_d(int k, int mt)
        {
            m=mt;
            km=k + (m/1000);
            m = m%1000;
            
        }

        distance_d(distance_d & d)
        {
            m = d.m;
            km = d.km + (m/1000);
            m = m%1000;
        }

        void get_data()
        {
            cout<<"Enter distance_d in km and meter : ";
            cin>>km>>m;
        }

        void show_data()
        {
            cout<<km<<" km + "<<m<<"m"<<endl;
        }

        distance_d operator+(distance_d d)
        {
            distance_d temp;
            temp.m = m + d.m;                      
            temp.km += km + d.km + (temp.m/1000);
            temp.m = (temp.m)%1000;

            return temp;
           
        }

};


int main()
{
    distance_d d1(1,500), d2,d3;
    
    d2.get_data();

    cout<<"d1 = ";d1.show_data();
    cout<<"d2 = ";d2.show_data();

    d3 = d1 + d2;

    cout<<"d3 = ";d3.show_data();
    


    return 0;
}