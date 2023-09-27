// Tron hai mang thanh 1 mang
#include<iostream>
#include<string.h>
using namespace std;
#define SIZE 100
void xuat(int A[],int nA);
void nhap(int A[],int &nA);
void ghepMang(int A[],int nA,int B[],int nB,int C[],int &nC);
int main()
{
	int A[SIZE],B[SIZE],C[2*SIZE];
	int nA,nB,nC;
	nhap(A,nA);
	nhap(B,nB);
	ghepMang(A,nA,B,nB,C,nC);
	xuat(C,nC);
	return 0;
}
void ghepMang(int A[],int nA,int B[],int nB,int C[],int &nC)
{
	int iA = 0;
	int iB = 0;
	nC=0;
	while(iA < nA && iB < nB)
	{
		C[nC++]=A[iA++];
		C[nC++]=B[iB++];
	}
	while(iA<nA)
	    C[nC++]=A[iA++];
	while(iB<nB)
	    C[nC++]=B[iB++];
}
void nhap(int A[],int &nA)
{
	cout<<"nhap so cac phan tu trong mang la:";
	cin>>nA;
    for (int i=0;i<nA;i++)
        cin>>A[i];
}
void xuat(int A[],int nA)
{
    for(int i=0;i<nA;i++)
        cout<<A[i]<<" "<<" "; 
}		       
	
