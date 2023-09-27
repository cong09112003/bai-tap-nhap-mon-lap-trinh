//// dich trai xoay vong k lan cac phan tu trong mang
#include<iostream>
using namespace std;
#define size 200
void nhap(int &n,float A[],int &k);
void xuat(int n,float A[]);
void dichTraiXoayVongkLan(int nA,int k,float A[]);
int main()
{
	int nA,k;
	float A[size];
	nhap(nA,A,k);
	dichTraiXoayVongkLan(nA,k,A);
	xuat(nA,A);
	return 0;
}	
void dichTraiXoayVongkLan(int nA,int k,float A[])
{
	while(k>0)
	{
		float Bu=A[0];
		for(int i=0;i<nA;i++)
		{
			A[i]=A[i+1];
		}
		A[nA-1]=Bu;
		k--;	
	}
}
void nhap(int &n,float A[],int &k)
{
	cout<<"so phan tu co trong Mang:";
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];	
	cout<<"Dich phai xay vong so lan la:";
	    cin>>k; 	 
}
void xuat(int n,float A[])
{
	for(int i=0;i<n;i++)
	cout<<A[i]<<" ";
}	

	
