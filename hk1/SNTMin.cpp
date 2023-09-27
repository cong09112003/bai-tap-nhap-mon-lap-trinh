// tim so hoan hao nhun nho hon X
#include<iostream>
#include<math.h>
#define size 100
using namespace std;
void nhap(int &n,int A[]);
void xuat(int x);
bool SoNguyenTo(int x);
int timMAXSoNguyenTo(int n,int A[]);
int timMin(int n,int B[]);
int main()
{
	int n,A[size];
	nhap(n,A);
	int kq=timMAXSoNguyenTo(n,A);
	xuat(kq);
	return 0;
}
void nhap(int &n,int A[])
{
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>A[i];
}
void xuat(int x)
{
	cout<<x;
}
bool SoNguyenTo(int x)
{
	if(x>=2)
	{
		for(int i=2;i<x;i++)
		{
			if(x%i==0)
			    return false;
		}
		return true;
	}
	else
	    return false;
}
int timMAXSoNguyenTo(int n,int A[])
{
	int B[size];
	int nB=0;
	for(int i=0;i<n;i++)
	{
		if(SoNguyenTo(A[i])==true )
		    B[nB++]=A[i];
	}
	if(nB==0)
	    return 0;	
	int max=timMin(nB,B);
	return max;
}
int timMin(int n,int B[])
{
	int min=B[0];
	for(int i=1;i<n;i++)
	    if(B[i]<min)
	        min=B[i];
	return min;        
}	
