//nhap mang a va mang b, Liet Ke Cac Phan tu chi xuat hien 1 trong 2 mang
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
#define size 200
void nhap(int &n,float A[]);
void XuatHien1Trong2(int nA,float A[],int nB,float B[]);
void xuat(float x);
int main()
{
	int nA,nB;
	float A[size],B[size];
	nhap(nA,A);
	nhap(nB,B);
	XuatHien1Trong2(nA,A,nB,B);
	xuat;
	return 0;
}
void XuatHien1Trong2(int nA,float A[],int nB,float B[])
{
	int dem=0;
	int check;
	for(int i=0;i<nA;i++)
	{
		check=0;
		for(int j=0;j<nA;j++)
		{
			if(A[i]==B[j])
			{
				check=1;
				break;
			}
	    }
	    if(check==0)
	        xuat(A[i]);
	}
	for(int i=0;i<nB;i++)
	{
		check=0;
		for(int j=0;j<nA;j++)
		{
			if(B[i]==A[j])
			{
				check=1;
				break;
			}
		}
		if(check==0)
		    xuat(B[i]);
	}
}
void nhap(int &n,float A[])
{
	cout<<"nhap so phan tu trong mang:";
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}
void xuat(float x)
{
	cout<<x<<" "<<" ";
}
