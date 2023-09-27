// tinh TBC
#include<iostream>
#include<math.h>
using namespace std;
#define size 100

void nhap(int &m,int &n,long int A[][size]);
void xuat(long int x);
long int lamTron(double x);
long int timMinHang(int row,int m,int n,long int A[][size]);
long int TBCMinCacDong(int m,int n,long int A[][size]);

int main()
{
	int m,n;
	long A[size][size];
	nhap(m,n,A);
	long int TBC=TBCMinCacDong(m,n,A);
	xuat(TBC);
	return 0;
}	
void nhap(int &m,int &n,long int A[][size])
{
	cin>>m>>n;
	for(int i=0;i<m;i++)
	    for(int j=0;j<n;j++)
	        cin>>A[i][j];
}
void xuat(long int x)
{
	cout<<x;
}
long int lamTron(double x)
{
	long int t=(long int) x;
	if(x-t<=0.5)
	    return t;
	else
	    return t+1;
}
long int timMinHang(int row,int m,int n,long int A[][size])
{
	long int minRow=A[row][0];
	for(int j=1;j<n;j++)
	{
		if(A[row][j]<minRow)
		    minRow=A[row][j];
	}
	return minRow;
}
long int TBCMinCacDong(int m,int n,long int A[][size])
{
	long int tong=0;
	for(int i=0;i<m;i++)
	{
		tong+=timMinHang(i,m,n,A);
	}
	double TBC=(double) tong/m;
	int kq=lamTron(TBC);
	return kq;
}
