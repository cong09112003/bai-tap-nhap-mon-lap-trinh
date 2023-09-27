// dem diem hoang hau
#include<iostream>
#include<math.h>
#define size 100
using namespace std;
void nhap(int &m,int &n,int A[][size]);
void xuat(int x);
int demHoangHau(int m,int n,int A[][size]);
bool checkHoangHau(int i,int j,int m,int n,int A[][size]);
int MaxRow(int row,int m,int n,int A[][size]);
int MaxCol(int col,int m,int n,int A[][size]);
bool checkMaxXuongPhai(int i,int j,int m,int n,int A[][size]);
bool checkMaxXuongTrai(int i,int j,int m,int n,int A[][size]);
bool checkMaxLenPhai(int i,int j,int m,int n,int A[][size]);
bool checkMaxLenTrai(int i,int j,int m,int n,int A[][size]);
int main()
{
	int m,n,A[size][size];
	nhap(m,n,A);
	int dem=demHoangHau(m,n,A);
	xuat(dem);
	return 0;
}
void nhap(int &m,int &n,int A[][size])
{
	cin>>m;
	cin>>n;
	for(int i=0;i<m;i++)
	    for(int j=0;j<n;j++)
	        cin>>A[i][j];
}	
void xuat(int x)
{
	cout<<x;
}
int demHoangHau(int m,int n,int A[][size])
{
	int dem=0;
	for(int i=0;i<m;i++)
	{
	    for(int j=0;j<n;j++)
	    	if(checkHoangHau(i,j,m,n,A)==true)
	    	    dem++;
	}
	return dem;    	    
}	
bool checkHoangHau(int i,int j,int m,int n,int A[][size])
{
	if(A[i][j]==MaxRow(i,m,n,A) && A[i][j]==MaxCol(j,m,n,A) && checkMaxXuongPhai(i,j,m,n,A)==true && checkMaxXuongTrai(i,j,m,n,A)==true && checkMaxLenPhai(i,j,m,n,A)==true && checkMaxLenTrai(i,j,m,n,A)==true)
	    return true;
	return false;    
}
int MaxRow(int row,int m,int n,int A[][size])
{
	int Maxrow=A[row][0];
	for(int j=1;j<n;j++)
	{
		if(A[row][j]>Maxrow)
		    Maxrow=A[row][j];
	}	
	return Maxrow;
}
int MaxCol(int col,int m,int n,int A[][size])
{
	int Maxcol=A[0][col];
	for(int i=1;i<m;i++)
	{
		if(A[i][col]>Maxcol)
		    Maxcol=A[i][col];
	}
	return Maxcol;	
}
bool checkMaxXuongPhai(int i,int j,int m,int n,int A[][size])
{
	int I=i+1;
	int J=j+1;
	while(I<m && J<n)
	{
		if(A[I][J]>A[i][j])
		    return false;
		I++;
		J++;    
	}	
	return true;
}	
bool checkMaxXuongTrai(int i,int j,int m,int n,int A[][size])
{
	int I=i+1;
	int J=j-1;
	while(I<m && J>=0)
	{
		if(A[I][J]>A[i][j])
		    return false;
		I++;
		J--;    
	}	
	return true;
}	
bool checkMaxLenPhai(int i,int j,int m,int n,int A[][size])
{
	int Max1=A[i][j];
	int I=i-1;
	int J=j+1;
	while(I>=0 && J<n)
	{
		if(A[I][J]>A[i][j])
		    return false;
		I--;
		J++;    
	}	
	return true;
}
bool checkMaxLenTrai(int i,int j,int m,int n,int A[][size])
{
	int Max1=A[i][j];
	int I=i-1;
	int J=j-1;
	while(I>=0 && J>=0)
	{
		if(A[I][J]>A[i][j])
		    return false;
		I--;
		J--;    
	}	
	return true;
}
	
