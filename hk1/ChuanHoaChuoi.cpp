//  Chuan   hoa chuoi   xoa het khoang trang thua
#include<iostream>
#include<string.h>
using namespace std;
void xoaKhoangTrang(char s[]);
void xoa(char s[], int &len, int k);
void nhap(char s[]);
void xuat(char s[]);
int main()
{
	char S[2000];
	nhap(S);
	xoaKhoangTrang(S);
	xuat(S);
	return 0;
}
void xoaKhoangTrang(char s[])
{
	int i = 0;
	int len = strlen(s);
	while(s[0] == ' ')
		xoa(s,len,0);
	while(s[len-1] == ' ')
		xoa(s,len,len-1);
	while(i < len)
		if(s[i] == ' ' && s[i+1] == ' ')
			xoa(s,len,i);
		else
			i++;
	s[len] = '\0';
}
void xoa(char s[], int &len, int k)
{
	for(int i = k; i < len; i++)
		s[i] = s[i+1];
	len--;
}
void nhap(char s[])
{
	gets(s);
}
void xuat(char s[])
{
	puts(s);
}
