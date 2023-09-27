// Trung Binh Cong Chia Het Cho 5
#include<iostream>
#include<math.h>

using namespace std;
#define size 100


int TBC5( int n,int A[]);
void nhap(int &n,int A[]);
void xuat(int n);
int main()
{
	int n;
	int A[size];
	nhap(n,A);
	int TBC=TBC5(n,A);
	xuat(TBC);
	return 0;
}		
int TBC5(int n,int A[])
{
	int tong=0;
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(A[i]%5==0)
		{
		    tong=tong+A[i];
		    dem++;
		}    
	}
	if(dem==0)
	    return 0;
	double TBC=(double) tong/dem;
	int kq=(int) TBC;
	return kq;
}
void nhap(int &n,int A[])
{
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>A[i];
}	
void xuat(int n)
{
	cout<<n;
}
	
