#include<iostream>
using namespace std;
#define size 100
void nhap(int &n,int A[]);
bool SoNguyenTo(int x);
int SoNguyenToMinDauTien(int n,int A[]);
int SoNguyenToMin(int n,int A[]);
void xuat(int x);
int main()
{
	int n,A[size];
	nhap(n,A);
	int vitri=SoNguyenToMinDauTien(n,A);
	xuat(vitri);
	return 0 ;
}
void nhap(int &n,int A[])
{
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}
bool SoNguyenTo(int x)
{
	if(x<2)
	    return false;
	for(int i=2;i<x;i++)
	{
		if(x%i==0)
		return false;
	}
	    return true;
}
int SoNguyenToMin(int n,int A[])
{
	int min=0;
	for(int i=0;i<n;i++)
	{
		if(SoNguyenTo(A[i])==true )
		{
		    min=A[i];
	    } 
    }
    for(int i=0;i<n;i++)
    if(SoNguyenTo(A[i])==true && min>A[i] )
		{
		    min=A[i];
	    } 
    return min;
}
int  SoNguyenToMinDauTien(int n,int A[])
{    
    int min=SoNguyenToMin(n,A);
	for(int i=0;i<n;i++)
	{
		if(A[i]==min)
		    return i;
	}
	    return -1;
}
void xuat(int x)
{
	cout<<x;
}
