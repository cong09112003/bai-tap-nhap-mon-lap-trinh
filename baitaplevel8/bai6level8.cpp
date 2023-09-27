// tim va doi cho phan tu lon nhat va nho nhat trong mang
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
#define size 200
void timVaDoiChoMaxVaMin(int nA,int A[],int &nB,int B[],int &nC,int C[]);
void nhap(int &nA,int A[]);
void xuat(int n,int A[]);
int timMax(int n,int A[]);
int timMin(int n,int A);
int main()
{
	int nA,A[size],nB,B[size],nC,C[size];
	nhap(nA,A);
	timVaDoiChoMaxVaMin(nA,A,nB,B,nC,C);
	xuat(nA,A);
	return 0;
}
int timMax(int n,int A[])
{
	int max=A[0];
	for(int i=1;i<n;i++)
	{
		if(A[i] > max)
		    max=A[i];
	}
	return max;
}
int timMin(int n,int A[])
{
	int min=A[0];
	for(int i=1;i<n;i++)
	{
		if(A[i] < min)
		{
		    min=A[i];
		}
	}
	return min;
}
void timVaDoiChoMaxVaMin(int nA,int A[],int &nB,int B[],int &nC,int C[])
{
    int max	=timMax(nA,A);
    int min =timMin(nA,A);
    nB=0;
    nC=0;
    if(max!=min)
    {
	    for(int i=0;i<nA;i++)
	    {
		    if(A[i]==max)
			    B[nB++]=i;
		    if(A[i]==min)
		    	C[nC++]=i;
	    }
	    for(int i=0;i<nB;i++)
	    	A[B[i]]=min;
		for(int i=0;i<nC;i++)
		    A[C[i]]=max;
		cout<<"Vi tri cac phan tu Max:";
	    for(int i=0;i<nB;i++)
	        cout<<B[i]<<" ";
	    cout<<endl;    
	    cout<<"Vi tri cac phan tu Min:";
		for(int j=0;j<nC;j++)
		    cout<<C[j]<<" ";
		cout<<endl;	  
    }
    else
        cout<<"khong tim duoc"<<endl;
        
}			    
void nhap(int &n,int A[])
{
	cout<<"nhap so phan tu trong mang:";
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}
void xuat(int n,int A[])
{
	cout<<"Mang sau khi dao vi tri:";
	for(int i=0;i<n;i++)
		cout<<A[i]<<" ";	
}	
