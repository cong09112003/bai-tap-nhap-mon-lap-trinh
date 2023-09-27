// nhap 2 mang A B deu co thu tu tang dan, chon hai mang ta duoc mang C co thu tu tang dan
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
#define size 200
void nhap(int &n,int A[]);
void ghepMang(int nA,int nB,int &nC,int A[],int B[],int C[]);
void xuat(int n,int A[]);
void hoanVi(int &x,int &y);
int main()
{
	int nA,nB,nC;
	int A[size],B[size],C[2*size];
	nhap(nA,A);
	nhap(nB,B);
	ghepMang(nA,nB,nC,A,B,C);
	xuat(nC,C);
	return 0;
}
void nhap(int &n,int A[])
{
	cout<<"so phan tu trong mang:";
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}
void hoanVi(int &x,int &y)
{
	int t=x;
	x=y;
	y=t;
}
void ghepMang(int nA,int nB,int &nC,int A[],int B[],int C[])
{
	int iA=0;
	int iB=0;
	nC=0;
	while(iA<nA && iB<nB )
	{
		C[nC++]=A[iA++];
		C[nC++]=B[iB++];
	}
	while(iA<nA)
	    C[nC++]=A[iA++];
	while(iB<nB)
	    C[nC++]=B[iB++]; 
	for(int i=0;i<nC-1;i++)
	{
		for(int j=i+1;j<nC;j++)
		{
			if(C[i]>C[j])
			hoanVi(C[i],C[j]);
		}
	}
}
void xuat(int n,int A[])
{
	for(int i=0;i<n;i++)
	    cout<<A[i]<<" ";
}
