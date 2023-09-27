// viet chuong trinh tinh tong 2 ma tran
// tinh tong cac phan tu trong mang 2 chieu
#include<iostream>
#include<math.h>
#define size 200
using namespace std;
void nhap(int &m,int &n,float A[][size]);
void xuat(int m,int n,float C[][size]);
void tinhTong2MaTran(int m,int n,float A[][size],int p,int q,float B[][size],float C[][size]);
int main()
{
	int m,n;
	int p,q;
	float A[size][size];
	float B[size][size];
	float C[size][size];
	nhap(m,n,A);
	nhap(p,q,B);
	tinhTong2MaTran(m,n,A,p,q,B,C);
	return 0;
}
void nhap(int &m,int &n,float A[][size])
{
	do{
	cout<<"nhap so hang:";
	cin>>m;
	cout<<"nhap so cot:";
	cin>>n;
	}while(m<=0 || n<=0 );
	for(int i=0;i<m;i++)
	    for(int j=0;j<n;j++)
	        cin>>A[i][j];
}
void tinhTong2MaTran(int m,int n,float A[][size],int p,int q,float B[][size],float C[][size])
{
	int check=0;
	if(m==p && n==q )
	{
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
		        C[i][j]=A[i][j]+B[i][j];
		}	
	}        
	else
	    check=1;
	if(check==1)
	    cout<<"khong hop le"<<endl;	
	else
	    xuat(m,n,C); 
}
void xuat(int m,int n,float C[][size])
{
	cout<<"Tong 2 Ma Tra vua nhap:"<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		    cout<<C[i][j]<<" ";
		cout<<endl;    
	}	
}	
	
