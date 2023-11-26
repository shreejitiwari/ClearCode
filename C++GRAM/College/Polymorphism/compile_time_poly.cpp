#include<iostream>

using namespace std;
class base
{	protected:
	float sal;
	float hra;
	public:
		base()
		{
			cout<<"\n\tBase Class Constructor";
			hra=1000;
		}
	 	void calsal()
		{
			sal=hra+120;
			cout<<"\nBase class Salary is "<<sal;
		}		
		void calsal(int incr)
		{
			cout<<"\n\tBase Total sal is "<<hra+incr;
		}
				
};
class derived:public base
{
	int renum;
	public:
		derived()
		{
			cout<<"\n\tDerived Class Constructor";
			renum=500;	
		}	
	void calsal()
		{
			sal=hra+renum;
			cout<<"\nDerived class Salary is "<<sal;
		}
			
};

int main()
{
  
   	base *bptr;
	
	bptr=new derived();
    ((derived *)bptr)->calsal();
    //compile time polymorphism using type casting 
	// bptr->calsal();
	delete bptr;
return 0;	
}