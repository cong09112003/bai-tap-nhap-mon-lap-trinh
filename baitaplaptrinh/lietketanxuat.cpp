//liet ke tan xuat xuat hien cac phan tu trong Mang
#include<iostream>
#include<string.h>
using namespace std;
void nhap(int &n,int A[]);
void xuat(int nB,int B[],int C[]);
void lietKeTanXuat(int nA,int A[],int &nB,int B[],int C[]);
bool timThay(int nB,int x,int B[]);
int demSoLanXuatHien(int nA,int A[],int x);
int main()
{
	int nA,nB;
	int A[200],B[200],C[200];
	nhap(nA,A);
	lietKeTanXuat(nA,A,nB,B,C);
	xuat(nB,B,C);
	return 0;
}
void nhap(int &n,int A[])
{
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>A[i];
}
void xuat(int nB,int B[],int C[])
{
	for(int i=0;i<nB;i++)
	{
		cout<<B[i]<<" xuat hien "<<C[i]<<endl;
	}
}
void lietKeTanXuat(int nA,int A[],int &nB,int B[],int C[])
{
	nB=0;
	for(int i=0;i<nA;i++)
	{
		if(timThay(nB,A[i],B)==false)
		    B[nB++]=A[i];
	}
	for(int i=0;i<nB;i++)
	{
		C[i]=demSoLanXuatHien(nA,A,B[i]);
	}
}
bool timThay(int nB,int x,int B[])
{
	for(int i=0;i<nB;i++)
	{
		if(B[i]==x)
		    return true;
	}
	return false;
}
int demSoLanXuatHien(int nA,int A[],int x)
{
	int dem=0;
	for(int i=0;i<nA;i++)
	{
		if(A[i]==x)
		    dem++;
	}
	return dem;
}
