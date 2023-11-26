#include<iostream>
using namespace std;

class fridge
{
    private:
        int chocolate, soft_drink, tomato , vegetable;

    public:
        fridge()
        {
           chocolate = 2; soft_drink = 1; tomato = 10; vegetable = 5; 
        }

        void open_fridge()
        {
            cout<<"chocolate : "<<chocolate<<endl<<"soft drink : "<<soft_drink<<endl<<"tomato : "<<tomato<<endl<<"vegetable : "<<vegetable;

        }

        friend void bhookha_dost(fridge &mera_fridge);
};

void bhookha_dost(fridge &mera_fridge)
{
    cout<<"\n\n\nHello, mai hu bhookha dost !!\nAb mai tumhara fridge khol rha hu !!\n hehe\n";
    cout<<endl<<"chocolate : "<<mera_fridge.chocolate<<endl<<"soft drink : "<<mera_fridge.soft_drink<<endl<<"tomato : "<<mera_fridge.tomato<<endl<<"vegetable : "<<mera_fridge.vegetable;

}


int main()
{
    fridge shreeji_ka_fridge;

    cout<<"\n\nItems in shreeji ka fridge : \n";
    shreeji_ka_fridge.open_fridge();
    bhookha_dost(shreeji_ka_fridge);

}