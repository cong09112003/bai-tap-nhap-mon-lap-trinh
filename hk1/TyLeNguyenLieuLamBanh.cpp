#include<iostream>
using namespace std;
int soBanh(int A[], int B[], int n);
void nhap(int A[], int B[], int &n);
void xuat(int kq);
int main()
{
	int A[10000],B[10000],n;
	nhap(A,B,n);
	int kq = soBanh(A,B,n);
	xuat(kq);
	return 0;
}
int soBanh(int A[], int B[], int n)
{
	int min = B[0]/A[0];
	for(int i=1; i< n; i++)
		if(min > B[i]/A[i])
			min = B[i]/A[i];
	return min;
}
void nhap(int A[], int B[], int &n)
{
	cin>>n;
	for(int i =0; i< n; i++)
		cin>>A[i];
	for(int i =0; i< n; i++)
		cin>>B[i];
}
void xuat(int kq)
{
	cout<<kq;
}
