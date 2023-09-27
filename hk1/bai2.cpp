#include<iostream>


using namespace std;
#define size 300
void nhap(int &n,float A[]);
void xuat(int x);
int cacPhanTuPhan(int n,float A[]);
bool timThay(float B[],int n,int x);
void xoa(int k,int &n,float A[]);
void xoaPhanTuXTrongMang(int x,int &n,float A[]);
int main()
{
	int n;
	float A[size];
	nhap(n,A);
	int kq=cacPhanTuPhan(n,A);
	xuat(kq);
	return 0;
}
void nhap(int &n,float A[])
{
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}
void xuat(int x)
{
	cout<<x;
}
int cacPhanTuPhan(int n,float A[])
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(A[i]==A[j])
			{
				xoaPhanTuXTrongMang(j,n,A);           // thuc hien lenh xoa toan bo cac phan tu bang no dang sau A[i] -> chi giu lai A[i]
				j--;
			}
		}
	}
	return n;
}
bool timThay(float B[],int n,int x)
{
	for(int i=0;i<n;i++)
	if(B[i]==x)
	    return true;
	return false;    
}
void xoa(int k,int &n,float A[])
{
	for(int i=k;i<n-1;i++)
	A[i]=A[i+1];
	n--;
}

void xoaPhanTuXTrongMang(int x,int &n,float A[])
{
	for(int i=x;i<n-1;i++)
	    A[i]=A[i+1];
	n--;
}
