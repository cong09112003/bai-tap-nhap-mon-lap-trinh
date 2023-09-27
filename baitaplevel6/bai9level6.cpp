// nhap mang n so nguyen voi 1 so nguyen x, kiem tra mang vua nhap co bao so nguyen lon hon x
#include<iostream>
#include<string.h>
using namespace std;
#define size 200
int demSoLonHonX(int x,int n,int A[]);
void xuat(int x);
void nhap(int &x,int &n,int A[]);
int main()
{
	int n,x;
	int A[size];
	nhap(x,n,A);
	int dem=demSoLonHonX(x,n,A);
	xuat(dem);
	return 0;
}
int demSoLonHonX(int x,int n,int A[])
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(A[i] > x)
		    dem++;
	}
	return dem;
}
void nhap(int &x,int &n,int A[])
{
	cout<<"nhap so nguyen x:";
	cin>>x;
	cout<<"nhap so phan tu trong mang:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
}	
void xuat(int x)
{
	cout<<"so cac phan tu trong mang lon hon x la :"<<x;
}

