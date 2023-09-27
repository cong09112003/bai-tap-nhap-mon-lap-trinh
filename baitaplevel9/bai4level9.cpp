// Liet ke cac gia tri trong Mang ma thoa man dieu khien gia tri lon gia tri tuyet doi cua phan tu dung sau.
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
#define size 200
void nhap(int &n,float A[]);
void xuat(int x);
void CacPhanTuLonHonGiaTriTuyetDoiCuaPhanTuDungSau(int nA,float A[]);
int main()  
{
	int nA;
	float A[size];
	nhap(nA,A);
	CacPhanTuLonHonGiaTriTuyetDoiCuaPhanTuDungSau(nA,A);
	xuat;
	return 0;
}
void CacPhanTuLonHonGiaTriTuyetDoiCuaPhanTuDungSau(int nA,float A[])
{
	for(int i=0;i<nA-1;i++)
	{
		if(A[i]>abs(A[i+1]))
		    xuat(A[i]);
	}	
}
void nhap(int &n,float A[])
{
	cout<<"nhap so phan tu trong mang:";
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}
void xuat(int x)
{
	cout<<x<<" ";
}		
