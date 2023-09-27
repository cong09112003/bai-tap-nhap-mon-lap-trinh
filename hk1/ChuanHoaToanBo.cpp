#include<iostream>
#include<string.h>
using namespace std;
void xoaKhoangTrang(char s[]);
void xoa(char s[], int &len, int k);
void nhap(char s[]);
void xuat(char s[]);
void xoaKiTuDacBiet(char S[]);
void chuanHoaChuoi(char S[]);
void doiChuHoa(char S[]);
void doiChuCaiDauTienMoiTuThanhInHoa(char s[]);
int main()
{
	char S[1000];
	nhap(S);
	chuanHoaChuoi(S);
	xuat(S);
	return 0;
}
void chuanHoaChuoi(char S[])
{
	xoaKiTuDacBiet(S);
	xoaKhoangTrang(S);
	doiChuHoa(S);
}
void doiChuHoa(char S[])
{
	int len = strlen(S);
	for(int i = 0; i < len; i++)
		if(S[i] >= 65 && S[i] <= 90)
			S[i] = S[i] + 32;
	S[len] = '\0';
	doiChuCaiDauTienMoiTuThanhInHoa(S);
}
void doiChuCaiDauTienMoiTuThanhInHoa(char s[])
{
	int len = strlen(s);
	if(s[0] >= 97 && s[0] <= 122)
		s[0] = s[0] - 32;
	for(int i = 0; i < len; i++)
		if( s[i] == ' ' && (s[i+1 ] >= 'a' && s[i+1] <='z') )
			s[i+1] = s[i+1] - 32;
}
void xoaKiTuDacBiet(char S[])
{
	int i = 0;
	int len = strlen(S);
	while(i < len)
	{
		if(S[i] >= 65 && S[i] <= 90 || S[i] >= 97 && S[i] <= 122 || S[i] == ' ')
			i++;
		else
			S[i] = ' ';
    }
	S[len] = '\0';
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
