// nhap vao n so nguyen mang vs so nguyen x, cho biet vi tri dau tien cua x trong mang neu khong co xuat ra -1
#include<iostream>
#include<string.h>
using namespace std;
#define size 200
int kiemTraSoDauTienBangX(int x,int n,int A[]);
void nhap(int &x,int &n,int A[]);
void xuat(int x);
int main()
{
	int n,x;
	int A[size];
	nhap(x,n,A);
    int first = kiemTraSoDauTienBangX(x,n,A);
    xuat(first);
	return 0;
}
int kiemTraSoDauTienBangX(int x,int n,int A[])
{
	for(int i = 0; i < n; i++)
	{
		if(A[i] == x)
		{
			return i;
		}
	}
	return -1;
}
void nhap(int &x,int &n,int A[])
{
	cout<<"nhap so nguyen x:";
	cin>>x;
	cout<<"nhap so phan tu trong mang:";
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
void xuat(int x)
{
	cout<<"vi tri cua x dau tien trong mang la:"<<x;
}
		
