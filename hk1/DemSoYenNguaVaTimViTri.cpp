// tim vi tri yen ngua dau tien 
#include<iostream>


using namespace std;
#define size 105
void timViTriYenNgua(int m,int n,int A[][size]);
void nhap(int &m,int &n,int A[][size]);
bool YenNgua(int row,int col,int m,int n,int A[][size],int value);
void xuat(int nB,int B[],int C[]);
void timViTriYenNgua(int m,int n,int A[][size]);

int main()
{
	int m,n,A[size][size];
	nhap(m,n,A);
	timViTriYenNgua(m,n,A);
	return 0;
}
void nhap(int &m,int &n,int A[][size])
{
	cin>>m>>n;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		cin>>A[i][j];
	}
}
bool YenNgua(int row,int col,int m,int n,int A[][size],int value)
{
	for(int i=0;i<n;i++)
	    if(A[row][i]>value)
	        return false;
	for(int j=0;j<m;j++)
	    if(A[j][col]<value)
	        return false;
	return true;
}
void xuat(int nB,int B[],int C[])
{
	cout<<nB<<endl;
	for(int i=0;i<nB;i++)
	{
		cout<<B[i]<<" "<<C[i]<<endl;
	}
}
void timViTriYenNgua(int m,int n,int A[][size])
{
	int B[1005],C[1005];
	int nB=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(YenNgua(i,j,m,n,A,A[i][j])==true)
			{
			    B[nB]=i+1;
			    C[nB]=j+1;
			    nB++;
		    }
		}
	}
	xuat(nB,B,C);
}
