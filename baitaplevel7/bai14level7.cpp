// kiem tra mang co gom toan so chan hay khong, toan chan thi xuat 1, ton tai so le thi xuat 0
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
#define size 200
void nhap(int &n,int A[]);
int kiemTraToanChan(int n,int A[]);
void xuat(int x);
int main()
{
	int n,A[size];
	nhap(n,A);
	int check=kiemTraToanChan(n,A);
	xuat(check);
	return 0;
}
void nhap(int &n,int A[])
{
	cout<<"nhap so phan tu cua mang:";
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}
int kiemTraToanChan(int n,int A[])
{
	for(int i=0;i<n;i++)
	{
		if(A[i]%2!=0)
		    return 0 ;
	}
	return 1;
}
void xuat(int x)
{
	cout<<x;
}
