// mang 1 chieu thanh mang 2 chieu
#include<iostream>
#include<string.h>
using namespace std;
#define SIZE 100
void nhap(int A[],int &m,int &n);
void chuyenMang1ChieuThanhMAng2Chieu(int A[],int m,int n,int B[][SIZE]);
void xuat(int B[][SIZE],int m,int n);
int main()
{
	int A[SIZE],B[SIZE][SIZE];
	int m,n;
	nhap(A,m,n);
	chuyenMang1ChieuThanhMAng2Chieu(A,m,n,B);
	xuat(B,m,n);
	return 0;
}
void nhap(int A[],int &m,int &n)
{
    cout<<"so hang can chuyen: ";
	cin>>m;
	cout<<"so cot can chuyen: ";
	cin>>n;
	for(int i=0;i<m*n;i++)
	{
		cin>>A[i];
	}
}
void chuyenMang1ChieuThanhMAng2Chieu(int A[],int m,int n,int B[][SIZE])
{
	int k=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		    B[i][j]=A[k++];
	}
}
void xuat(int B[][SIZE],int m,int n)
{
    for (int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		    cout<<B[i][j]<<" ";
		cout<<endl;    
	}
}
