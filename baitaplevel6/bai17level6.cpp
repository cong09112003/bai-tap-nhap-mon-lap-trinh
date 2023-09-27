// tim so co gia tri lon nhat trong mang
#include<iostream>
#include<string.h>
using namespace std;
#define size 200
int GiaTriLonNhat(int n,int A[]);
void nhap(int &n,int A[]);
void xuat(int x);
int main()
{
	int n;
	int A[size];
	nhap(n,A);
	int Max=GiaTriLonNhat(n,A);
	xuat(Max);
	return 0;
}
int GiaTriLonNhat(int n,int A[])
{
	int Max;
	for(int i=0;i<n;i++)
	{
		if(Max < A[i])
		    Max=A[i];
	}
	return Max;
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
	cout<<"Gia tri lon nhat cua Mang:"<<x;
}
