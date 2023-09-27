// tim Min cua MAx Dong
#include<iostream>
using namespace std;
#define size 100
void nhap(int &m,int &n,long int A[][size]);
long int timMin(int n,int A[]);
bool MaxDong(int row,int m,int n,long int A[][size],long int value);
long int MinofMax(int m,int n,long int A[][size]);
void xuat(long int x);
int main()
{
	int m,n;
	long int A[size][size];
	nhap(m,n,A);
	long int Min=MinofMax(m,n,A);
	xuat(Min);
	return 0;
}	
void nhap(int &m,int &n,long int A[][size])
{
	cin>>m>>n;
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	cin>>A[i][j];
}
long int timMin(int n,long int A[])
{
	long int min=A[0];
	for(int i=1;i<n;i++)
	{
		if(A[i]<min)
		min=A[i];
	}
	return min;
}
bool MaxDong(int row,int m,int n,long int A[][size],long int value)
{
	for(int j=0;j<n;j++)
	    if(A[row][j]>value)
	        return false;
	return true;
}
long int MinofMax(int m,int n,long int A[][size])
{
	long int B[100000];
	long int nB=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(MaxDong(i,m,n,A,A[i][j])==true)
			    B[nB++]=A[i][j];
		}	
	}
	long int min=timMin(nB,B);
	return min;	
}	
void xuat(long int x)
{
	cout<<x;
}	
