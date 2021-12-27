#include<iostream>
using namespace std;

int fib(int x);

int main()
{
    cout<<endl<<"The fibonacci is:"<<fib(10)<<endl;
    
    return 0;
}
int fib(int x)
{
    static int calls = 0;
    
    calls++;
    cout<<calls<<endl;
    if(x==1 || x==2)
        return 1;
    else
        return fib(x-1) + fib(x-2); 
    
    
}