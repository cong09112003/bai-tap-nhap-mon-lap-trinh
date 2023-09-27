// tim so chan dau tien trong mang so nguyen
#include<iostream>
#include<string.h>
using namespace std;
#define size 200
int timSoChanDauTien(int n,int A[]);
void nhap(int &n,int A[]);
void xuat(int x);
int main()
{
	int n;
	int A[size];
	nhap(n,A);
    int first = timSoChanDauTien(n,A);
    xuat(first);
	return 0;
}
int timSoChanDauTien(int n,int A[])
{
	for(int i = 0; i < n; i++)
	{
		if(A[i]%2==0 )
		{
			return A[i];
		}
	}
	return -1;
}
void nhap(int &n,int A[])
{
	cout<<"nhap so phan tu trong mang:";
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
void xuat(int first)
{
	if(first!=1)
	    cout<<"gia tri chan dau tien la:"<<first;
	else
	    cout<<first;
}
