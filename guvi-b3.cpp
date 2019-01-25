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
		if(a=='a' || a=='A' || a=='e' || a=='E' || a=='i' || a=='I' || a=='o' || a=='O' || a=='u' || a=='U')
		{
  		 cout<<"Vowel";
        }
		else
		{
		 cout<<"Consonent";
        }
	}
	else
	{
		cout<<"Invalid";
	}
	return 0;
}
