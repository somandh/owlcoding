#include<bits/stdc++.h>
using namespace std;
void org(int *st,int *arr,int n,int *top)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		if(*top==-1 || (arr[i]!=st[*top]))
		{
			*top+=1;
			st[*top]=arr[i];
		}
	}
}
void main()
{
	int arr[100],st[100],i,top=-1,n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i]
	}
	org(st,arr,n,&top);
	for(i=0;i<=top;i++)
	{
		cout<<st[i];
	}
}
