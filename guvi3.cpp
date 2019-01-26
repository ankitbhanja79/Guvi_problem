#include<iostream>
#include<stdio.h>
#include<string.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,a[100],flag=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==i)
		{
			cout<<a[i]<<" ";
			flag=1;
		}
	}
	if(flag==0)
	{
		cout<<"-1";
	}
	return 0;
}
