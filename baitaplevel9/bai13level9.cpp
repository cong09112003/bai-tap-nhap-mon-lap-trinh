// Xoa tat cac so Chinh Phuong Trong Mang
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<math.h>
using namespace std;
#define size 200
void nhap(int &n,int A[]);
void xuat(int n,int A[]);
bool CheckChinhPhuong(int x);
void TimChinhPhuongBangMang(int nA,int A[]);
void xoaPhanTuXCuaMang(int x,int &nA,int A[]);
void XoaHetChinhPhuong(int &nA,int A[]);
int main()
{
	int nA;
	int A[size];
	nhap(nA,A);
	XoaHetChinhPhuong(nA,A);
	xuat(nA,A);
	return 0;
}
bool CheckChinhPhuong(int x)
{
    if( sqrt(x)==(int) sqrt(x) )
        return true;
    return false;    
}
void xoaPhanTuXCuaMang(int x,int &nA,int A[])
{
	for(int i=x;i<nA-1;i++)
		A[i]=A[i+1];
	nA--;
}
void XoaHetChinhPhuong(int &nA,int A[])
{
	for(int iA=0;iA<nA;iA++)
	{
		if(CheckChinhPhuong(A[iA])==true)
		{
			xoaPhanTuXCuaMang(iA,nA,A);
			iA--;
		}	
	}
}
void nhap(int &n,int A[])
{
	cout<<"nhap so phan tu trong mang:";
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}
void xuat(int n,int A[])
{
	for(int i=0;i<n;i++)
	    cout<<A[i]<<" ";
}
