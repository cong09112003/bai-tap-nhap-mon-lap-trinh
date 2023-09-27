// Tham Khao
// dem so hau
#include<iostream>
#include<string.h>
using namespace std;
#define size 100
void nhap(int A[][size], int &m, int &n);
bool soHoangHau(int A[][size], int m, int n, int i, int j);
int slgHoangHau(int A[][size], int m ,int n);
void xuat(int kq);
int main()
{
	int A[size][size],m,n;
	nhap(A,m,n);
	int dem = slgHoangHau(A,m,n);
	xuat(dem);
	return 0  ;
}
void nhap(int A[][size], int &m, int &n)
{
	cout<<"nhap so hang:";
	cin>>m;
	cout<<"nhap so cot:";
	cin>>n;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>A[i][j];
}
bool soHoangHau(int A[][100], int m, int n,int i, int j)
{
	int Max=A[i][j];
	for(int k=0; k<m; k++)
		if(A[k][j]>Max)
			return false;
	for(int k=0; k<n; k++)
		if(A[i][k]>Max)
			return false;
	int k=i,h=j;
	{
		while(k<m && h<n)
		{
			if(A[k][h]>Max)
				return false;
			k++;
			h++;
		}
		while(k>0 && h>0)
		{
			if(A[k][h]>Max)
				return false;
			k--;
			h--;
		}
		
	}
	k=i,h=j;
	{
		while(k>=0 && h<n)
		{
			if(A[k][h]>Max)
				return false;
			k--;
			h++;
		}
		while(k<m && h>0)
		{
			if(A[k][h]>Max)
				return false;
			k++;
			h--;
		}
	}
	return true;
}
int slgHoangHau(int A[][100], int m ,int n)
{
	int dem = 0;
	for(int i=0; i<m ;i++)
		for(int j=0; j<n;j++)
			if(soHoangHau(A,m,n,i,j)==true)
				dem++;
	return dem;				
}
void xuat(int kq)
{
	cout<<kq;
}
