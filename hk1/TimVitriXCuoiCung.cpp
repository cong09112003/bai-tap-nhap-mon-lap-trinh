// tim X
#include<iostream>
#define size 200
using namespace std;
void nhap(int &n,int &x,int A[]);
void xuat(int x);
int timX(int n,int x,int A[]);
int main()
{
	int n,x,A[size];
	nhap(n,x,A);
	int vitri=timX(n,x,A);
	xuat(vitri);
	return 0;
}
void nhap(int &n,int &x,int A[])
{
	cin>>n>>x;
	for(int i=0;i<n;i++)
	cin>>A[i];
}
int timX(int n,int x,int A[])
{
	int vitri;
	int k=0;
	for(int i=n-1;i>=0;i--)
	{
		if(A[i]==x)
		{
		    vitri=i;
		    k=1;
		    break;
	    }
    }
	if(k==0)
	    return -1;
	return vitri;    
}
void xuat(int x)
{
	cout<<x;
}
