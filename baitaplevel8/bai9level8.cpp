// tim so nguyen to lon nhat
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
#define size 200
void nhap(int &n,int A[]);
bool soNguyenTo(int x);
int timSoNguyenToMax(int n,int A[])	;
void xuat(int maxNT);
int main()
{
	int n,A[size];
	nhap(n,A);
	int maxNT=timSoNguyenToMax(n,A);
	xuat(maxNT);
	return 0;
}
void nhap(int &n,int A[])
{
	cout<<"nhap so phan tu tron mang:";
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}
bool soNguyenTo(int x)
{
	if(x<2)
	    return false;
	for(int i=2;i<x;i++)
	{
		if(x%i==0)
		return false;
	}
	    return true;	
}
int timSoNguyenToMax(int n,int A[])	
{
	int maxNT=0;
	for(int i=0;i<n;i++)
	{
		if(soNguyenTo(A[i])==true && maxNT<A[i])
		    maxNT = A[i];
	}
	return maxNT;	
}
void xuat(int maxNT)
{
	if(maxNT==0)
	    cout<<maxNT;
	else
	    cout<<"so nguyen to lon nhat trong mang la:"<<maxNT;   
}	
