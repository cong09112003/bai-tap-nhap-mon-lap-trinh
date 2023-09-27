// viet chuong trinh xuat ra n phan tu dau tien cua day fibonoci
#include<iostream>
#include<string.h>
using namespace std;
#define size 200
void nhap(int &n);
void xuat(int n,int A[]);
int main()
{
	int n,A[size];
	nhap(n);
	xuat(n,A);
	return 0;
}
void nhap(int &n)
{
	cout<<"nhap vao so nguyen n:";
	cin>>n;
}
void xuat(int n,int A[])
{
	int x0=0;
	int x1=1;
	int x=0;
	if(n>0)
	    for(int i=0;i<n;i++)
	    {
		    x0=x1;
		    x1=x;
		    x=x0+x1;
		    A[i]=x;
		    cout<<A[i]<<" ";
	    }
	else    
	    cout<<"khong hop le";    
}
