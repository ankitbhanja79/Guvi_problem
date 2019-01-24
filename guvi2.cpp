#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,a[20],sum=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n,greater<int>());
	for(int i=0;i<n;i++)
	{
		sum=(sum*10)+a[i];
	}
	cout<<sum;
	return 0;
}
