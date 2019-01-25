#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	if(n%2==0)
	{
		cout<<"Even";
	}
	else if(n%2!=0)
	{
		cout<<"Odd";
	}
	else
	{
		cout<<"Invalid";
	}
	return 0;
}
