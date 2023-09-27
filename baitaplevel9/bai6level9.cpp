// Cho mang 1 chieu so thuc. tim cac cuc tri trong mang(nho hon hoac lon hon cac phan xung quanh)
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
#define size 200
void nhap(int &n,float A[]);
void xuat(int nB,float B[]);
void timCacCucTri(int nA,float A[],int &nB,float B[]);
int main()
{
	int nA,nB;
	float A[size],B[size];
	nhap(nA,A);
	timCacCucTri(nA,A,nB,B);
	xuat(nB,B);
	return 0;
}
void timCacCucTri(int nA,float A[],int &nB,float B[])
{
	nB=0;
	if(A[0]!=A[1])
		B[nB++]=A[0];
	for(int i=1;i<nA-1;i++)
	{
		if((A[i-1]<A[i] && A[i]>A[i+1])||(A[i-1]>A[i] && A[i]<A[i+1]))
		    B[nB++]=A[i];
	}
	if(A[nA-1]!=A[nA-2])
	    B[nB++]=A[nA-1];   
}
void nhap(int &n,float A[])
{
	cout<<"nhap so phan tu trong mang:";
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}
void xuat(int nB,float B[])
{
	for(int i=0;i<nB;i++)
	    cout<<B[i]<<" ";
}
