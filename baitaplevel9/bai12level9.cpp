// Xoa tat cac so Lon Nhat Trong Mang
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
#define size 200
void TimMaxBangMang(int nA,float A[]);
void xoaPhanTuXCuaMang(int x,int &nA,float A[]);
void XoaHetMax(int &nA,float A[]);
void nhap(int &n,float A[]);
void xuat(int n,float A[]);
float TimMax(int nA,float A[]);
int main()
{
	int nA,nB;
	float A[size];
	nhap(nA,A);
	XoaHetMax(nA,A);
	xuat(nA,A);
	return 0;
}
float TimMax(int nA,float A[])
{
	float max=A[0];
	for(int i=1;i<nA;i++)
	{
		if(A[i]>max)
		    max=A[i];
	}
	return max;	
}
void xoaPhanTuXCuaMang(int x,int &nA,float A[])
{
	for(int i=x;i<nA;i++)
		A[i]=A[i+1];
	nA--;
}
void XoaHetMax(int &nA,float A[])
{
	float MAX=TimMax(nA,A);
	for(int iA=0;iA<nA;iA++)
	{
		if(A[iA]==MAX)
		{
			xoaPhanTuXCuaMang(iA,nA,A);
			iA--;
		}	
	}
}
void nhap(int &n,float A[])
{
	cout<<"nhap so phan tu trong mang:";
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}
void xuat(int n,float A[])
{
	for(int i=0;i<n;i++)
	    cout<<A[i]<<" ";
}
