// kiem tra mang co phai dang song khong
// viet phuong trinh kiem tra mang co dang song khong?
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
#define size 200
bool kiemTraMangCoDangSangSong(int n,int A[]);
void nhap(int &n,int A[]);
void xuat(bool check);
int main()
{
	int n,A[size];
	nhap(n,A);
	bool check=kiemTraMangCoDangSangSong(n,A);
	xuat(check);
	return 0;
}
bool kiemTraMangCoDangSangSong(int n,int A[])
{	
	for(int i=1;i<n-1;i++)
        if ( (A[i]-A[i-1])*(A[i+1]-A[i]) >= 0 ) // 1 3 2 5 2 7
            return false;
    return true;
}	
void nhap(int &n,int A[])
{
	cout<<"nhap so phan tu tron mang";
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}
void xuat(bool check)
{
	if(check==false)
	    cout<<"mang khong co dang song";
	else 
	    cout<<"mang co dang song";    
}	
