// tinh tong cac phan tu trong mang 2 chieu
#include<iostream>
#include<math.h>
#define size 200
using namespace std;
float tinhTongCacPhanTuTrongMang2Chieu(int m,int n,float A[][size]);
void xuat(float x);
void nhap(int &m,int &n,float A[][size]);
int main()
{
	int m,n;
	float A[size][size];
	nhap(m,n,A);
	float Tong=tinhTongCacPhanTuTrongMang2Chieu(m,n,A);
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
	cout<<"Tong cac phan tu trong mang 2 chieu vua nhap:"<<x;
}
float tinhTongCacPhanTuTrongMang2Chieu(int m,int n,float A[][size])
{
	float Tong=0;
	for(int i=0;i<m;i++)
	    for(int j=0;j<n;j++)
	        Tong=Tong+A[i][j];
	return Tong;        
}	
