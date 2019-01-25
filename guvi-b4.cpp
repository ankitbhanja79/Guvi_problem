#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
	char a;
	cin>>a;
	if(isalpha(a))
	{
		cout<<"Alphabet";
	}
	else
	{
		cout<<"No";
	}
	return 0;
}
