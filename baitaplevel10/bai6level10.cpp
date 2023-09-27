// viet chuong trinh tinh tong cac ki tu so trong chuoi
#include<iostream>
#include<math.h>
#include<string.h>
#define size 2000
using namespace std;
int tinhTongCacKiTuSo(char S[]);
void nhap(char S[]);
void xuat(int x);
int main()
{
	char S[size];
	nhap(S);
	int so=tinhTongCacKiTuSo(S);
	xuat(so);
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
int tinhTongCacKiTuSo(char S[])
{
	int Tong=0;
	int x=strlen(S);
	for(int i=0;i<x;i++)
	{
		if(S[i]>=48 && S[i]<=57)
		    Tong=Tong+(S[i]-'0');  
    }
    return Tong;
}
