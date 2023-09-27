// bai toan tim yen ngua nho nhat trong ma tran tu tren xuong duoi tu trai qua phai
#include<iostream>
#include<math.h>
#define size 100
using namespace std;


void nhap(int &m,int &n,int A[][size]);
int timMaxHang(int row,int m,int n,int A[][size]);
int timMinCot(int col,int m,int n,int A[][size]);
bool yenNgua(int row,int col,int m,int n,int A[][size]);
int timYenNgua(int m,int n,int A[][size],int B[],int C[],int &nBC);
void xuat(int x,int B[],int C[],int nB);


int main()
{
	int m,n,A[size][size],B[10000],C[10000],nBC;
	nhap(m,n,A);
	int kq=timYenNgua(m,n,A,B,C,nBC);
	xuat(kq,B,C,nBC);
	return 0;
}
void nhap(int &m,int &n,int A[][size])
{
	cin>>m>>n;
	for(int i =0; i< m; i++)
		for(int j =0; j< n; j++)
			cin>>A[i][j];
}
int timMaxHang(int row,int m,int n,int A[][size])
{
	int maxRow=A[row][0];
	for(int j=1;j<n;j++)
	{
		if(A[row][j]>maxRow)
		    maxRow=A[row][j];
	}
	return maxRow;
}
int timMinCot(int col,int m,int n,int A[][size])
{
	int minCol=A[0][col];
	for(int i=1;i<m;i++)
	{
		if(A[i][col]<minCol)
		    minCol=A[i][col];
	}
	return minCol;
}
bool yenNgua(int row,int col,int m,int n,int A[][size])
{
	if(A[row][col]==timMinCot(col,m,n,A) && A[row][col]==timMaxHang(row,m,n,A))
	    return true;
	return false;    
}
int timYenNgua(int m,int n,int A[][size],int B[],int C[],int &nBC)
{
	int dem=0;
	nBC=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(yenNgua(i,j,m,n,A)==true)
			{
				dem++;
				B[nBC]=i+1;
				C[nBC]=j+1;
				nBC++;
			}
		}
	}
	return dem;
}
void xuat(int x,int B[],int C[],int nB)
{
	cout<<x<<endl;
	for(int i=0; i< nB; i++)
	{
		cout<<B[i]<<" "<<C[i]<<endl;
	} 
	
}
