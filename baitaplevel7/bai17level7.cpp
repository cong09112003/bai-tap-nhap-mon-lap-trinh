// kiem tra mang vua nhap co gom toan cac so hoan hao khong
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
#define size 200
void nhap(int &n,int A[]);
void xuat(bool check);
bool checkSoHoanHao(int x);
bool kiemTraToanHoanHao(int n,int A[]);
int main()
{
	int n,A[size];
	nhap(n,A);
	bool check=kiemTraToanHoanHao(n,A);
	xuat(check);
	return 0;
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
bool kiemTraToanHoanHao(int n,int A[])
{
	for(int i=0;i<n;i++)
	{
		if(checkSoHoanHao(A[i])==false)
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
	    cout<<"Mang khong gom toan cac so hoan hao";
	else 
	    cout<<"Mang gom toan cac so hoan hao";
}
