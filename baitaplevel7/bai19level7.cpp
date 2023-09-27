// viet chuong trinh kiem tra mang co gom toan cac chu so chinh phuong hay khong?
#include <iostream>
#include<math.h>
#include<string.h>
using namespace std;
#define size 200
bool kiemTraChinhPhuong(int x);
bool kiemTraToanChinhPhuong(int n,int A[]);
void nhap(int &n,int A[]);
void xuat(bool check);
int main ()
{
	int n,A[size];
	nhap(n,A);
	bool check=kiemTraToanChinhPhuong(n,A);
	xuat(check);
	return 0;
}
bool kiemTraChinhPhuong(int x)
{
	if( sqrt(x) == (int) sqrt(x))
	    return true;
	return false;    
}
bool kiemTraToanChinhPhuong(int n,int A[])
{
	for(int i=0;i<n;i++)
	{
		if(kiemTraChinhPhuong(A[i]) == false)
		    return false;
	}
	return true;
}
void nhap(int &n,int A[])
{
	cout<<"nhap so phan tu trong mang:";
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}
void xuat(bool check)
{
	if(check==false)
	    cout<<"Mang khong gom toan cac so chinh phuong";
	else
	    cout<<"Mang gom toan cac so chinh phuong";    
}
