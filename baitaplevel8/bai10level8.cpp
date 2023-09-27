// Tim so hoan thien nho nhat trong mang so nguyen
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
#define size 200
void nhap(int &n,int A[]);
int timSoHoanThienMin(int n,int A[]);
bool sohoanthien(int x);
void xuat(int x);
int main()
{
	int n,A[size];
	nhap(n,A);
	int so=timSoHoanThienMin(n,A);
	xuat(so);
	return 0;
}
bool sohoanthien(int x)
{
	int tonguoc=0;
	for(int i=1;i<=x/2;i++)
	{
		if(x%i==0)
		    tonguoc=tonguoc+i;
	}
	if(x==tonguoc)
	    return true;	
	return false;    
}
int timSoHoanThienMin(int n,int A[])
{
	int min=0;
	for(int i=0;i<n;i++)
	{
		if(sohoanthien(A[i])==true)
		    min=A[i];
	}	
	for(int i=0;i<n;i++)
	{
		if(sohoanthien(A[i])==true && min > A[i])
		    min=A[i];
	}
	return min;	
}			    
void nhap(int &n,int A[])
{
	cout<<"nhap so phan tu trong mang:";
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}
void xuat(int x)
{
	if(x==0)
	    cout<<x;
	else
	    cout<<"gia tri hoan thien nho nhat trong mang la:"<<x;
}	
