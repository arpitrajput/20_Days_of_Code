// C++ program to find LCM of two numbers 

#include <iostream> 

using namespace std; 

int gcd(int a, int b){ 
	if (a == 0) 
		return b; 
	return gcd(b % a, a); 
} 

int lcm(int a, int b) {
	return (a*b)/gcd(a, b); 
} 

int main() 
{ 
    int a,b;
    
    cout<<"Enter two numbers\n";
    cin>>a>>b;
    
    if (a<0 || b<0) 
    cout<<"Enter positive numbers\n";
    else
	 cout<<"LCM of "<<a<<" and "<<b<<" is "<<lcm(a, b); 
	
	return 0; 
} 
