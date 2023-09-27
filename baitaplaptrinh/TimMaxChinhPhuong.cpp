// Tim So chinh phuong lon nhat
#include<iostream>
#include<math.h>
#define size 1000
using namespace std;
void nhap(int &n,int A[]);
bool checkSoChinhPhuong(int x);
int timMax(int n,int A[]);
void timMAXchinhphuong(int nA,int A[],int &nB,int B[]);
void xuat(int x);
int main()
{
	int nA,nB;
	int A[size],B[size];
	nhap(nA,A);
	timMAXchinhphuong(nA,A,nB,B);
	xuat;
	return 0;
}
void nhap(int &n,int A[])
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    cin>>A[i];cout<<" ";
	}    
}
bool checkSoChinhPhuong(int x)
{
	if(sqrt(x)==(int) sqrt(x))
	    return true;
	return false;    
}
int timMax(int n,int A[])
{
	int Max=A[0];
	for(int i=1;i<n;i++)
	{
		if(A[i]>Max)
		    Max=A[i];
	}
	return Max;	
}
void timMAXchinhphuong(int nA,int A[],int &nB,int B[])
{
	nB=0;
	int MaxChinhPhuong=-1;
	for(int i=0;i<nA;i++)
	{
		if((checkSoChinhPhuong(A[i]))==true)
		    B[nB++]=A[i];
	}
	if(nB!=0)
	    MaxChinhPhuong=timMax(nB,B);
	xuat(MaxChinhPhuong);
}
void xuat(int x)
{
	cout<<x;
}	
