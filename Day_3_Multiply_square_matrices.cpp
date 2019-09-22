// Multiply two square matrices

#include <iostream> 

using namespace std; 

int main() 
{ 
	int i, j, k, n; 
	cout<<"Enter order of matrix: \n";
	cin>>n;
	int C[n][n];  
	int A[n][n]; 
	int B[n][n]; 

    cout<<"Enter matrix 1 elements: \n";
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin>>A[i][j];
    
    cout<<"Enter matrix 2 elements: \n";
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin>>B[i][j];
            

    cout<<"Matrix 1 is :\n";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            cout<<A[i][j]<<" ";
        cout<<"\n";
    }
    
    cout<<"Matrix 2 is: \n";
    for(i = 0; i < n; i++){
        for(j=0;j<n;j++)
            cout<<B[i][j]<<" ";
        cout<<"\n";   
    }


	for (i = 0; i < n; i++)  
		for (j = 0; j < n; j++) { 
			C[i][j] = 0; 
			for (k = 0; k < n; k++) 
				C[i][j] += A[i][k] * 
							B[k][j]; 
		} 
	

	cout<<"Result matrix  is: \n";
    for(i = 0; i < n; i++){
        for(j=0;j<n;j++)
            cout<<C[i][j]<<" ";
        cout<<"\n";   
    }
	
	return 0; 
} 