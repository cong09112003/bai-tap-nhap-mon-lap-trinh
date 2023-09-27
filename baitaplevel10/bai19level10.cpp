// kiem tra dong thu k cua ma tran co giam dan hay khong?
#include<iostream>
#include<math.h>
using namespace std;
#define size 200
bool checkGiamDanDongk(int m,int n,float A[][size],int k);
void nhap(int &m,int &n,float A[][size],int &k);
void xuat(bool check,int k);
int main()
{
	int m,n,k;
	float A[size][size];
	nhap(m,n,A,k);
	bool check=checkGiamDanDongk(m,n,A,k);
	xuat(check,k);
	return 0;
}
void nhap(int &m,int &n,float A[][size],int &k)
{
	cout<<"nhap so hang:";
	cin>>m;
	cout<<"nhap so cot:";
	cin>>n;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		    cin>>A[i][j];
	}
	do{
	cout<<"nhap dong k kiem tra:";
	cin>>k;
	}while(k<0 || k>=m);
}
void xuat(bool check,int k)
{
	if(check==true)
	    cout<<"Ma tran co dong thu  "<<k<<"  giam dan";
	else
	    cout<<"Ma tran co dong thu  "<<k<<" khong giam dan";
}
bool checkGiamDanDongk(int m,int n,float A[][size],int k)
{
	for(int i=0;i<m;i++)
	{
		if(i==k)
		{
			for(int j=0;j<n-1;j++)
			{
				if(A[k][j]<A[k][j+1])
				    return false;
			}
			return true;
		}
	}
}
