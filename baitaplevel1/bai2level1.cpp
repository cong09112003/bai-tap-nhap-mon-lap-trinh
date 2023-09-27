#include<iostream>
#include<math.h>
using namespace std;
void nhap(int &a);
int giatriTuyetDoi(int a);
void xuat(int kq);
int main()
{
	int a;
	cout<<"nhap a="<<"\n";
	nhap(a);
	int kq=giatriTuyetDoi(a);
	xuat (kq);
}
void nhap(int &a)
{
	cin>>a;
}
int giatriTuyetDoi(int a)
{
	int b=abs(a);
	return b;
}
void xuat(int kq)
{
	cout << "gia tri tuyet doi cua a la " << kq  << endl;
}
