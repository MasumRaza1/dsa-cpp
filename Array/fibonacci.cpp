#include<bits/stdc++.h>
using namespace std;
int arr[18];
 int fibo(int n)
  {
   
   if(n<=1)
   {
       arr[n]=n;
   	 return n;
   }
   else if(arr[n-2]=-1)
   {
       arr[n-2] = fibo(n-2);

   }
    else if(arr[n-1]=-1)
   {
       arr[n-1] = fibo(n-1);

   }
   return arr[n-2]+ arr[n-1];
	
}

int main(){
    int arr[18];
    
    for(int i =0; i<18; i++)
    {
        arr[i]=-1;
    }
	
    int n=18,i =0;
   while(i<n)
   {
   	cout<<fibo(i)<<" ";
   	i++;
   }
	
  

	return 0;
}
