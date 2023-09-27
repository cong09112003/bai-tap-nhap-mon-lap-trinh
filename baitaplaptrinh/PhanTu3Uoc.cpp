// kiem tra mang co phan tu co 3 uoc hay khong?
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
#define size 100000
void nhap(int &n,int A[]);
bool kiemTraSo2Uoc(int x);
bool kiemTraMang(int n,int A[]);
void xuat(bool check);
int main()
{
	int n;
	int A[size];
	nhap(n,A);
	bool check=kiemTraMang(n,A);
	xuat(check);
	return 0;
}
void nhap(int &n,int A[])
{
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}
bool kiemTraSo2Uoc(int x)
{
	int dem=0;
	x=abs(x);
	if( x>=-3 && x<=3)
	    return false;
	for(int i=2;i<x;i++)
	{
		if(x%i==0)
		    dem++;
	}
	if(dem==1)
	    return true;
	return false;		
}
bool kiemTraMang(int n,int A[])
{
	for(int i=0;i<n;i++)
	{
	   if((kiemTraSo2Uoc(A[i]))==true);
	        return true;
	}
	return false;	
}
void xuat(bool check)
{
	if(check==true)
	    cout<<"YES";
	else 
	    cout<<"NO";    
}	
