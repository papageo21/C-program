#include<iostream>
#include <cstring>
using namespace std;



int main()
{
	
	char word[80];
    char rev[80];
    
    	cout<<"Pes mia leksi: ";
		cin>>word;
	

    size_t n = strlen( word );

    size_t i = 0;
    for ( ; i < n; i++ )  rev[i]= word[n - i - 1];
    rev[i] = '\0';

	cout << word << std::endl;
    cout << rev << std::endl;

    return 0;
	
}


