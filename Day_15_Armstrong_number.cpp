#include <iostream>
#include <math.h>
using namespace std;

int main() {
	
	int num,len=0,temp=0,sum=0,rem=0;
	
	cout<<"Enter the number :\n";
	cin>>num;
	temp=num;
	
	while(temp != 0){
	    len++;
	    temp = temp/10;
	}
	
	temp = num;
	while(temp != 0){
	    rem = temp % 10;
	    temp = temp / 10;
	    sum = sum + pow(rem,len);
	}
	
	if (sum == num) cout<<"Armstrong number";
	else cout<<"Not Armstrong number";
	
	return 0;
}