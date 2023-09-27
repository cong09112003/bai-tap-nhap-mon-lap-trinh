// tim phan tu co chu so dau tien la chu so le trong mang gom cac so nguyen
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
#define size 200
bool kiemTraSoLeDauTien(int x);
int dauledautien(int n,int A[]);
void nhap(int &n,int A[]);
void xuat(int x);
int main()
{
	int n,A[size];
	nhap(n,A);
	int first=dauledautien(n,A);
	xuat(first);
	return 0;
}
bool kiemTraSoLeDauTien(int x)
{
	x=abs(x);
	while(x > 9)
	{
		x/=10;
	}
	if(x%2==1)
	    return true;
	return false;   
}
int dauledautien(int n,int A[])
{
	for(int i=0;i<n;i++)
	{
		if(kiemTraSoLeDauTien(A[i])==true)
		    return A[i];
	}
	return 0;	
}
void nhap(int &n,int A[])
{
	cout<<" so phan tu cua mang:";
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}
void xuat(int x)
{
	if(x==0)
	    cout<<x;
	else
	    cout<<"phan tu dau tien trong mang co chu so dau tien: "<<x;
}	
