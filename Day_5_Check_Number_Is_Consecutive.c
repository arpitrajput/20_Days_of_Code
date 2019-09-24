#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i,j,a[3];

// input 3 integers	
	for(i=0;i<3;i++)
	scanf("%d",&a[i]);


// Bubble Sort
    for(i=0;i<3;i++)
    {
        for(j=0;j<3-i-1;j++)
        {
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
	

	if(abs(a[2]-a[1]) == 1 && (a[1]-a[0]) == 1)
	printf("%s","Yes");
	else printf("%s","No");
	
	
	return 0;
}