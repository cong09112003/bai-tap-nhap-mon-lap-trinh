// tim vi tri so loi trong ma tran dau tien
#include<iostream>
#include<math.h>
using namespace std;
#define size 100
double timMin(int n,double A[]);
void xuat(int x);
bool diemLoi(double A[][size],int x,int y);
void nhap(int &m,int &n,double A[][size]);
void timViTriDongVaCotDiemLoiNhoNhat(int m,int n,double A[][size]);
int main()
{
	int m,n;
	double A[size][size];
	nhap(m,n,A);
	timViTriDongVaCotDiemLoiNhoNhat(m,n,A);
	return 0;
}	
void nhap(int &m,int &n,double A[][size])
{
	cin>>m>>n;
	for(int i=0;i<m;i++)
	    for(int j=0;j<n;j++)
	        cin>>A[i][j];
}
bool diemLoi(double A[][size],int i,int j)
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
void timViTriDongVaCotDiemLoiNhoNhat(int m,int n,double A[][size])
{
	double B[10000];
	int nB=0;
	for(int i=0;i<m;i++)
	    for(int j=0;j<n;j++)
	        if(diemLoi(A,i,j)==true)
	        {
	            B[nB++]=A[i][j];
	        }
	if(nB>0)
	{		    
	    double min=timMin(nB,B);
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
	    cout<<"-1";
}	          		        	
void xuat(int x)
{
	cout<<x<<" ";
}
double timMin(int n,double A[])
{
	int min=A[0];
	for(int i=1;i<n;i++)
	{
		if(A[i]<min)
		    min=A[i];
	}
	return min;	
}	
