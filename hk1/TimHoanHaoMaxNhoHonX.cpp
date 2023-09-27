// tim so hoan hao nhun nho hon X
#include<iostream>
#include<math.h>

#define size 50
using namespace std;
void nhap(int &n,int &x,int A[]);
void xuat(int x);
bool SoHoanHao(int x);
int timMAXSoHoanHao(int n,int x,int A[]);

int main()
{
	int n,x,A[size];
	nhap(n,x,A);
	int kq=timMAXSoHoanHao(n,x,A);
	xuat(kq);
	return 0;
}
void nhap(int &n,int &x,int A[])
{
	cin>>n>>x;
	for(int i=0;i<n;i++)
	cin>>A[i];
}
void xuat(int x)
{
	cout<<x;
}
bool SoHoanHao(int x)
{
	int tong=0;
	if(x<6)
	    return false;
	for(int i=1;i<x;i++)
	{
		if(x%i==0)
		    tong+=i;
	}
	if(tong==x)
	    return true;
	return false;
}
int timMAXSoHoanHao(int n,int x,int A[])
{
	int max = 0;
	int dem=0;
	for(int i = 0; i < n; i++)
		if(SoHoanHao(A[i]) && A[i] > max && A[i] < x)
		{
			max = A[i];
			dem++;
	    }
	if(dem==0)
	    return 0;    
	return max;
}

