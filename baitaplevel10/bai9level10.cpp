// chuyen chu dau tien cua moi tu thanh chu in hoa
#include<iostream>
#include<string.h>
using namespace std;
void nhap(char S[]);
void chuyenChuDauTienThanhInHoa(char S[]);
void nhap(char S[]);
void xuat(char S[]);
void xoaBoCacKhoanTrangThua(char S[]);
void chuyenThanhChuHoa(char &x);
#define size 2000
int main()
{
	char S[size];
	nhap(S);
	chuyenChuDauTienThanhInHoa(S);
	xuat(S);
	return 0;
}
void nhap(char S[])
{
	cout<<"nhap chuoi:";
	gets(S);
}	
void xuat(char S[])
{
	puts(S);
}
void chuyenThanhChuHoa(char &x)
{
	if(x>=97 && x<=122)
	    x=x - 32;  
}
void xoaBoCacKhoanTrangThua(char S[])
{
	while(S[0]==' ')
	    strcpy(&S[0],&S[1]);
	int x=strlen(S);
	for(int i=0;i<x-1;i++)
	{
		if(S[i]==' '&&S[i+1]==' ')
		{
		    strcpy(&S[i],&S[i+1]);
		    i--;
	    }
	}
	while(S[x-1]==' ')
	    strcpy(&S[x-1],&S[x]);
}
void chuyenChuDauTienThanhInHoa(char S[])
{
	xoaBoCacKhoanTrangThua(S);
	int n=strlen(S);
	chuyenThanhChuHoa(S[0]);
	for(int i=0;i<n;i++)
	{
		if(S[i]==' ')
		chuyenThanhChuHoa(S[i+1]);
	}	
}	
