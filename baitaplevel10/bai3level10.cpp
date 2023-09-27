// nhap vao chuoi xuat ra chuoi dao nguoc
#include<iostream>
#include<math.h>
#include<string.h>
#define size 1000
using namespace std;
void daoNguoc(char S[]);
void nhap(char S[]);
void hoanVi(char &x,char &y);
void xuat(char S[]);
int main()
{
	char S[size];
	nhap(S);
	daoNguoc(S);
	xuat(S);
	return 0;
}	
void nhap(char S[])
{
	gets(S);
}
void hoanVi(char &x,char &y)
{
	char t=x;
	x=y;
	y=t;
}
void daoNguoc(char S[])
{
	int x=strlen(S);
	for(int i=0;i<x/2;i++)
	    hoanVi(S[i],S[x-i-1]);
}
void xuat(char S[])
{
	puts(S);
}	

