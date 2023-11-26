#include<iostream>
using namespcae std;

class queue
{
    
    int front, rear, *a;
    
    public:    
        queue(int size=10)
        {
            front=rear=-1;
            a = new int[size];
        }

        void enqueue(int val)
        {
            if (front == -1 && rear == -1)
            {
                front=rear=0;
                a[rear]=val;
            }

            if ()
        }

};