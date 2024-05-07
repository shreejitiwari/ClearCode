#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main()
{
     string s1  ("Help me code");
     string s2;
     string s3(3,'a');
     string s4 = {'a', 'b', 'c'};
     string s5 {'a', 'b', 'c'};
     string s6 (s1);
     s1[3] = 'k';
     string s7 (begin(s1)+3, begin(s1)+8);
     s1.append(s4);
     s3.resize(20,'&');
    //  s1.clear();
    // s2.insert(s2.begin(), "H");
     s3.erase(10,5);
     s3.insert(10,"hrhrs");
     cout<<"s1 : "<<s1<<endl;
     cout<<"s2 : "<<s2<<endl;
     cout<<"s3 : "<<s3<<endl;
     cout<<"s4 : "<<s4<<endl;
     cout<<"s5 : "<<s5<<endl;
     cout<<"s6 : "<<s6<<endl;
     cout<<"s7 : "<<s7<<endl;
    //  cout<<"s8 : "<<s8<<endl;
    
    queue<char> test_me;
    for (char ch='a'; ch <= 'z'; ch++)
    {
        test_me.push(ch);
    }

    // cout<<test_me<<" : "<<test_me.size()<<endl;

    int times = 10;
    while (times--)
    {
        test_me.pop();
    }
    // cout<<test_me<<" : "<<test_me.size()<<endl;
    
    return 0;
}