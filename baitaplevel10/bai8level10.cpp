// nhap vao 2 chuoi kiem tra chuoi co phai chuoi con cua chuoi kia hay khong?
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
bool kiemTraChuoiCon(char S[],char Z[]);
bool TimThay(char x,char A[],int n);
void xuat(bool check);
void nhap(char S[]);
#define size 2000
int main()
{
	char S[size];
	char Z[size];
	nhap(S);
	nhap(Z);
	bool check=kiemTraChuoiCon(S,Z);
	xuat(check);
	return 0;
}
bool kiemTraChuoiCon(char S[],char Z[])
{
	int x=strlen(S);
	int y=strlen(Z);
	int k=0;
	for(int i=0;i<x;i++)
	{
		if (TimThay(S[i],Z,y)==false)
		    k=1;
	}
	if(k==1)
	{
		for(int j=0;j<y;j++)
		    if (TimThay(Z[j],S,x)==false)
		        k=2;
	}
	if(k==1||k==2)
	    return false;
	return true;		
}
bool TimThay(char x,char A[],int n)
{
	for(int i=0;i<n;i++)
	    if(A[i]==x)
	        return true;
	return false;           
}
void nhap(char S[])
{
	cout<<"Nhap chuoi:";
	gets(S);
}
void xuat(bool check)
{
	if(check==true)
	cout<<"Mang nay la co cua cua mang kia";
	else
	cout<<"Mang nay khong la con cua cua mang kia";
}	
