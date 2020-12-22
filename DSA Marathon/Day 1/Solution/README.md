```
#include<iostream>
using namespace std;

int main()
{
	int n,t;
	int arr[1000];
	cin>>t;
	while(t--)
	{
	cin>>n;
	for(int i=0;i<=n;i++)
	cin>>arr[i];
	int *c= new int[n+1];
	
	for(int i=0;i<=n;i++)
	{
	 	c[arr[i]]++;
	
	if(c[arr[i]]>1)
	   {
		 cout<<arr[i]<<endl;
		 break;
	   }
	}
	}
	return -1;	
}
```
