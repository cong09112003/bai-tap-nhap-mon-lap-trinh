// Tim vi tri so am lon nhat trong mang so nguyen
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
#define size 200
void nhap(int &n,int A[]);
int viTriSoAmMax(int n,int A[]);
void xuat(int x);
int main()
{
	int n,A[size];
	nhap(n,A);
	int vitri=viTriSoAmMax(n,A);
	xuat(vitri);
	return 0;
}
int viTriSoAmMax(int n,int A[])
{
	int am1=-1;
	int vitri=0;
	for(int i=0;i<n;i++)
	{
		if(A[i]<0)
		{
			am1=A[i];
			vitri=i;
		}	
	}
	for(int i=0;i<n;i++)
	{
		if(A[i]<0 && A[i] > am1)
		    {
			    am1=A[i];
			    vitri=i;
			}    
	}
	return vitri;	
}			    
void nhap(int &n,int A[])
{
	cout<<"nhap so phan tu trong mang:";
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}
void xuat(int x)
{
	if(x==-1)
	    cout<<x;
	else
	    cout<<"Vi tri cua gia tri am lon nhat trong mang la:"<<"A["<<x<<"]";
}
