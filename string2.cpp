#include <iostream> 
#include <string> 
using namespace std; 


int main() 
{ 
	string text="Ena dyo tria tessera pente eksi efta oktw ennia deka"; 
	string end_text; 
	int num; 
	   
	cout << "Parakalw prosdioriste posous xarakthres apo to telos na emfanisw: "; 
	cin >> num; 
	   
	if (num>text.length()) 
	  cout << "To keimeno den exei tosous pollous xarakthres!" << endl; 
	else { 
	  end_text = text.substr(text.length()-num, text.length()); 
	  cout << "Oi xarakthres pou prosdiorisate einai: " << end_text << 
	endl; 
  }     
} 