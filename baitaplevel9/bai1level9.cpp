// nhap mang A n so nguyen xuat ra mang B chua cac phan tu duong mang C chua cac phan tu am
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
#define size 200
void nhap(int &n,int A[]);
void sapSepSoDuong(int nA,int &nB,int A[],int B[]);
void sapSepSoAm(int nA,int &nC,int A[],int C[]);
void xuat(int n,int A[]);
int main()
{
	int nA,nB,nC;
	int A[size],B[size],C[size];
	nhap(nA,A);
	sapSepSoDuong(nA,nB,A,B);
	sapSepSoAm(nA,nC,A,C);
	xuat(nC,C);
	xuat(nB,B);
	return 0;
}
void nhap(int &n,int A[])
{
	cout<<"so phan tu trong mang:";
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}
void sapSepSoDuong(int nA,int &nB,int A[],int B[])
{
	nB = 0;
	for(int i = 0; i < nA; i++)
	{
		if(A[i] > 0)
		{
			B[nB] = A[i];
			nB++;
		}
	}
}
void sapSepSoAm(int nA,int &nC,int A[],int C[])
{
	nC=0;
	for(int i=0;i<nA;i++)
	{
		if(A[i]<0)
		{
		    C[nC] = A[i];
			nC++;
		}    
	}
}
void xuat(int n,int A[])
{
	for(int i=0;i<n;i++)
	    cout<<A[i]<<" ";
	cout<<endl;    
}
