// kiem tra cac so trong mang co tang lien tuc hay khong
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
#define size 200
void nhap(int &n,int A[]);
bool kiemTraTangDan(int n,int A[]);
void xuat(bool x);
int main()
{
	int n,A[size];
	nhap(n,A);
	bool check=kiemTraTangDan(n,A);
	xuat(check);
	return 0;
}
void nhap(int &n,int A[])
{
	cout<<"nhap so phan tu cua mang:";
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}
bool kiemTraTangDan(int n,int A[])
{
	for(int i=0;i<n-1;i++)
	{
		if(A[i]>A[i+1])
		    return false;
	}
	return true;
}
void xuat(bool x)
{
	if(x==false)
	    cout<<"Mang khong  gom cac phan tu tang lien tuc";
	else 
	    cout<<"Mang gom cac phan tu tang lien tuc";
}
