#include<iostream>

#define size 50
using namespace std;
int demDong(int m,int n,int A[][size]);
void nhap(int &m,int &n,int A[][size]);
void xuat(int x);
bool check(int row,int m,int n,int A[][size]);

int main()
{
	int m,n,A[size][size];
	nhap(m,n,A);
	int dem=demDong(m,n,A);
	xuat(dem);
	return 0;
	
}
void nhap(int &m,int &n,int A[][size])
{
	cin>>m>>n;
	for(int i=0;i<m;i++)
	    for(int j=0;j<n;j++)
	    cin>>A[i][j];
}
bool check(int row,int m,int n,int A[][size])
{
	for(int j=0;j<n-1;j++)
	{
		if(A[row][j]>=A[row][j+1])
		return false;
	}
	return true;
}
int demDong(int m,int n,int A[][size])
{
	int dem=0;
	for(int i=0;i<m;i++)
	{
		{
			if(check(i,m,n,A)==false)
			dem++;
		}
	}
	return dem;
}
void xuat(int x)
{
	cout<<x;
}
