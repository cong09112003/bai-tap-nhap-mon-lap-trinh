// Xoa TaT Ca Cac Gia Tri Trung Nhau Chi giu Lai 1 Phan Tu
#include<iostream>
using namespace std;
#define size 1000
void nhap(int &n,float A[]);
void xuat(int n,float A[]);
void xoaPhanTuXTrongMang(int x,int &nA,float A[]);
void xoaHetTrungNhauGiuLai1(int &nA,float A[]);
int main()
{
	int nA;
	float A[size];
	nhap(nA,A);
	xoaHetTrungNhauGiuLai1(nA,A);
	xuat(nA,A);
	return 0;
}
void xoaPhanTuXTrongMang(int x,int &nA,float A[])
{
	for(int i=x;i<nA-1;i++)
	    A[i]=A[i+1];
	nA--;
}
void xoaHetTrungNhauGiuLai1(int &nA,float A[])
{
	for(int i=0;i<nA-1;i++)
	{
		for(int j=i+1;j<nA;j++)
		{
			if(A[i]==A[j])
			{
				xoaPhanTuXTrongMang(j,nA,A);           // thuc hien lenh xoa toan bo cac phan tu bang no dang sau A[i] -> chi giu lai A[i]
				j--;
			}
		}
	}
}	
void nhap(int &n,float A[])
{
	cout<<"So phan tu co trong Mang:";
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}
void xuat(int n,float A[])
{
	for(int i=0;i<n;i++)
	    cout<<A[i]<<" ";
}	
