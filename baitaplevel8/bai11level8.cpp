// Tim gia tri chan nho nhat trong mang so nguyen
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
#define size 200
void nhap(int &n,int A[]);
int timSoChanMin(int n,int A[]);
void xuat(int x);
int main()
{
	int n,A[size];
	nhap(n,A);
	int so=timSoChanMin(n,A);
	xuat(so);
	return 0;
}
int timSoChanMin(int n,int A[])
{
	int min=-1;
	for(int i=0;i<n;i++)
	{
		if(A[i]%2==0)
		    min=A[i];
	}
	for(int i=0;i<n;i++)
	{
		if(A[i]%2==0 && min>A[i])
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
	if(x==-1)
	    cout<<x;
	else
	    cout<<"gia tri chan nho nhat trong mang la:"<<x;
}	
