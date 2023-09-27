#include<iostream>
#include<math.h>
using namespace std;
void nhap(double &d,double &r);
double tinhChuVi(double d,double r);
void xuat(double cv);
int main()
{
	double d,r;
	cout<<"nhap chieu dai d la:"<<"\n";
	cout<<"nhap chieu rong r la:"<<"\n";
	nhap(d,r);
	double cv=tinhChuVi(d,r);
	xuat(cv);
	return 0;
}
void nhap(double &d,double &r)
{
	cin>>d>>r;
}
double tinhChuVi(double d,double r)
{
	double p=2*d + 2*r;
	return p;
}
void xuat(double cv)
{
	cout << "chu vi hinh chu nhat la " << cv  << endl;
}
