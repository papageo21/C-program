#include<iostream>
using namespace std;

class people{
    public:
        people();
        ~people();
        void set_weight(int _weight);
        void set(float _height);
        int get()const;
        float get_height()const;
        void print();
    private:
    int weight;
    float height;
};


int main()
{
    people george;
    int n;
    float i;
    
    cout<<"Give your weight: ";
    cin>>n;
    george.set_weight(n);
    
    cout<<"Give your height: ";
    cin>>i;
    george.set(i);
    
    george.get();
    george.get_height();
    george.print();
    
    return 0;
}
people::people()
{
    weight = 0;
    height = 0.0;

}

people::~people()
{
    cout<<"Destracting..."<<endl;
}
void people::set_weight(int _weight)
{
    weight = _weight;
   
}
void people::set(float _height)
{
    height = _height;
}
int people::get()const
{
    return weight;
}
void people::print()
{
    if(weight > 90)
        cout<<"You are fat!!"<<endl;
    else if(weight >50  )
        cout<<"You are fitness!Good.."<<endl;
    else 
        cout<<"You are very week"<<endl;
        
        
    if(height>1.5)
        cout<<"You're tall.."<<endl;
    else
        cout<<"You 're small.."<<endl;
}
float people:: get_height()const
{
    return height;
}