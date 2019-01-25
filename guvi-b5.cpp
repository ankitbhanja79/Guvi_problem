#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
	int a[3],max;
	for(int i=0;i<3;i++)
	{
		cin>>a[i];
	}
	max=a[0];
	for(int i=1;i<3;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	cout<<max;
	return 0;
}
