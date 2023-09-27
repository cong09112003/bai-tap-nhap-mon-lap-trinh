// nhap mang A va xuat ra mang A sap xep gia tri tang dan hoac gia tri giam dan
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
#define size 200
void nhap(int &n,int A[]);
void sapSepGiamDan(int n,int A[]);
void xuat(int n,int A[]);
void hoanVi(int &x,int &y);
int main()
{
	int n;
	int A[size];
	nhap(n,A);
	sapSepGiamDan(n,A);
	xuat(n,A);
	return 0;
}
void nhap(int &n,int A[])
{
	cout<<"so phan tu trong mang:";
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}
void hoanVi(int &x,int &y)
{
	int t=x;
	x=y;
	y=t;
}
void sapSepGiamDan(int n,int A[])
{
    for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(A[i]<A[j])
			hoanVi(A[i],A[j]);
		}
	}	
}
void xuat(int n,int A[])
{
	for(int i=0;i<n;i++)
	    cout<<A[i]<<" ";
}

