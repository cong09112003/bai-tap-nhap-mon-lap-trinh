// kiem tra mang vua nhap co gom toan cac so nguyen to khong ?
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
#define size 200
void nhap(int &n,int A[]);
void xuat(bool check);
bool checkSoNguyenTo(int x);
bool kiemTraToanNguyenTo(int n,int A[]);
int main()
{
	int n,A[size];
	nhap(n,A);
	bool check=kiemTraToanNguyenTo(n,A);
	xuat(check);
	return 0;
}
bool checkSoNguyenTo(int x)
{
	if(x<2)
	    return false;
	for(int i=2;i<x;i++)
	{
		if(x%i==0)
		    return false;
	}
	return true; 
}	
bool kiemTraToanNguyenTo(int n,int A[])
{
	for(int i=0;i<n;i++)
	{
		if(checkSoNguyenTo(A[i])==false)
		    return false;
	}
	return true;	
}
void nhap(int &n,int A[])
{
	cout<<"nhap so phan tu cua mang:";
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}
void xuat(bool check)
{
	if(check==false)
	    cout<<"Mang khong gom toan cac so nguyen to";
	else 
	    cout<<"Mang gom toan cac so nguyen to";
}
