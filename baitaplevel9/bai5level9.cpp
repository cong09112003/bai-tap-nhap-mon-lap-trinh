// Cho mang 1 chieu cac so thuc.Viet ham liet ke tat cac gia tri trong mang co it nhat 1 lan can trai dau
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
#define size 200
void nhap(int &n,float A[]);
void xuat(int nB,float B[]);
void giaTriTrongMangCoItNhat1LanCanTraiDau(int nA,float A[],int &nB,float B[]);
int main()
{
	int nA,nB;
	float A[size],B[size];
	nhap(nA,A);
	giaTriTrongMangCoItNhat1LanCanTraiDau(nA,A,nB,B);
	xuat(nB,B);
	return 0;
}
void giaTriTrongMangCoItNhat1LanCanTraiDau(int nA,float A[],int &nB,float B[])
{
	nB=0;
	for(int i=0;i<nA-1;i++)
	{
		if(A[i]*A[i-1]<0 || A[i]*A[i+1]<0)
		    B[nB++]=A[i];
	}
}
void nhap(int &n,float A[])
{
	cout<<"nhap so phan tu trong mang:";
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}
void xuat(int nB,float B[])
{
	for(int i=0;i<nB;i++)
	    cout<<B[i]<<" ";
}	
