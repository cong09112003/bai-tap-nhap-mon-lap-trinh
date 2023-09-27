// dich trai xoay vong cac phan tu trong mang
#include<iostream>
using namespace std;
#define size 200
void nhap(int &n,float A[]);
void xuat(int n,float A[]);
void xoaPhanTuXTrongMang(int x,int &nA,float A[]);
void dichTraiXoayVong(int nA,float A[]);
int main()
{
	int nA;
	float A[size];
	nhap(nA,A);
	dichTraiXoayVong(nA,A);
	xuat(nA,A);
	return 0;
}
void xoaPhanTuXTrongMang(int x,int &nA,float A[])
{
	for(int i=x;i<nA-1;i++)
	{
		A[i]=A[i+1];
	}
	nA--;
}	
void dichTraiXoayVong(int nA,float A[])
{
	float Bu=A[0];
	int x=0;
	xoaPhanTuXTrongMang(x,nA,A);
	A[nA-1]=Bu;
}
void nhap(int &n,float A[])
{
	cout<<"So Phan Tu Trong Mang:";
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}
void xuat(int n,float A[])
{
	for(int i=0;i<n;i++)
	cout<<A[i]<<" ";
}	
