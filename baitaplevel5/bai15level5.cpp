// nhap x voi n tim S(n) = CanBac2(x+CanBac2(x+….+CanBac2(x + CanBac2(x))))
#include<iostream>
#include<math.h>
using namespace std;
double tinhS(int n,float x);
void nhap(float &x,int &n);
void xuat(double ketqua);
int main()
{
	int n;
	float x;
	nhap(x,n);
	double ketqua=tinhS(n,x);
	xuat(ketqua);
	return 0;
}
double tinhS(int n,float x)
{
	double ketqua = sqrt(x);
	for(int i=2; i<=n; i++)
	{
		ketqua=(sqrt(x+ketqua));
	}
	return ketqua;	
}
void nhap(float &x,int &n)
{
    do{
    cout<<"nhap n la:";
	cin>>n;
	cout<<"nhap x la:";
	cin>>x;	
	}while(x<0 && x<1);
}
void xuat(double ketqua)
{
    cout<<"ket qua cua S(n) la:"<<ketqua<<endl;
}		
