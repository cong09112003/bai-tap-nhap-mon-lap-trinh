// Liet ke tan suat xuat hien cac gia tri trong mang trong Mang 1 chieu
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
#define size 200
void nhap(int &n,float A[]);
void lietKeTanXuat(int nA,float A[]);
int main()
{
    int nA;
	float A[size];
	nhap(nA,A);
	lietKeTanXuat(nA,A);
	return 0;
}
void lietKeTanXuat(int nA,float A[])
{
	for(int i=0;i<nA;i++)
	{
		int dem=0;
		for(int j=0;j<nA;j++)
		{
			if(A[i]==A[j])
			{
				if( i<=j )
				    dem++;
	            else 
				    break;          // bo qua phan tu bi trung
			}
		}
		if(dem>0)
		    cout<<"Phan tu co gia tri la"<<" "<<A[i]<<"co tan xuat hien:"<<dem<<"lan"<<endl;
	}
}
void nhap(int &n,float A[])
{
	cout<<"nhap so phan tu trong mang:";
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}



