// nhap xuat tren file
#include<iostream>
using namespace std;
void nhap(int &m,int &n,int A[][100]);
void xuat(int m,int n,int A[][100]);
int main()
{
	int m,n,A[100][100]
	nhap(m,n,A);
	xuat(m,n,A);
}	
void nhap(int &m,int &n,int A[][100])
{
	FILE *fi;
	fi = fopen("matran.txt","rt");
	if(fi==NULL)
	{
		cout<<"Khong mo duoc file";
	}	
	cin>>m>>n;
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	cin>>A[i][j];
}	
void xuat(int m,int n,int A[][100])
{
    for(int i=0;i<m;i++)
    {
	    for(int j=0;j<n;j++)
	        cout<<A[i][j]<<" ";
	    cout<<endl;    
	} 
}	   
