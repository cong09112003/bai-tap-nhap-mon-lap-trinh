// tinh tong cac phan tu tren duong cheo chinh va duong cheo phu cua ma tran 
#include<iostream>
#include<math.h>
#define size 200
using namespace std;
void xuat(float x);
void nhap(int &m,int &n,float A[][size]);
float tinhTongCacPhanTuTrenDuongCheoChinhVaPhu(int m,int n,float A[][size]);
float tinhTongCacPhanTuTrenDuongCheoPhu(int m,int n,float A[][size]);
float tinhTongCacPhanTuTrenduongCheoChinh(int m,int n,float A[][size]);

int main()
{
	int m,n;
	float A[size][size];
	nhap(m,n,A);
	float Tong=tinhTongCacPhanTuTrenDuongCheoChinhVaPhu(m,n,A);
	xuat(Tong);
	return 0;
}
void nhap(int &m,int &n,float A[][size])
{
	do{
	cout<<"nhap so hang:";
	cin>>m;
	cout<<"nhap so cot:";
	cin>>n;
	}while(m<=0 || n<=0);
	for(int i=0;i<m;i++)
	    for(int j=0;j<n;j++)
	        cin>>A[i][j];
}	
void xuat(float x)
{
	cout<<"Tong cac phan tu tren 2 duong cheo cua ma tran vua nhap:"<<x;
}
float tinhTongCacPhanTuTrenduongCheoChinh(int m,int n,float A[][size])
{
	float Tong=0;
	if(m<=n)
	{
		for(int i=0;i<n;i++)
		    Tong=Tong+A[i][i];
	}
	else
	{
		for(int j=0;j<m;j++)
		    Tong=Tong+A[j][j];
	}  
	return Tong;    
}
float tinhTongCacPhanTuTrenDuongCheoPhu(int m,int n,float A[][size])
{
	float Tong=0;
	if(m>=n)
	{
		for(int i=0;i<n;i++)
		    Tong=Tong+A[i][n-i-1];
	}
	else
	{
		int i=0;
		int j=n-1;
		while(i<m && j>=0)
		{
			Tong=Tong+A[i][j];
			i++;
			j--;
		}	
	}		 
	return Tong;   
}
float tinhTongCacPhanTuTrenDuongCheoChinhVaPhu(int m,int n,float A[][size])
{
	float Tong=0;
	int k=(int)n/2;
	int TongCheoChinh=tinhTongCacPhanTuTrenduongCheoChinh(m,n,A);
	int TongCheoPhu=tinhTongCacPhanTuTrenDuongCheoPhu(m,n,A);
	Tong=TongCheoChinh+TongCheoPhu;
	if((m==n && n%2!=0)||(m>n))
	{
		Tong=Tong-A[k][k];
	}	
	return Tong;
}	
