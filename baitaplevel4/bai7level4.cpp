// kiem tra xem n co gom toan cac chu so chan khong?
#include<iostream>
using namespace std;
int kiemTraCacSoChan(int n);
void nhap(int &n);
void xuat(int kt);
int main()
{
	int n;
	nhap(n);
	int kt=kiemTraCacSoChan(n);
	xuat(kt);
}
int kiemTraCacSoChan(int n)
{
	while (n>0)
	{
		int x=n%10;
		n/=10;
		if (x%2!=0)
		return 1;
	}
	return 0;	
}
void nhap(int &n)
{
	cout<<"nhap so nguyen n la:";
	cin>>n;
}
void xuat(int kt)
{
	if (kt==0)
	    cout<<"n gom toan cac chu so chan ";
	else
	    cout<<"n khong gom toan cac chu so chan";
}
	    
	    

	
	
	

