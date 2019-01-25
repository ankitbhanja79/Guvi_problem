#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
	int n,k,a[100],sum=0;
	cin>>n;
	cin>>k;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<k;i++)
	{
		sum=sum+a[i];
	}
	cout<<sum;
	return 0;
}
