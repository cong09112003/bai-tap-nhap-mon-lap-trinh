// nhap vao n so nguyen mang , tim gia tri am dau tien cua x trong mang neu khong co xuat ra 1
#include<iostream>
#include<string.h>
using namespace std;
#define size 200
int kiemTraSoAm(int n,int A[]);
void nhap(int &n,int A[]);
void xuat(int x);
int main()
{
	int n;
	int A[size];
	nhap(n,A);
    int first = kiemTraSoAm(n,A);
    xuat(first);
	return 0;
}
int kiemTraSoAm(int n,int A[])
{
	for(int i = 0; i < n; i++)
	{
		if(A[i] < 0)
		{
			return A[i];
		}
	}
	return 1;
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
	    cout<<"gia tri am dau tien la:"<<first;
	else
	    cout<<first;
}
