// Phan tich n thanh cac thua so nguyen to
#include<iostream>
#include<math.h>
using namespace std;
void nhap(int &n);
void xuat(int n);
int main()
{
	int n;
	nhap(n);
	xuat(n);
}
void nhap(int &n)
{
	do{
	cout<<"nhap n la:";
	cin>>n;
	}while(n<2);
}
void xuat(int n)
{
    for(int i = 2; i <= n; i++)
	{
        int x = 0;
        while(n % i == 0)
		{
            x++;
            n /= i;
        }
        if(x)
		{
            cout << i;
            if(x > 1) 
			    cout << "^" << x;
            if(n > i)
                cout << " * ";
        }
    }
}			
