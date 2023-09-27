// tim so lon thu nhi
#include<iostream>
using namespace std;
#define size 200
void XoaPhanTuXTrongMang(int x,int &nA,float A[]);
float TimMax(int nA,float A[]);
void XoaHetMax(int &nA,float A[]);
void timMAXLonNhi(int &nA,float A[]);
void xuat(float x);
void nhap(int &n,float A[]);
int main()
{
	int nA;
	float A[size];
	nhap(nA,A);
	timMAXLonNhi(nA,A);
	return 0;
}
void XoaPhanTuXTrongMang(int x,int &nA,float A[])
{
	for(int i=x;i<nA-1;i++)
	    A[i]=A[i+1];
	nA--;    
}
float TimMax(int nA,float A[])
{
	float Max=A[0];
	for(int i=1;i<nA;i++)
	{
		if(A[i]>Max)
		    Max=A[i];
	}
	return Max;	
}
void XoaHetMax(int &nA,float A[])
{
	float Max=TimMax(nA,A);
	for(int i=0;i<nA;i++)
	{
		if(A[i]==Max)
		{
			XoaPhanTuXTrongMang(i,nA,A);
			i--;
		}	
	}	
}
void timMAXLonNhi(int &nA,float A[])
{
	XoaHetMax(nA,A);
	float Max2=A[0];
	for(int i=0;i<nA;i++)
	{
		if(A[i]>Max2)
		    Max2=A[i];
	}
	if(nA==0)
	    cout<<"khong co phan tu lon thu nhi";
	else
	    xuat(Max2);		
}
void xuat(float x)
{
	cout<<"Phan tu nho thu nhi trong Mang:"<<x<<endl;
}
void nhap(int &n,float A[])
{
	cout<<"So phan tu trong mang:";
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}	
	
