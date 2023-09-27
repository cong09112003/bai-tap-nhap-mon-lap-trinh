#include<iostream>
#include<math.h>
using namespace std;
#define size 100000
void KiemTraSoDep(long long n,long long A[]);
bool soDep(long long x);
void nhap(long long &n,long long A[size]);
int main()
{
	long long n;
	long long A[size];
	nhap(n,A);
	KiemTraSoDep(n,A);
	return 0;
}	
void nhap(long long &n,long long A[size])
{
	cin>>n;
	for(long long i=0;i<n;i++)
	cin>>A[i];
}	
bool soDep(long long x)
{
	long long dem=0;
	long long y=abs(x);
	for(long long i=1;i<=y;i++)
	{
		if(y%i==0)
		    dem++;
	}
	if(dem==3)
	    return true;
	return false;	
}	
void KiemTraSoDep(long long n,long long A[])
{
	for(long long i=0;i<n;i++)
	{
		if(soDep(A[i])==true)
		{
		    cout<<"YES"<<endl;
		}    
	    else
	    {
	        cout<<"NO"<<endl;
	    }    
	}
}	
