#include <stdio.h>

int main() {
	
	int num,i,j,temp,a[4];
	
	scanf("%d",&num);
	temp = num;
	
	while(temp){
	    a[i] = temp%10;
	    temp /= 10;
	    i++;
	}
	
	for(i=0;i<4;i++){
	    for(j=0;j<4-i-1;j++){
	        if(a[j]<a[j+1]){
	            int temp = a[j];
	            a[j] = a[j+1];
	            a[j+1] = temp;
	        }
	    }
	}
	
	int res=0;
	
	for(i=0;i<4;i++)
	res = res*10+a[i];
	
	printf("%d",res);
	
	return 0;
}