// hay cho biet tat ca cac phan tu trong mang A co nam trong mang B khong?
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
#define size 200
void nhap(int &n,float A[]);
bool kiemTraXCoTrongMang(float x,int n,float A[]);
bool tatCaCacPhanTuMangACoNamTrongMangB(int nA,float A[],int nB,float B[]);
void xuat(bool x);
int main()
{
	int nA,nB;
	float A[size],B[size];
	nhap(nA,A);
	nhap(nB,B);
	bool check=tatCaCacPhanTuMangACoNamTrongMangB(nA,A,nB,B);
	xuat(check);
	return 0;
}
bool kiemTraXCoTrongMang(float x,int n,float A[])
{
    for(int i=0;i<n;i++)
    {
    	if(A[i]==x)
    	    return true;
	}
	return false;
}
bool tatCaCacPhanTuMangACoNamTrongMangB(int nA,float A[],int nB,float B[])
{
	for(int i=0;i<nA;i++)
	{
		if (kiemTraXCoTrongMang(A[i],nB,B)==false)
		    return false;
	}
	return true;
}
void nhap(int &n,float A[])
{
	cout<<"nhap so phan tu trong mang:";
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}
void xuat(bool x)
{
	if(x==true)
	    cout<<"Tat ca cac phan tu cua A deu nam trong B";
	else
	    cout<<"Khong phai tat ca cac phan tu A deu nam trong B ";    
}
