// Tim Trung Binh Cong-
#include<iostream>
using namespace std;
#define size 200
void nhap(int &n,int A[]);
void xuat(int x);
int tinhTBC(int n,int A[]);
int lamtron(double x);
int main()
{
	int n,A[size];
	nhap(n,A);
	int Tong=tinhTBC(n,A);
	xuat(Tong);
	return 0;
}	
void nhap(int &n,int A[])
{
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}	
void xuat(int x)
{
	cout<<x;
}	
int tinhTBC(int n,int A[])
{
	int tong=0;
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(A[i]%5==0)
		{
		    tong=tong+A[i];
		    dem++;
		}    
	}
	double x=(double) tong/dem;
	int y=lamtron(x);
	return y;	
}	
int lamtron(double x)
{
	int k=(int) x;
	if(x-k<=0.5)
	    x=k;
	else
	    x=k+1;
	return x;
}
