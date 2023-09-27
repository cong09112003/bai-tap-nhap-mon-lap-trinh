#include<iostream>
using namespace std;
long long tinhThue(long long n);
void nhap(long long &n);
void xuat(long long thue);
void lamTron(double &x);
int main()
{
	long long n;
	nhap(n);
	long long thue = tinhThue(n);
	xuat(thue);
	return 0;
}
long long tinhThue(long long n)
{
	long long thue;
	thue = 0;
	double x = (double)n/1000000;
	double a = 0;
	if(x <= 5)
		a = x*0.05;
	else
		if(x <= 10)
			a = 5*0.05 + (x-5)*0.1;
		else
			if(x <= 18)
				a = 5*0.05 + 5*0.1 + (x-10)*0.15;
			else
				if(x <= 32)
					a = 5*0.05 + 5*0.1 + 8*0.15 + (x-18)*0.2;
				else
					if(x <= 52)
						a = 5*0.05 + 5*0.1 + 8*0.15 + 14*0.2 +(x-32)*0.25;
					else
						if(x <= 80)
							a = 5*0.05 + 5*0.1 + 8*0.15 + 14*0.2 +20*0.25 + (x-52)*0.3;
						else
							a = 5*0.05 + 5*0.1 + 8*0.15 + 14*0.2 +20*0.25 + 28*0.3 + (x-80)*0.35;
	double b = a - (int)a;
	b=b*1000000*12;
	lamTron(b);
	thue = ((int)a*1000000)*12+b;
	return thue;
}
void lamTron(double &x)
{
	int t = (int)x;
	if(x - t <= 0.5)
		x = t;
	else
		x = t + 1;
}
void nhap(long long &n)
{
	cin>>n;
}
void xuat(long long thue)
{
	cout<<thue;
}
