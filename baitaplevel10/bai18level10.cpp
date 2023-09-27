// dem so luong diem yen ngua
// yen ngua:lon nhat tren hang nhung nho nhat tren cot
#include<iostream>
#include<math.h>
#include<string.h>
#define size 200
using namespace std;
void nhap(int &m,int &n,int A[][size]);
void xuat(int dem);
int demSoYenNguaMaTran(int m,int n,int A[][size]);
int timMaxCuaDong(int row,int m,int n,int A[][size]);
int timMinCuaCot(int col,int m,int n,int A[][size]);
void xuatK(int x);
void xuatvitriYenNgua(int m,int n,int A[][size]);
int main()
{
	int m,n;
	int A[size][size]={0};
	nhap(m,n,A);
	int dem=demSoYenNguaMaTran(m,n,A);
	xuat(dem);
	xuatvitriYenNgua(m,n,A);
	return 0;
}
void nhap(int &m,int &n,int A[][size])
{
	cin>>m;
	cin>>n;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
	 	    cin>>A[i][j];
	}
}
void xuat(int x)
{
	cout<<x<<endl;
}
int demSoYenNguaMaTran(int m,int n,int A[][size])
{
	int dem=0;
	int Maxrow;
	int Minrow;
	for(int i=0;i<m;i++)
	{
		Maxrow=timMaxCuaDong(i,m,n,A);
		for(int j=0;j<n;j++)
		{
			if(A[i][j]==Maxrow)
			{
				if(A[i][j]==timMinCuaCot(j,m,n,A))
				    dem++;
			}	
		}	
	}
	return dem;	
}
int timMaxCuaDong(int row,int m,int n,int A[][size])
{
	int Maxrow=A[row][0];
	for(int j=1;j<n;j++)
	{
		if(A[row][j]>Maxrow)
		    Maxrow=A[row][j];
	}
	return Maxrow;	
}
int timMinCuaCot(int col,int m,int n,int A[][size])
{
	int Mincol=A[0][col];
	for(int i=1;i<m;i++)
	{
		if(A[i][col]<Mincol)
		    Mincol=A[i][col];
	}
	return Mincol;	
}
void xuatvitriYenNgua(int m,int n,int A[][size])
{
	int Maxrow;
	int Mincol;
	for(int i=0;i<m;i++)
	{
		Maxrow=timMaxCuaDong(i,m,n,A);
		for(int j=0;j<n;j++)
		{
			if(A[i][j]==Maxrow)
			{
				if(A[i][j]==timMinCuaCot(j,m,n,A))
				    {
				    	i++;
				    	j++;
				    	xuatK(i);
				    	xuatK(j);
				    }	
			}
		}	
	}	
}
void xuatK(int x)
{
	cout<<x<<" ";
}	
