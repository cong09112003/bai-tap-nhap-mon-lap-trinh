// Kho Doc
#include<iostream>
#include<string.h>
#define size 1000
using namespace std;
void nhap(char S[]);
void checkDOC(char S[]);
int main()
{
	char S[size];
	nhap(S);
	checkDOC(S);
	return 0;
}	
void nhap(char S[])
{
	gets(S);
}	
void checkDOC(char S[])
{
	int len=strlen(S);
	int dk1=0,dk2=0;
	for(int i=0;i<len;i+=2)
	{
		if(S[i]>= 65 && S[i]<=90)
		    dk1=1;
	}
	for(int i=1;i<len;i+=2)
	{
		if(S[i]>=97 && S[i]<=122 )
		dk2=1;
	}	
	if(dk1==1 || dk2==1 )
	cout<<"No";
	else
	cout<<"Yes";
}	
