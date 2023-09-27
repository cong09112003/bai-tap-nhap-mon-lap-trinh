// kiem tra cac so trong mang co toan duong hay khong
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
#define size 200
void nhap(int &n,int A[]);
bool kiemTraToanDuong(int n,int A[]);
void xuat(bool x);
int main()
{
	int n,A[size];
	nhap(n,A);
	bool check=kiemTraToanDuong(n,A);
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
bool kiemTraToanDuong(int n,int A[])
{
	for(int i=0;i<n;i++)
	{
		if(A[i]<0)
		    return false;
	}
	return true;
}
void xuat(bool x)
{
	if(x==false)
	    cout<<"mang khong gom cac phan tu khong toan duong";
	else 
	    cout<<"ham gom cac phan tu toan duong";
}
