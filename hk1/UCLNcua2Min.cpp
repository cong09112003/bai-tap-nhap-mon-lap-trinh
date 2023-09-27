//tim Uoc Chung Cua 2 Phan tu Nho Nhat
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<limits.h>
using namespace std;
#define size 10000
int timMin(int n,int A[]);
int timMin2(int n,int A[]);
void nhap(int &n,int A[size]);
void xuat(int x);
int timUCLN2Min(int n,int A[]);
int UCLN(int a,int b);



int main()

{
	int n;
	int A[size];
	nhap(n,A);
	int kq=timUCLN2Min(n,A);
	xuat(kq);
	return 0;
}	
void nhap(int &n,int A[size])
{
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>A[i];
}	
int timMin(int n,int A[])
{
	int min=A[0];
	for(int i=0;i<n;i++)
	    if(A[i]<min)
	    min=A[i];
	return min;
}
int timMin2(int n,int A[])
{
	int min1=timMin(n,A);
	int min2=LONG_MAX;
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(A[i]==min1)
		{
			dem++;
		}	
		else
		{
			if(A[i]<min2)
			min2=A[i];
		}		
	}
	if(dem>1)
	    return min1;
	return min2;	
}
void xuat(int x)
{
	cout<<x;
}	
int UCLN(int a,int b)
{
	if(a==b)
	return a;
	while(a!=b)
	{
		if(a>b)
		    a=a-b;
		else
		    b=b-a;
	}
	return a;	
}
int timUCLN2Min(int n,int A[])
{
	int min1=timMin(n,A);
	int min2=timMin2(n,A);
	int kq=UCLN(min1,min2);
	return kq;
}	
