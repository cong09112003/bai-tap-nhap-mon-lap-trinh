// xoa dong k roi tim Max cua Ma Tran
#include<iostream>

#define size 100
using namespace std;
void nhap(int &m,int &n,int &k,int A[][size]);
void XoaDongKCuaMaTran(int &m,int n,int k,int A[][size]);
int timMax(long n,int A[1000000]);
int MaxMaTranSauKhiXoaDongK(int m,int n,int k,int A[][size],long &nB,int B[]);
void xuat(int x);
void chuyenMang2ChieuThanhMang1Chieu(int m,int n,int A[][size],long &nB,int B[]);

int main()
{
	int m,n,k,A[size][size];
	long nB;
	int B[size*size];
	nhap(m,n,k,A);
	int max=MaxMaTranSauKhiXoaDongK(m,n,k,A,nB,B);
	xuat(max);
	return 0;
}	
void nhap(int &m,int &n,int &k,int A[][size])
{
	cin>>m>>n>>k;
	for(int i=0;i<m;i++)
	    for(int j=0;j<n;j++)
	        cin>>A[i][j];
}	
void XoaDongKCuaMaTran(int &m,int n,int k,int A[][size])
{
	for(int i=k;i<m-1;i++)
		for(int j=0;j<n;j++)
		    A[i][j]=A[i+1][j];
	m--;	
}
int timMax(long n,int A[])
{
	int max=A[0];
	for(long i=1;i<n;i++)
	{
		if(A[i]>max)
		    max=A[i];
	}
	return max;	
}		
int MaxMaTranSauKhiXoaDongK(int m,int n,int k,int A[][size],long &nB,int B[])
{
	XoaDongKCuaMaTran(m,n,k,A);
	chuyenMang2ChieuThanhMang1Chieu(m,n,A,nB,B);
	int max=timMax(nB,B);
	return max;	
}
void xuat(int x)
{
	cout<<x;
}	
void chuyenMang2ChieuThanhMang1Chieu(int m,int n,int A[][size],long &nB,int B[])	
{
	nB=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		   B[nB++]=A[i][j];
	}	
}
