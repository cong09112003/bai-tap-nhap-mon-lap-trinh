#include<iostream>
using namespace std;
bool laDiemLoi(int A[][100], int i, int j,int m, int n);
int diemLoiBeNhatTrenBien(int A[][100], int m, int n, int &row, int &col);
void loiMin(int A[][100], int m, int n, int &row, int &col);
void nhap(int A[][100], int &m, int &n);
void xuat(int row, int col);
int main()
{
	int row,col;
	int A[100][100],m,n;
	nhap(A,m,n);
	loiMin(A,m,n,row,col);
	xuat(row,col);
	return 0;
}
bool laDiemLoi(int A[][100], int i, int j,int m, int n)
{
	if(i>0)
		if(A[i-1][j] >= A[i][j])
			return false;
	if(i<m-1)
		if(A[i+1][j] >= A[i][j])
			return false;
	if(j>0)
		if(A[i][j-1] >= A[i][j])
			return false;
	if(j<n-1)
		if(A[i][j+1] >= A[i][j])
			return false;
	return true;
}
int diemLoiBeNhatTrenBien(int A[][100], int m, int n, int &row, int &col)
{
	int min = 1e9;
	for(int i =0; i <m; i = i +m-1)
		for(int j =0;j < n; j++)
			if(laDiemLoi(A,i,j,m,n) && min > A[i][j])
			{
				row = i;
				col = j;
				min = A[i][j];
			}
	for(int i =0; i <m; i++)
		for(int j =0;j < n; j= j+n-1)
			if(laDiemLoi(A,i,j,m,n) && min > A[i][j])
			{
				row = i;
				col = j;
				min = A[i][j];
			}
	if(min == 1e9)
	{
		row = -1;
		return -1;
	}
	return min;
			
}
void loiMin(int A[][100], int m, int n, int &row, int &col)
{
	int min = diemLoiBeNhatTrenBien(A,m,n,row,col);
	for(int i =1; i < m-1; i++)
		for(int j = 1; j < n-1; j++)
			if(min > A[i][j] && laDiemLoi(A,i,j,m,n))
			{
				row = i;
				col = j;
			}
}
void nhap(int A[][100], int &m, int &n)
{
	cin>>m>>n;
	for(int i =0; i< m; i++)
		for(int j =0; j< n; j++)
			cin>>A[i][j];
}
void xuat(int row, int col)
{
	if(row == -1)
		cout<<-1;
	else
		cout<<row<<" "<<col;
}
