// sap xep ma tra sao cho cac phan tu tren duong cheo chinh tang dan
#include<iostream>
#include<math.h>
#define size 200
using namespace std;
void nhap(int &m,int &n,float A[][size]);
void xuat(int m,int n,float A[][size]);
void sapXepTangDanChoDuongCheoChinh(int m,int n,float A[][size]);
void hoanVi(float &x,float &y);
int main()
{
	int m,n;
	float A[size][size];
	nhap(m,n,A);
	sapXepTangDanChoDuongCheoChinh(m,n,A);
	xuat(m,n,A);
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
void xuat(int m,int n,float A[][size])
{
	cout<<"mang sau khi sap xep lai:"<<endl;
	for(int i=0;i<m;i++)
	{
	    for(int j=0;j<n;j++)
	        cout<<A[i][j]<<" ";
	    cout<<endl;    
	}    
}
void sapXepTangDanChoDuongCheoChinh(int m,int n,float A[][size])
{
	float Tong=0;
	if(m<=n)
	{
		for(int i=0;i<n-1;i++)
		{
		    for(int j=i+1;j<n;j++)
		    	if(A[i][i]>A[j][j])
		    	    hoanVi(A[i][i],A[j][j]);
		}
	}
	else
	{
		for(int i=0;i<n-1;i++)
		{
		    for(int j=i+1;j<n;j++)
		    	if(A[i][i]>A[j][j])
		            hoanVi(A[i][i],A[j][j]);
		}   
	}  
}
void hoanVi(float &x,float &y)
{
	float t=x;
	x=y;
	y=t;
}	
