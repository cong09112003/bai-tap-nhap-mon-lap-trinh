//Ma Tran Chuyen Vi
#include<iostream>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
# define SIZE 100
void chuyenVi(int A[][SIZE], int m,int n,int B[][SIZE]);
void nhap(int A[][SIZE], int &m, int &n );
void xuat(int A[][SIZE],int m,int n);
int main()
{
	int A[SIZE][SIZE],B[SIZE][SIZE];
	int m,n;
	nhap(A,m,n);
	chuyenVi(A,m,n,B);
	xuat(B,n,m);
	getch();
	return 0;
}
void chuyenVi(int A[][SIZE], int m,int n,int B[][SIZE])
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
	    B[j][i]=A[i][j];
	}
}
void nhap(int A[][SIZE], int&m, int &n )
{
	cout<<"so dong ma tran:";
	cin>>m;
	cout<<"so cot ma tran:";
	cin>>n;
	for(int i=0;i<m;i++)
	{
	    for(int j=0;j<n;j++)
	        cin>>A[i][j]; 
	}		       
}
void xuat(int A[][SIZE],int m,int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            cout<<A[i][j]<<" ";
        cout<<endl;
    }        
}
