// tinh gia thua n!
#include<iostream>
#include<math.h>
using namespace std;
int tinhTich(int n);
void nhap(int &n);
void xuat(int Tich);
int main()
{
	int n;
	nhap(n);
	int Tich=tinhTich(n);
	xuat(Tich);
	return 0;
}
int tinhTich(int n)
{
	int Tich=1;
	for (int i = 1; i <= n; i++ )
	    Tich = Tich*i;
	return Tich;    	
}
void nhap(int &n)
{
	cout<<"nhap so nguyen duong n:";
	cin>>n;
}
void xuat(int Tich)
{
	cout<<"tich cac so tu 1 den n la :"<< Tich << endl;
}	
	
