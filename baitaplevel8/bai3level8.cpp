// viet chuong trinh tim gia tri dau tien cua mang thoa man tinh chat so ganh
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
#define size 200
int soLe(int x);
bool soGanh(int x);
int timSoGanhfirst(int n,int A[]);
void nhap(int &n,int A[]);
void xuat(int x);
int main()
{
	int n,A[size];
	nhap(n,A);
	int first=timSoGanhfirst(n,A);
	xuat(first);
	return 0;
}
int soLe(int x)
{
	if(x%2==0)
 	    return false;
 	return true;
}
bool soGanh(int x)
{
	int before=x;
	int dem=0;
	int after=0;
	int k=0;
	while(x!=0)
	{
		k=x%10;
		after=after*10+k;
		x/=10;
		dem++;
	}
	if(after==before && soLe(dem)==true )
	    return true;
	return false;    
}
int timSoGanhfirst(int n,int A[])
{
	for(int i=0;i<n;i++)
	{
		if(soGanh(A[i])==true)
		    return A[i];
	}
	return 0;	
}			    
void nhap(int &n,int A[])
{
	cout<<"nhap so phan tu trong mang:";
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}
void xuat(int x)
{
	if(x==0)
	    cout<<"khong co so ganh trong Mang.";
	else
	    cout<<" phan tu dau tien thoa man tinh chat so ganh la: "<<x;    
}
	
	
