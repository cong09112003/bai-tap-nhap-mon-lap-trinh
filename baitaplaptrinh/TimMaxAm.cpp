// tim So Am Lon Nhat
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
void nhap(int &n,int A[]);
int MaxAm(int n,int A[]);
void xuat(int x);
int main()
{
	int n;
	int A[100];
	nhap(n,A);
	int x=MaxAm(n,A);
	xuat(x);
	return 0;
}
void nhap(int &n,int A[])
{
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}
int MaxAm(int n,int A[])
{
	int am1=0;
	for(int i=0;i<n;i++)
	{
		if(A[i]<0)
			am1=A[i];
	}
	for(int i=0;i<n;i++)
	{
		if(A[i]<0 && A[i] > am1)
		    am1=A[i];
	}
	return am1;	
}	
void xuat(int x)
{
	cout<<x;
}	
