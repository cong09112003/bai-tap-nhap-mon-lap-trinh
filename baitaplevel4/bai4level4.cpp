// kiem tra n co phai la so doi xung khong
#include<iostream>
using namespace std;
int kiemTraSoDoiXung(int n);
void nhap(int &n);
void xuat(int kt);
int main()
{
	int n;
	nhap(n);
	int kt=kiemTraSoDoiXung(n);
	xuat(kt);
}
int kiemTraSoDoiXung(int n)
{
	int S=n;
	int sum=0;
	while (n > 0)
	{
		int x=n%10;
		n/=10;
		sum=sum*10+x;
	}
	if (S==sum)
	    return 0;
	return 1;	
}
void nhap(int &n)
{
	cout<<"nhap so nguyen n la:";
	cin>>n;
}
void xuat(int kt)
{
	if (kt == 0)
	    cout<<"n la so doi xung";
	else
	    cout<<"n khong la so doi xung";
}
	    
	    

	
	
	

