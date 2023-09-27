// kiem tra mang co ton tai hai gia tri 0 lien tiep khong?
#include <iostream>
#include<math.h>
#include<string.h>
using namespace std;
#define size 200
bool kiemTrat0LienTiep(int n,int A[]);
void nhap(int &n,int A[]);
void xuat(bool check);
int main()
{
	int A[size];
	int n;
	nhap(n,A);
	bool check=kiemTrat0LienTiep(n,A);
	xuat(check);
	return 0;
}
bool kiemTrat0LienTiep(int n,int A[])
{
	for(int i=0;i<n-1;i++)
	{
		if(A[i]==0 && A[i+1]==0 )
		    return true;
	}
	return false;	
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
	    cout<<"Mang khong co 2 phan tu 0 lien tiep";
	else
	    cout<<"Mang co 2 phan tu 0 lien tiep";    
}	
