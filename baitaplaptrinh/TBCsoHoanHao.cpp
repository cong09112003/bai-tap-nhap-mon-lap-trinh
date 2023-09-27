// tinh TBC cac so hoan hao
#include<iostream>
#include<math.h> 
using namespace std;
void nhap(int &n,int A[]);
void xuat(int x);
bool soHoanHao(int x);
double timTBC(int n,int A[]);
int TBCsoHoanHao(int nA,int A[],int nB,int B[]);
int LamTron(double x);
int main()
{
	int nA,nB;
	int A[1000],B[1000];
	nhap(nA,A);
	int x=TBCsoHoanHao(nA,A,nB,B);
	xuat(x);
	return 0;
}
bool soHoanHao(int x)
{
	int Tonguoc=0;
	if(x<6)
	    return false;
	for(int i=1;i<x;i++)
	{
		if(x%i==0)
		    Tonguoc=Tonguoc+i;
	} 
	if(x==Tonguoc)
	    return true; 
	return false;    
}
double timTBC(int n,int A[])
{
	int sum=0;
    for (int i=0; i<n; i++)
    {
        sum+= A[i];
    }
    double tb=double (sum/n);
    return tb;   
}
int LamTron(double x)   
{
	int phanNguyen=int (x);
	double bu=x-phanNguyen;
	if(bu>=0.5)
	    phanNguyen=phanNguyen+1;
	return phanNguyen;    
}
int TBCsoHoanHao(int nA,int A[],int nB,int B[])
{
	nB=0;
	for(int i=0;i<nA;i++)
	{
		if((soHoanHao(A[i]))==true)
		    B[nB++]=A[i];
	}
    if(nB==0)
        return 0;
	double TBCsoHoanHao=timTBC(nB,B);
	int ketqua=LamTron(TBCsoHoanHao);
	return ketqua;
}
void nhap(int &n,int A[])
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
}
void xuat(int x)
{
	cout<<x;
}

