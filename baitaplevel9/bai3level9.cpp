// nhap vao mang A va mang B . Liet ke cac so chung giua 2 mang
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
#define size 200
void nhap(int &n,float A[]);
void xuat(int nA,float A[]);
void PhanTuXuatHienCaHai(int nA,float A[],int nB,float B[],int &nC,float C[]);
bool timThay(int x,float A[],int n);
int main()    
{    
	int nA,nB,nC;
	float A[size],B[size],C[size];
	nhap(nA,A);
	nhap(nB,B);
	PhanTuXuatHienCaHai(nA,A,nB,B,nC,C);
	xuat(nC,C);
	return 0;
}
void PhanTuXuatHienCaHai(int nA,float A[],int nB,float B[],int &nC,float C[])
{
	nC=0;
    for(int i=0;i<nA;i++ )  
	{
		if(timThay(A[i],B,nB)==true)
		    C[nC++]=A[i];
	}  	
}
void nhap(int &n,float A[])
{
	cout<<"nhap so phan tu trong mang:";
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}
void xuat(int nA,float A[])
{
	if(nA>0)
	{
	for(int i=0;i<nA;i++)
	    cout<<A[i]<<" ";
	}
	else 
	cout<<"Hai Mang khong Trung Nhau";
}
bool timThay(int x,float A[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(A[i]==x)
		    return true;
	}
	return false;
}	

