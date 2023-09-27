// dem so luong tu cua chuoi
#include<iostream>
#include<string.h>
#define size 100
using namespace std;
void nhap(char S[]);
int demTu(char S[]);
void xuat(int x);
int main()
{
	char S[size];
	nhap(S);
	int soluong=demTu(S);
	xuat(soluong);
	return 0;
}
void nhap(char S[])
{
	gets(S);
}
void xuat(int x)
{
	cout<<x;
}
int demTu(char S[])
{
	int x=strlen(S);
	int dem=0;
	if(S[0]!=' ')
	    dem++;
	for(int i=0;i<x-1;i++)
	{
		if(S[i]==32 && S[i+1]!=32)
		    dem++;
	}
	return dem;		
}	
