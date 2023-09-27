#include<iostream>

#define size 100
using namespace std;
void nhap(int &m,int &n,int A[][size]);
void xuat(int n,int B[],int C[]);
bool DiemLoi(int i,int j,int A[][size]);
void timVaDemDiemLoi(int m,int n,int A[][size]);

int main()
{
	int m,n,A[size][size];
	nhap(m,n,A);
	timVaDemDiemLoi(m,n,A);
	return 0;
}
void nhap(int &m,int &n,int A[][size])
{
	cin>>m>>n;
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	cin>>A[i][j];
}
void xuat(int n,int B[],int C[])
{
	cout<<n<<endl;
	for(int i=0;i<n;i++)
	    cout<<B[i]<<" "<<C[i]<<endl;
}
bool DiemLoi(int i,int j,int A[][size])
{
	int X[4]={0,0,1,-1};
	int Y[4]={-1,1,0,0};
	for(int k=0;k<4;k++)
	{
		if(A[i][j]<=A[i+X[k]][j+Y[k]])
		    return false;
	}
	return true;
}
void timVaDemDiemLoi(int m,int n,int A[][size])
{
	int B[1005];
	int C[1005];
	int nB=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if( DiemLoi(i,j,A)==true)
			{
				B[nB]=i;
				C[nB]=j;
				nB++;
			}
		}
	}
	xuat(nB,B,C);
}
