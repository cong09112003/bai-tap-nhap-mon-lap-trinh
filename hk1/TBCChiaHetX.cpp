// tim so hoan hao nhun nho hon X
#include<iostream>
#include<math.h>
#define size 100
using namespace std;
void nhap(int &n,int &x,long int A[]);
void xuat(long int x);
long int lamTron(double x);
long int tinhTBC(int n,int x,long int A[]);

int main()
{
	int n,x;
	long int A[size];
	nhap(n,x,A);
	long int TBC=tinhTBC(n,x,A);
	xuat(TBC);
	return 0; 
}
void nhap(int &n,int &x,long int A[])
{
	cin>>n>>x;
	for(int i=0;i<n;i++)
	cin>>A[i];
}
void xuat(long int x)
{
	cout<<x;
}	
long int lamTron(double x)
{
	long int y=(long int) x;
	if(x-y<0.5)
	return y;
	else
	return y+1;
}	
long int tinhTBC(int n,int x,long int A[])
{
	long int Tong=0;
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(A[i]%x!=0)
		{
			Tong+=A[i];
			dem++;
		}	
	}
	if(dem==0)
	    return 0;
	double TBC=(double) Tong/dem;
	long int kq=lamTron(TBC);
	return kq;
}	

