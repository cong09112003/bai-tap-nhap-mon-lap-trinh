#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
void nhap( int &n);
int kiemTra(int n);
void xuat(int dk);
int main()
{
	int n;
	cout<<"nhap nam :"<<"\n";
	nhap(n);
	int dk=kiemTra(n);
	xuat (dk);
	return 0;
}
void nhap( int &n)
{
	cin>>n;
}
int kiemTra(int n)
{
	int dk;
	if((( n % 4 == 0) && ( n % 100 != 0)) || ( n % 400 == 0)) {
		dk=1;
		}
		else
		{
		dk=0;
		}
		return dk;
}
void xuat(int dk)
{
	if (dk == 1)
	{
		cout<<"Nam la nam nhuan";
	}
	else
	{
		cout<<"Nam khong phai la nam nhuan";
	}	
}		
	
		

		
