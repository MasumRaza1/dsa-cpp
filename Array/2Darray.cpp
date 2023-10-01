#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
	int A[] [4] ={{1,2,3,4},{12,13,14,5},{10,9,8,7}};
	
	int *B[3];
	int **C;
	int i,j;
	

	
	B[0] = new int[4];
	B[1] = new int[4];
	B[2] = new int[4];
	
	C= new int *[3];
	C[0]= new int[4];
	C[1]= new int[4];
	C[2]= new int[4];
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
				cout<<C[i][j]<<" ";
				
		}
	cout<<endl;
		
	}
	
	return 0;
}
