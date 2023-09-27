//kiem tra mang co doi xung hay khong?
#include<iostream>
using namespace std;
#define size 200
void nhap(int &n,int A[]);
bool kiemTraDoiXung(int n,int A[]);
void xuat(bool check);
int main()
{
	int n;
	int A[size];
	nhap(n,A);
	bool check=kiemTraDoiXung(n,A);
	xuat(check);
	return 0;
}
void nhap(int &n,int A[])
{
	cout<<"so phan tu trong mang:";
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}
bool kiemTraDoiXung(int n,int A[])
{
	for(int i=0;i<n/2;i++)
	{
		if(A[i]!=A[n-i-1])
		    return false;
	}
	return true;
}
void xuat(bool check)
{
	if(check==true)
	    cout<<"Mang doi xung";
	else
	    cout<<"Mang khong doi xung ";
}
