// chen 1 phan tu vao mang roi rut phan tu thu n/2
#include<iostream>


using namespace std;
#define size 100
void nhap(int &n,int &x,int A[]);
int timphanTuOGiua(int n,int x,int A[]);
void chenXVaoMang(int k,int x,int &n,int A[]);
void xuat(int x);
int timViTriChoX(int x,int n,int A[]);
void xuatMang(int n,int A[]);
int main()


{
	int n,x,A[size];
	nhap(n,x,A);
	int so=timphanTuOGiua(n,x,A);
	xuat(so);
	// xuatMang(n,A);
	return 0;
}	
void nhap(int &n,int &x,int A[])
{
	cin>>n>>x;
	for(int i=0;i<n;i++)
	cin>>A[i];
}	
void xuat(int x)
{
	cout<<x<<endl;
}	
void chenXVaoMang(int k,int x,int &n,int A[])
{
	for(int i=n-1;i>=k;i--)
	    A[i+1]=A[i];
	A[k]=x;  
	n++;
}
int timViTriChoX(int x,int n,int A[])
{
	if(x<=A[0])
	    return 0;
	if(x>=A[n-1])
	    return n;
	else
	{
		for(int i=1;i<n-1;i++)
		{
			if(A[i] <=x && x <=A[i+1])
			    return i+1;
		}	
	}	
}
int timphanTuOGiua(int n,int x,int A[])
{
	int vitri=timViTriChoX(x,n,A);
	chenXVaoMang(vitri,x,n,A);
	int t=(int) n/2;
	int kq=A[t];
	return kq;
}
void xuatMang(int n,int A[])
{
	for(int i=0;i<n;i++)
	cout<<A[i]<<" ";
}	
