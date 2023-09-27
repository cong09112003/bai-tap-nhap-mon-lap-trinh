// Tim so am lon nhat trong mang so thuc neu khong co thi xuat ra 0
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
#define size 200
void nhap(int &n,float A[]);
float timSoAmMax(int n,float A[]);
void xuat(float x);
int main()
{
	int n;
	float A[size];
	nhap(n,A);
	float so=timSoAmMax(n,A);
	xuat(so);
	return 0;
}
float timSoAmMax(int n,float A[])
{
	float am1=0;
	for(int i=0;i<n;i++)
	{
		if(A[i]<0)
			am1=A[i];
	}
	for(int i=0;i<n;i++)
	{
		if(A[i]<0 && A[i] > am1)
		    am1=A[i];
	}
	return am1;		
}			    
void nhap(int &n,float A[])
{
	cout<<"nhap so phan tu trong mang:";
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}
void xuat(float x)
{
	if(x==0)
	    cout<<x;
	else
	    cout<<"gia tri am lon nhat trong mang so thuc la:"<<x;
}
