// TBCHoanHao
#include<iostream>
#include<math.h>
#define size 10000
using namespace std;
void nhap(int &n,int A[size]);
void xuat(int x);
bool SoHoanHao(int x);
int TBCHoanHao(int n,int A[]);
int LamTron(double x);

int main()
{
	int n;
	int A[size];
	nhap(n,A);
	int TBC=TBCHoanHao(n,A);
	xuat(TBC);
	return 0;
}	
void nhap(int &n,int A[size])
{
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}	
void xuat(int x)
{
	cout<<x;
}	
int LamTron(double x)
{
    int t = (int)x;
    double k=(double) x-t;
    int y;
	if(k < 0.5)
		y = t;
	else
		y = t + 1;
	return y;			
}	
bool SoHoanHao(int x)
{
	int Tong=0;
	if(x<6)
	    return false;
	for(int i=1;i<x;i++)
	{
		if(x%i==0)
		    Tong=Tong+i;
	}
	if(Tong==x)
	    return true;
	return false;	
}
int TBCHoanHao(int n,int A[])
{
	int Tong=0;
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(SoHoanHao(A[i])==true)
		{
		    Tong=Tong+A[i];
		    dem++;
		}    
	}
	if(dem==0)
	    return 0;
	double TBC=(double) Tong/dem;
	int x=LamTron(TBC);
	return x;
}	
