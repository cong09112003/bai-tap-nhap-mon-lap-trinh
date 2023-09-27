// liet ke cac so trong mang 1 chieu, cac chu so nguyen co so dau tien la so chan
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
#define size 200
void nhap(int &n,int A[]);
bool kiemTrafirstSochan(int x);
void timSoNguyenChanDauTien(int n,int A[]);
int main()
{
	int n,A[size];
	nhap(n,A);
    timSoNguyenChanDauTien(n,A);
	return 0;
}
void nhap(int &n,int A[])
{
	cout<<"nhap so phan tu cua mang:";
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}
bool kiemTrafirstSochan(int x) 
{
    x= abs(x);
    while (x > 9) 
	{
        x/=10;
    }
    if (x%2==0) 
	    return true;
    return false;
}
void timSoNguyenChanDauTien(int n,int A[])
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(kiemTrafirstSochan(A[i])==true)
		{
		    cout<<A[i]<<" ";
		    dem++;
		}    
	}
	if(dem==0)
	    cout<<"khong co phan tu nao bat dau la so chan";
}	    	
		
