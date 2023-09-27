// Dua chan trong mang len dau Mang dua Le xuong cuoi Mang
#include<iostream>
using namespace std;
#define size 200
void xoatPhanTuTrongMang(int x,int&n,int A[]);
void TachCacPhanTuDuongThanhMang(int &nA,int A[],int &nB,int B[]);
void TachCac0ThanhMang(int &nA,int A[],int &nC,int C[]);
void DuaChanLenDauDuaLeVeSau(int nA,int A[],int &nB,int B[],int nC,int C[]);
void nhap(int &n,int A[]);
void xuat(int n,int A[]);
int main()
{
	int nA,A[size];
	int nB,B[size];
	int nC,C[size];
	nhap(nA,A);
	DuaChanLenDauDuaLeVeSau(nA,A,nB,B,nC,C);
	xuat(nB,B);
	return 0;
}
void xoatPhanTuTrongMang(int x,int&n,int A[])
{
	for(int i=x;i<n-1;i++)
	    A[i]=A[i+1];
	n--;   
}
void TachCacPhanTuDuongThanhMang(int &nA,int A[],int &nB,int B[])
{
	nB=0;
	for(int i=0;i<nA;i++)
	{
		if(A[i]%2==0 && A[i]!=0)
		{
		    B[nB]=A[i];
		    nB++;
		    xoatPhanTuTrongMang(i,nA,A);
		}
	}
}
void TachCac0ThanhMang(int &nA,int A[],int &nC,int C[])
{
	nC=0;
	for(int i=0;i<nA;i++)
	{
		if(A[i]==0)
		{
		    C[nC]=A[i];
		    nC++;
		    xoatPhanTuTrongMang(i,nA,A);
		}
	}
}
void DuaChanLenDauDuaLeVeSau(int nA,int A[],int &nB,int B[],int nC,int C[])
{
	TachCacPhanTuDuongThanhMang(nA,A,nB,B);
	TachCac0ThanhMang(nA,A,nC,C);
	for(int i=0;i<nC;i++)
	{
		B[nB]=C[i];
		nB++;
	}
	for(int i=0;i<nA;i++)
	{
		B[nB]=A[i];
		nB++;
	}	
}
void nhap(int &n,int A[])
{
	cout<<"So Phan Tu Trong Mang:";
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}
void xuat(int n,int A[])
{
	for(int i=0;i<n;i++)
	cout<<A[i]<<" ";
}
