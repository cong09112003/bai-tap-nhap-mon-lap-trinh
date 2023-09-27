// tim vi tri so loi trong ma tran dau tien
#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
#define size 200
int timMin(int n,int A[]);
void xuat(int x);
bool diemLoi(int A[][size],int x,int y);
void nhap(int &m,int &n,int A[][size]);
void timViTriDongVaCotDiemLoiNhoNhat(int m,int n,int A[][size]);
int main()
{
	int m,n,A[size][size];
	nhap(m,n,A);
	timViTriDongVaCotDiemLoiNhoNhat(m,n,A);
	return 0;
}	
void nhap(int &m,int &n,int A[][size])
{
	cin>>m>>n;
	for(int i=0;i<m;i++)
	    for(int j=0;j<n;j++)
	        cin>>A[i][j];
}
bool diemLoi(int A[][size],int i,int j)
{
	int X[4]={0,0,-1,1};
	int Y[4]={-1,1,0,0};
	for(int k=0;k<4;k++)
	{
		if(A[i][j] <= A[i+X[k]][j+Y[k]])
		    return false;
	}
	return true;	
}	
void timViTriDongVaCotDiemLoiNhoNhat(int m,int n,int A[][size])
{
	int B[10000];
	int nB=0;
	int k=-1;
	for(int i=0;i<m;i++)
	    for(int j=0;j<n;j++)
	        if(diemLoi(A,i,j)==true)
	        {
	            B[nB++]=A[i][j];
	            k=0;
	        }
	if(k==0)
	{			    
	    int min=timMin(nB,B);
	    for(int i=0;i<m;i++)
	    {
	        for(int j=0;j<n;j++) 
	        {
		        if(A[i][j]==min)
		        {
			        xuat(i);
			        xuat(j);
			        return;
		        }
		    }
	    }
	}
	else
	    xuat(k);
}	          		        	
void xuat(int x)
{
	cout<<x<<" ";
}
int timMin(int n,int A[])
{
	int min=A[0];
	for(int i=1;i<n;i++)
	{
		if(A[i]<min)
		min=A[i];
	}
	return min;	
}	
