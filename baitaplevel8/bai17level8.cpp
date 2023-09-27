// nhap mang A co thu tu tang dan , nhap gia tri x, chen gia tri x vao mang A sao cho mang A sau khi chen van tang dan
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
#define size 200
void nhap(int &n,int A[],int &x);
void xuat(int y);
int viTriX(int n,int A[],int x);
void chenXSaoChoMangAVanTang(int &n,int A[],int x);
int main()
{
	int n;
	int x,A[size];
	nhap(n,A,x);
	chenXSaoChoMangAVanTang(n,A,x);
	xuat;
	return 0;
}
void nhap(int &n,int A[],int &x)
{
	cout<<"so phan tu trong mang:";
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
	cout<<"nhap phan tu x:";
	cin>>x;    
}
int viTriX(int n,int A[],int x)
{
	int vitri=0;
	if(x>A[0])
	{
		vitri=n;
	    for(int i=0;i<n-1;i++)
	    {
		    if(A[i]<x && x<A[i+1])
		        vitri=i+1;
	    }
    }
	return vitri;
}
void chenXSaoChoMangAVanTang(int &n,int A[],int x)
{
	int k=viTriX(n,A,x);
	for(int i=n-1;i>=k;i--)
	    A[i+1]=A[i];
	A[k]=x;
	n++;
	for(int i=0;i<n;i++)
	    xuat(A[i]);
}
void xuat(int x)
{
	cout<<x<<" ";
}
