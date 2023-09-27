// Tim so am lon nhat trong mang so nguyen
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
#define size 200
void nhap(int &n,int A[]);
int timSoAmMax(int n,int A[]);
void xuat(int x);
int main()
{
	int n,A[size];
	nhap(n,A);
	int so=timSoAmMax(n,A);
	xuat(so);
	return 0;
}
int timSoAmMax(int n,int A[])
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
	    cout<<"Mang khong co gia tri am";
	else
	    cout<<"gia tri am lon nhat trong mang la:"<<x;
}	
