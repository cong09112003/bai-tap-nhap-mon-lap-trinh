// kiem tra trong mang co phan tu 0 khong
#include<iostream>
#include<string.h>
using namespace std;
#define  Size 200 
int kiemTraMang(int n,int A[]);
void xuat(int x);
void nhap(int &n,int A[]);
int main()
{
	int n,A[Size];
	nhap(n,A);
	int kiemTra = kiemTraMang(n, A);
	xuat(kiemTra);
}
void nhap(int &n,int A[])
{
	cout<<"nhap n so nguyen:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
}
int kiemTraMang(int n,int A[])
{
	for(int i=0;i<n;i++)
	{
		if(A[i]==0)
		    return 1;  
	}
	return 0;
}	
void xuat(int x)
{
	cout<<x;
}
