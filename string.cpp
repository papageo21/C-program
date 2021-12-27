#include <iostream> 
#include <string> 
using namespace std; 


int main() 
{ 
  string s1="kalliO", s2="pente", s3="kai sto xeri", s4="deka para", s5="kai karter"; 
  
  s1=s1.substr(1,s1.length()-2); 
  
  s1='K'+s1+'o'+' '; 
  s2+=' '; 
  s3+=' '; 
  string temp(s4, 5, 4); 
  s4=' '+temp+' '+s4.substr(0,4)+' '; 
  s5+="ei"; 
  
  cout << s1 + s2 + s3 + s4 + s5 +".\n"; 
}