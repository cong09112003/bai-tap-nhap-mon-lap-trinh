// cho mang 1 chieu hay tim khoang [a,b] sao cho doan nay chua tat ca cac gia tri 
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
#define size 200
void nhap(int &n,float A[]);
void xuat(int x,int y);
int tinhMax(int n,float A[]);
int tinhMin(int n,float A[]);
int main()
{
	int n;
	float A[size];
	nhap(n,A);
	int a=tinhMin(n,A);
	int b=tinhMax(n,A);
	xuat(a,b);
	return 0;
}
int tinhMax(int n,float A[])
{
	float max=A[0];
	for(int i=1;i<n;i++)
	{
		if(A[i]>max)
		    max=A[i];
	}                                  // int 3.2=3 int 5.6=5 int(-5.2)->-5 co dieu kien cho truong hop so duong 
	int nguyenMax=(int)max; 
	if(max>0)     //  max>0 max duong thi int max < max
	{
	    float le=max-nguyenMax;
	    if(le>0)
		    max=nguyenMax+1;
	}
	else     //  max<0    max am  thi int max > max 
	    max=nguyenMax;	    
	return max;			
}
int tinhMin(int n,float A[])
{
	float min=A[0];
	for(int i=1;i<n;i++)
	{
		if(A[i]<min)
		    min=A[i];
	}                              
	int nguyenMin=(int)min;
	if(min<0)      // min < 0 int min > min      min phai tru di 1 don vi
	{
		float le=min-nguyenMin;
		if(le<0)
		    min=nguyenMin-1;
	}
	else                // min > 0 int min < min         min khong thay doi
	    min=nguyenMin;
	return min;		
}	
void nhap(int &n,float A[])
{
	cout<<"so phan tu trong mang:";
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}
void xuat(int x,int y)
{
	cout<<"cac phan tu trong mang thuoc vao khoang: ["<<x<<","<<y<<"]";
}	
	
