#include<iostream>
using namespace std;
long timK(long long  n);
void xuat(long x);
void nhap(long long  &n);
int main()
{
	long long n;
	nhap(n);
	long k=timK(n);
	xuat(k);
	return 0;
}
void nhap(long  long &n)
{
	cin>>n;
}
long timK(long long n)
{
	long k=0;
	long long S=1;
	if(n>=1)
	{
	while( S+k <n)
	{
		k++;
		S=S+k;
	}
	return k;
    }
    else 
    return 0;
}
void xuat(long x)
{
	cout<<x;
}
