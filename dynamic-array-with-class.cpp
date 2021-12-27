#include<iostream>
using namespace std;

class dummy
{
    public:
        dummy();
        void set_i(int _x);
        int get_i()const;
        ~dummy();
    
    
    private:
        int x;
};

int main()
{
    dummy *array;
    int n;
    
    cout<<"Give n: ";
    cin>>n;
    
    array = new dummy[n];
    if(!array)
        cout<<"error ellucating memory..";
        
    for(int i=0; i<n; i++)
         array[i].set_i(i*i);
    
    for(int i=0; i<n; i++)
        cout<<array[i].get_i()<<" ";
    
    delete [] array;
    
    return 0;
}
dummy::dummy()
{
    x=0;
    cout<<"Costractor..."<<endl;
}
void dummy:: set_i(int _x)
{
    x = _x;
}
int dummy::get_i() const
{
    return x;
}
dummy::~dummy()
{
    cout<<endl<<"destructing...";
}