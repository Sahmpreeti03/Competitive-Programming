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
  	vector<int>sub;
	  for(int j=i;j<n;j++)
	  {
	  	sub.push_back(a[i]);
	  	//for(int k=i;k<=j;k++)
	  	for (auto k:sub)
	  	cout<<a[k]<<" ";
		//cout<<"\n";
		cout<<endl;
	  	
	  }
		  
  }
    
   return 0;
}
