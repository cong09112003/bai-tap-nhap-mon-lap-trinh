// kiem tra ham co tich chat chan le, khi tong hai phan tu lien tiep la so le
#include <iostream>
#include<math.h>
#include<string.h>
using namespace std;
#define size 200
bool kiemTratTCChanLe(int n,int A[]);
bool kiemTraSoLe(int x);
void nhap(int &n,int A[]);
void xuat(bool check);
int main()
{
	int A[size];
	int n;
	nhap(n,A);
	bool check=kiemTratTCChanLe(n,A);
	xuat(check);
	return 0;
}
bool kiemTraSoLe(int x)
{
	if(x%2==0)
	    return false;
	return true;    
}
bool kiemTratTCChanLe(int n,int A[])
{
	int Tonglt=0;
	for(int i=0;i<n-1;i++)
	{
		Tonglt=A[i]+A[i+1];
		if(kiemTraSoLe(Tonglt)==false)
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
	    cout<<"Mang khong co tinh chat chan le";
	else
	    cout<<"Mang co tinh chat chan le";    
}	
