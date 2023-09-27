// So Nguyen
#include<iostream>
#include<math.h>


using namespace std;
long int demChuSo(long int n);
void xuat(long int n);
void nhap(long int &n);
long int TongCacChuSo(long int n);
long int timK(long int n);

int main()
{
	long int n;
	nhap(n);
	long int dem=demChuSo(n);
	xuat(dem);
	long int tong=TongCacChuSo(n);
	xuat(tong);
	long int k=timK(n);
	xuat(k);
	return 0;
}
void nhap(long int &n)
{
	cin>>n;
}
void xuat(long int n)
{
	cout<<n<<endl;
}
long int demChuSo(long int n)
{
	long long dem=0;
	if(n==0)
	    return 1;
	while(n>0)
	{
		n/=10;
		dem++;
	}
	return dem;
}
long int TongCacChuSo(long int n)
{
	long int tong=0;
	while(n>0)
	{
		int k=n%10;
		tong=tong+k;
		n/=10;
	}
	return tong;
}
long int timK(long int n)
{
	if(n<2)
	    return -1;
	int k=1;
	while(pow(2,k)<=n/2)
	{
		k++;
	}
	return k;
}
