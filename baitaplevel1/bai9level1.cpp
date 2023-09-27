#include<iostream>
#include<math.h>
using namespace std;
void nhap(double &x);
int kiemTra(double x);
void xuat(int x);
int main()
{
	double x;
	cout<<"nhap so thuc x=";
	nhap(x);
	int dk = kiemTra(x);
	xuat(dk);
	return 0;
}
void nhap(double &x)
{
	cin>>x;
}
int kiemTra(double x)
{
	int a=int(x);
	if(x-a<0.5)
	    return a;
	else
	    return (a+1);    
}
void xuat(int x)
{
		cout << "ket qua sau khi lam tron la " << x  << endl;
}

