// tim va in ra vi tri xuat hien MAX  trong mang
#include<iostream>
#include<math.h>
#include<string.h>
#define size 200
using namespace std;
void nhap(int &m,int &n,int A[][size]);
void xuat(int m,int n);
bool soNguyenTo(int x);
void timVaXuatRaViTriSoNguyenToDauTien(int m,int n,int A[][size]);
int main()
{
	int m,n;
	int A[size][size];
	nhap(m,n,A);
	timVaXuatRaViTriSoNguyenToDauTien(m,n,A);
	return 0;
}
void nhap(int &m,int &n,int A[][size])
{
	cout<<"so hang:";
	cin>>m;
	cout<<"so cot:";
	cin>>n;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
	 	    cin>>A[i][j];
	}
}
void xuat(int m,int n)
{
	cout<<"vi tri so nguyen to dau tien trong mang 2 chieu o hang "<<m<<" cot "<<n<<endl;
}	
bool soNguyenTo(int n)
{
	if(n>=2)
	{
		for(int i=2;i<n-1;i++)
		{
			if(n%i==0)
			return false;
		}
		return true;	
	}
	else
	    return false;
}
void timVaXuatRaViTriSoNguyenToDauTien(int m,int n,int A[][size])
{
	int k=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(soNguyenTo(A[i][j]))
			{
			    xuat(i,j);
			    k=1;
			    return;
		    }
		}
	}
	if(k==0)
	cout<<"khong co phan tu nao la so nguyen to";
}
