// kiem tra so luong so nguyen to vs so hoan hao co bang nhau hay khong?
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
#define size 200
bool checkSoNguyenTo(int x);
bool checkSoHoanHao(int x);
bool kiemTraSoLuong(int n,int A[]);
void nhap(int &n,int A[]);
void xuat(bool check);
int main()
{
	int n,A[size];
	nhap(n,A);
	bool check=kiemTraSoLuong(n,A);
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
bool checkSoHoanHao(int x)
{
	int Tonguoc=0;
	if(x<6)
	    return false;
	for(int i=1;i<x;i++)
	{
		if(x%i==0)
		    Tonguoc=Tonguoc+i;
	}
	if(Tonguoc==x)
	    return true;
	return false;    
}	
bool kiemTraSoLuong(int n,int A[])
{
	int dem1=0;
	int dem2=0;
	for(int i=0;i<n;i++)
	{
		if(checkSoHoanHao(A[i])==true)
		    dem1++;
		if(checkSoNguyenTo(A[i])==true)
		    dem2++; 
	}
	if(dem2==dem1)
	    return true;
	return false;
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
	    cout<<"so luong so nguyen to khong bang so hoan hao ";
	else 
	    cout<<"so luong so nguyen to bang so hoan hao";
}


