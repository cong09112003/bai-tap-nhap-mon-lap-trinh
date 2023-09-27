#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

void xuat(int x);
void nhap(int A[], int &n);
int timMax(int B[], int n);
int timLuongLonNhat(int A[], int n);
int chuyenDoi(int n);
int chuyenHe2Sang10(char s[]);
void chuyenHe2(char s[], int n);
int chuyenHoa(char c);

int main()
{
	int n;
	int A[1000];
	nhap(A,n);
	int max = timLuongLonNhat(A,n);
	xuat(max);
}
int timLuongLonNhat(int A[], int n)
{
	int B[1000];
	for(int i = 0; i < n; i++)
		B[i] = chuyenDoi(A[i]);
	int max = timMax(B,n);
	return max;
}
int timMax(int B[], int n)
{
	int max = B[0];
	for(int i = 0; i < n; i++)
		if(B[i] > max)
			max = B[i];
	return max;
}
int chuyenDoi(int n)
{
	char S[1000000];
	chuyenHe2(S,n);
	int l = strlen(S);
	for(int i = l-1; i >= 0 ;i=i-2)
		S[i] = '1';
	int k = chuyenHe2Sang10(S);
	return k;
}
void chuyenHe2(char s[], int n)
{
	int k = 0;
	while(n != 0)
	{
		int temp = n % 2;
		s[k++] = temp + '0';
		n=n/2;
	}
	s[k] = '\0';
	strrev(s);
}
int chuyenHe2Sang10(char s[])
{
	int value = 0;
	int a = 0;
	int len = strlen(s);
	for(int i = len-1; i >= 0; i--)
	{
		value += chuyenHoa(s[i])*pow(2,a);
		a++;
	}
	return value;
}
int chuyenHoa(char c)
{
	if(c >= '0' && c <= '9')
		return c - 48;
	else
		if(c >= 'A' && c <= 'Z')
			return c - 55;
}
void nhap(int A[], int &n)
{
	cin>>n;
	for(int i = 0; i < n; i++)
		cin>>A[i];
}
void xuat(int x)
{
	cout<<x;
}
