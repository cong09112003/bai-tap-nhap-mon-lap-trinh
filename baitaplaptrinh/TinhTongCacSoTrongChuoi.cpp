// tinh tong cac so trong chuoi
// 2A789BCHT5K7
#include<iostream>
#include<string.h>
using namespace std;
int tinhTongCacSoTrongChuoi(char S[]);
void nhap(char S[]);
void xuat(int x);
int main()
{
	char S[100];
	nhap(S);
	int Tong=tinhTongCacSoTrongChuoi(S);
	xuat(Tong);
	return 0;
}
int tinhTongCacSoTrongChuoi(char S[])
{
	int len = strlen(S);
	int i=0;
	int Tong=0;
	int so=0;
	while(i<=len)
	{
		if(S[i]>='0' && S[i]<='9')
		so = so * 10 + (S[i] - '0');
		else 
		{
			Tong = Tong + so;
			so = 0;
		}
		i++;
	}
	return Tong;	
}
void nhap(char S[])
{
    gets(S);
}
void xuat(int x)
{
    cout<<x;
}	
