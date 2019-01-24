#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int n,a[20],b[20],j=0,count=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	b[j]=a[0];
	count++;
	for(int i=1;i<n;i++)
	{
		for(int k=0;k<count;k++)
		{
			if(a[i]==b[k])
			{
				cout<<"\n"<<a[i];
				exit(0);
			}
		}
		j++;
		b[j]=a[i];
		count++;
	}
	return 0;
}
