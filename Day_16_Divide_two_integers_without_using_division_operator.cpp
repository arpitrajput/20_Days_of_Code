#include <bits/stdc++.h> 
using namespace std; 

int divide(int a, int b) { 

int sign = ((a < 0) ^ (b < 0)) ? -1 : 1; 

a = abs(a); 
b = abs(b); 

int q = 0; 

while (a >= b) { 
	a -= b; 
	++q; 
} 

return sign * q; 
} 

int main() { 

int a,b;
cout<<"Enter two numbers :\n";
cin>>a>>b;

cout << divide(a, b) << "\n"; 

return 0; 
} 
