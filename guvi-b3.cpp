#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	char a;
	cin>>a;
	if(a=='a' || a=='A' || a=='e' || a=='E' || a=='i' || a=='I' || a=='o' || a=='O' || a=='u' || a=='U')
	{
		cout<<"Vowel";
	}
	else
	{
		cout<<"Consonent";
	}
	return 0;
}
