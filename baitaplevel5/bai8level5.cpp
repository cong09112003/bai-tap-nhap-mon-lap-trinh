// tim uoc so le lon nhat cua n
#include<iostream>
#include<math.h>
using namespace std;
void nhap(int &n);
int UocSoLeLonNhat(int n);
void xuat(int n);
int main()
{
	int n;
	nhap(n);
	xuat(n);
	return 0;
}
void nhap(int &n)
{
	do{
    cout<<"nhap n la:";
	cin>>n;
    }while(n<=1);
}
int UocSoLeLonNhat(int n)
{
	int max=0;
   for (int i=1; i<n; i++)
	{
		if (n%i==0 && i%2!=0)
		{
			if(max < i)
			    max=i;
		}
    }
    return max;
}
void xuat(int n)
{
	cout<<"Uoc So Le Lon Nhat cua so vua nhap la:"<< UocSoLeLonNhat(n) ;
}
		
	    	
