// Xoa tat ca cac phan tu trong Mang co tan xuat lon hon 1 lan
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<math.h>
using namespace std;
#define size 200
void nhap(int &n,float A[]);
void xuat(int n,float A[]);
void xoaPhanTuXTrongMang(int x,int &nA,float A[]);
void xoaToanBoPhanTuTrungNhau(int &nA,float A[]);
int main()
{
	int nA;
	float A[size];
	nhap(nA,A);
	xoaToanBoPhanTuTrungNhau(nA,A);
	xuat(nA,A);
	return 0;
}
void xoaPhanTuXTrongMang(int x,int &nA,float A[])
{
	for(int i=x;i<nA-1;i++)
	    A[i]=A[i+1];
	nA--;    
}
void xoaToanBoPhanTuTrungNhau(int &nA,float A[])
{
	for(int i=0;i<nA-1;i++)
	{
		int check=0;
		for(int j=i+1;j<nA;j++)
		{
			if(A[i]==A[j])
			{
				xoaPhanTuXTrongMang(j,nA,A);   // Xoa Tat cac cac phan tu =A[i] sau i
				j--;
				check=1;
			}	
		}
		if(check==1)
		    xoaPhanTuXTrongMang(i,nA,A);	// Xoa luon A[i]
	}	
}
void nhap(int &n,float A[])
{
	cout<<"So Phan Tu co trong Mang:";
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}
void xuat(int n,float A[])
{
	for(int i=0;i<n;i++)
	    cout<<A[i]<<" ";
}	
