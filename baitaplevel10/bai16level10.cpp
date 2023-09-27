// dem cac so chan tren bien ma tran m*n
#include<iostream>
#include<math.h>
#include<string.h>
#define size 200
using namespace std;
void nhap(int &m,int &n,int A[][size]);
void xuat(int dem);
int demSoChanTrenBienMaTran(int m,int n,int A[][size]);
bool soChan(int x);
int main()
{
	int m,n;
	int A[size][size];
	nhap(m,n,A);
	int dem=demSoChanTrenBienMaTran(m,n,A);
	xuat(dem);
	return 0;
}
void nhap(int &m,int &n,int A[][size])
{
    cout<<"so hang:";
	cin>>m;
	cout<<"so cot:";
	cin>>n;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
	 	    cin>>A[i][j];
	}
}
void xuat(int x)
{
	cout<<"so phan tu chan tren bien:"<<x;
}
bool soChan(int x)
{
	if(x%2==0)
	    return true;
	return false;
}
int demSoChanTrenBienMaTran(int m,int n,int A[][size])
{
	int dem=0;
	for(int j=0;j<n;j++)
	{
	    if(soChan(A[0][j])==true)
	        dem++;
	    if(soChan(A[m-1][j])==true)
	        dem++;
    }	        
	for(int i=1;i<m-1;i++)
	{
	    if(soChan(A[i][0])==true)		
	        dem++;
	    if(soChan(A[i][n-1])==true)
		    dem++;
    }
			 return dem;   
}			   	 		 

