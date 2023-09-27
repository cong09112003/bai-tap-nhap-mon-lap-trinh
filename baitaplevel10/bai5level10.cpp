// xoa bo cac khoang trang thua trong 1 chuoi 
#include<iostream>
#include<string.h>
using namespace std;
#define size 1000
void xoaBoCacKhoanTrangThua(char S[]);
void xuat(char S[]);
void nhap(char S[]);
int main()
{
	char S[size];
	nhap(S);
	xoaBoCacKhoanTrangThua(S);
	xuat(S);
	return 0;
}	
void nhap(char S[])
{
	gets(S);
}
void xuat(char S[])
{
	puts(S);
}
void xoaBoCacKhoanTrangThua(char S[])
{
	while(S[0]==' ')
	    strcpy(&S[0],&S[1]);
	int x=strlen(S);
	for(int i=0;i<x-1;i++)
	{
		if((S[i]==' '&& S[i+1]==' '))
		{
		    strcpy(&S[i],&S[i+1]);
		    i--;
	    }
	}
	while(S[x-1]==' ')
	strcpy(&S[x-1],&S[x]);
	S[x]='\0';    
}

