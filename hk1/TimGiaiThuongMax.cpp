#include<iostream>
using namespace std;
void xuat(int qua);
void nhap(int A[][100], int &n, int &k);
int tinhGiaiThuongLonNhat(int A[][100], int n, int k);
int main()
{
	int n, k;
	int A[100][100];
	nhap(A,n,k);
	int qua = tinhGiaiThuongLonNhat(A,n,k);
	xuat(qua);
	return 0;
}
int tinhGiaiThuongLonNhat(int A[][100], int n, int k)
{
	int x = 0; 
	int max = 0;
	int y = 0;
	while(x + k <= n)
	{
		y = 0;
		while(y + k <= n)
		{
			int tong = 0;
			for(int i = x; i < x + k; i++)
				for(int j = y; j < y + k; j++)
					tong+=A[i][j];
			y++;
			if(tong > max)
				max = tong;
		}
		x++;
	}
	return max;
}

void nhap(int A[][100], int &n, int &k)
{
	cin>>n>>k;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			cin>>A[i][j];
}
void xuat(int qua)
{
	cout<<qua;
}
