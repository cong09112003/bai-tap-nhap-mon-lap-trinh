// dem gia tri lon nhat trong mang
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
#define size 200
void nhap(int &n,float A[]);
void xuat(int x);
int timMax(int nA,float A[]);
int demMax(int nA,float A[]);
int main()
{
	int nA;
	float A[size];
	nhap(nA,A);
	int dem=demMax(nA,A);
	xuat(dem);
	return 0;
}
int timMax(int nA,float A[])
{
	float max=A[0];
	for(int i=1;i<nA;i++)
	{
		if(A[i]>max)
		    max=A[i];
	}
	return max;
}
int demMax(int nA,float A[])
{
	int dem=0;
	float max=timMax(nA,A);
	for(int i=0;i<nA;i++ )
	{
		if(A[i]==max)
		    dem++;
	}
	return dem;
}
void nhap(int &n,float A[])
{
	cout<<"nhap so phan tu trong mang:";
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}
void xuat(int x)
{
	cout<<"so phan tu co gia tri Max:"<<x<<endl;
}
