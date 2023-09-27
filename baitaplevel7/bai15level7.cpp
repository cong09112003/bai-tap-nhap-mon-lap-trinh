// kiem tra  cac phan tu trong mang co the lap thanh 1 day cap so cong khong?
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
#define size 200
bool kiemTraCapSoCong(int n,int A[]);
void nhap(int &n,int A[]);
void xuat(bool x);
int main()
{
	int n,A[size];
	nhap(n,A);
	bool check=kiemTraCapSoCong(n,A);
	xuat(check);
	return 0;
}
bool kiemTraCapSoCong(int n,int A[])
{
	int d=A[1]-A[0];
	for(int i=2;i<n-1;i++)
	{
		if(A[i+1]-A[i]!=d)
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
void xuat(bool x)
{
	if(x==false)
	    cout<<"mang  gom cac phan tu khong  the lap thanh 1 day cap so cong";
	else 
	    cout<<"mang  gom cac phan tu co the lap thanh 1 day cap so cong";
}

