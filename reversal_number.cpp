#include <iostream> 
#include <math.h> 
using namespace std;


int main()
 { 
		
	int num, first, last, sum, digits, new_num, a, b; 
		
		
	cout << "Parakalw eisagete enan ari8mo: "; 
	cin >> num; 
	cout << "O ari8mos pou dwsate einai o " << num << "." << endl; 
		
		// briskoume apo posa pshfia apoteleitai o ari8mos pou dw8hke 
	digits = (int)log10(num); 
		// briskoume poio einai to 1o kai to teleutaio tou pshfio 
	first = num / pow(10, digits); 
	last = num % 10; 
		
	   // “apokoboume” to 1o kai teleutaio pshfio apo ton ari8mo mas 
	a = first * (pow(10, digits)); 
	b = num % a; 
	num = b / 10; 
		
	   // “anakataskeyazoyme” ton antestrammeno ari8mo 
	new_num = last * (pow(10, digits)) + (num * 10) + first; 
	cout << "Meta apo antimeta8esh tou 1ou kai teleytaioy pshfiou prokyptei o ari8mos " << new_num << "." << endl; 
	
}