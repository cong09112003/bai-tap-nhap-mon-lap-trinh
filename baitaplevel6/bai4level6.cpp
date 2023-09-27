// tinh trung binh cong cac so chia het cho 5
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
#define Size 200
double tinhTrungBinhChiahet5(int n,int A[]);
void nhap(int &n,int A[]);
void xuat(double x);
int main()
{
	int n,A[Size];
	nhap(n,A);
	double TB=tinhTrungBinhChiahet5(n,A);
	xuat(TB);
	return 0;
}
double tinhTrungBinhChiahet5(int n,int A[])
{
	double TB;
	int Tong=0;
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(A[i]%5==0 && A[i]!=0)
		{
			Tong=Tong+A[i];
			dem++;
		}
	}
	TB=(double) Tong/dem;
	return TB;
}
void nhap(int &n,int A[])
{
	cout<<"nhap n so nguyen:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
}
void xuat(double x)
{
	cout<<"Trung binh cong cac phan tu trong mang:"<<x;
}
