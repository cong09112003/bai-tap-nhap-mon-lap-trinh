// Trong Hai mang A va Mang B thanh Mang C
#include<iostream>
using namespace std;
#define size 200
void nhap(int &n,float A[]);
void xuat(int n,float A[]);
void TronAVaBdeDuocC(int nA,int nB,int &nC,float A[],float B[],float C[]);
int main()
{
	int nA,nB,nC;
	float A[size],B[size],C[size];
	nhap(nA,A);
	nhap(nB,B);
	TronAVaBdeDuocC(nA,nB,nC,A,B,C);
	xuat(nC,C);
	return 0;
}
void TronAVaBdeDuocC(int nA,int nB,int &nC,float A[],float B[],float C[])
{
	nC=0;
	int iA=0;
	int iB=0;
	while(iA<nA && iB<nB)
	{
		C[nC++]=A[iA++];
		C[nC++]=B[iB++];
	}
	while(iA<nA)
	    C[nC++]=A[iA++];
	while(iB<nB)
	    C[nC++]=B[iB++];    		
}
void nhap(int &n,float A[])
{
	cout<<"so phan tu co trong Mang:";
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];	 	 
}
void xuat(int n,float A[])
{
	for(int i=0;i<n;i++)
	cout<<A[i]<<" ";
}	
