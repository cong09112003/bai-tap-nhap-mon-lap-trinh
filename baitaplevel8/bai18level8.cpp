// nhap mang A, mang B, chon hai mang A va B thanh Mang C
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
#define size 200
void nhap(int &n,int A[]);
void ghepMang(int nA,int nB,int &nC,int A[],int B[],int C[]);
void xuat(int n,int A[]);
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
}
void xuat(int n,int A[])
{
	for(int i=0;i<n;i++)
	    cout<<A[i]<<" ";
}
