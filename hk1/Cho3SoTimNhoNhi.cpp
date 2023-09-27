// tim Nho Nhi
#include<iostream>
#include<limits.h>

using namespace std;
void xuat(int x);
int nhoNhi(int a,int b,int c);
void nhap(int &a,int &b,int &c);
int main()
{
	int a,b,c;
	nhap(a,b,c);
	int kq=nhoNhi(a,b,c);
	xuat(kq);
	return 0;
}	
void nhap(int &a,int &b,int &c)
{
	cin>>a>>b>>c;
}	
int nhoNhi(int a,int b,int c)
{
	int A[3]={a,b,c};
	int min1=INT_MAX;
	int min2=INT_MAX;
	for(int i=0;i<3;i++)
	    if(A[i]<min1)
	        min1=A[i];
	for(int i=0;i<3;i++)
	    if(A[i]<min2 && A[i]>min1)
	        min2=A[i];
	return min2;        
}
void xuat(int x)
{
	cout<<x;
}	
