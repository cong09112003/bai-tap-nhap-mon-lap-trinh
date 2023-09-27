// tim uoc chung lon nhat cua Mang
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
#define size 200
int UocChung(int a,int b);
int timUocChungMAX(int n,int A[]);
void nhap(int &n,int A[]);
void xuat(int x);
int main()
{
	int n,A[size];
	nhap(n,A);
	int UCLN=timUocChungMAX(n,A);
	xuat(UCLN);
	return 0;
}
int UocChung(int a,int b)
{
	a=abs(a);
	b=abs(b);
	if(a==b)
	    return a;
	while(a!=b)
	{
		if(a>b)
		    a=a-b;
		else
		    b=b-a;    
    }	
    return a;	
}
int timUocChungMAX(int n,int A[])
{
	int UC=A[0];
	for(int i=1;i<n;i++)
	{
		UC=UocChung(UC,A[i]);
	}
	return UC;	
}	
void nhap(int &n,int A[])
{
	cout<<"so phan tu trong mang:";
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}
void xuat(int x)
{
	cout<<"uoc chung lon nhat cua mang so nguyen la:"<<x;
}	
