#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin>>n;
  int a[n];
  int sum=0;
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  for (int i=0;i<n;i++){
  		int sum=0;
	  for(int j=i;j<n;j++)
	  {
	  	sum=sum+a[j];
	  	cout<<sum<<endl;
	  }
	  
		  
  }
    
   return 0;
}
