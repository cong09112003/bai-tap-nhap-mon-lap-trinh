// tim va in ra vi tri xuat hien MAX  trong mang
#include<iostream>
#include<math.h>
#define size 200
using namespace std;
void nhap(int &m,int &n,float A[][size]);
void xuat(int m,int n);
void timVaXuatRaViTriXuatHienMax(int m,int n,float A[][size]);
float timMaxMang2Chieu(int m,int n,float A[][size]);
int main()
{
	int m,n;
	float A[size][size];
	nhap(m,n,A);
	timVaXuatRaViTriXuatHienMax(m,n,A);
	return 0;
}
void nhap(int &m,int &n,float A[][size])
{
	cout<<"so hang:";
	cin>>m;
	cout<<"so cot:";
	cin>>n;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
	 	    cin>>A[i][j];
	}
}
void xuat(int m,int n)
{
	cout<<"phan tu co gia tri lon nhat tai vi tri hang "<<m<<" cot "<<n<<endl;
}	
float timMaxMang2Chieu(int m,int n,float A[][size])
{
	float Max=A[0][0];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			if(A[i][j]>Max)
			    Max=A[i][j];
	}
	return Max;
}
void timVaXuatRaViTriXuatHienMax(int m,int n,float A[][size])
{
	float Max=timMaxMang2Chieu(m,n,A);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(A[i][j]==Max)
			    xuat(i,j);
		}
	}
}
