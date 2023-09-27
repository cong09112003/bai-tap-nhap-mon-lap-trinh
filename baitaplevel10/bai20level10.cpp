// cho ma tran vuong kich thuoc n . Viet chuong trinh sap xep tang dan theo dong va cot
#include<iostream>
#include<math.h>
#include<string.h>
#define size 20
using namespace std;
void sapSepTangDanCacHangVaCacCot(int n,float A[][size],int &nB,float B[]);
void nhap(int &n,float A[][size]);
void xuat(int n,float A[][size]);
void chuyenMang2ChieuThanhMang1Chieu(int n,float A[][size],int &nB,float B[])	;
void sapXepTangDanMang1Chieu(int n,float B[]);
void hoanVi(float &x,float &y);
int main()
{
	int n,nB;
	float A[size][size],B[size*size];
	nhap(n,A);
	sapSepTangDanCacHangVaCacCot(n,A,nB,B);
	return 0;
}	
void nhap(int &n,float A[][size])
{
	cout<<"nhap ma tran vuong cap n"<<endl;
	cout<<"nhap n:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		    cin>>A[i][j];
	}	
}	
void xuat(int n,float A[][size])
{
	cout<<"Mang sau khi duoc sap xep tang dan :"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		    cout<<A[i][j]<<" ";
		cout<<endl;
	}	
}
void chuyenMang2ChieuThanhMang1Chieu(int n,float A[][size],int &nB,float B[])	
{
	nB=0;
		for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		   B[nB++]=A[i][j];
	}	
}	
void sapXepTangDanMang1Chieu(int n,float B[])
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(B[i]>B[j])
			    hoanVi(B[i],B[j]);
		}	
	}	
}	
void hoanVi(float &x,float &y)
{
	float t=x;
	x=y;
	y=t;
}
void sapSepTangDanCacHangVaCacCot(int n,float A[][size],int &nB,float B[])
{
	chuyenMang2ChieuThanhMang1Chieu(n,A,nB,B);
	sapXepTangDanMang1Chieu(nB,B);
	int x=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				A[i][j]=B[x++];
			}	
		}	
	xuat(n,A);	
}
