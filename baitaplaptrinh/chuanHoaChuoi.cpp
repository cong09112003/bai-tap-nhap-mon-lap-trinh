	#include<iostream>
	using namespace std;
	void xuat(string s);
	void nhap(string &s);
	void xoa(string &s, int &n, int k);
	void chuanHoaChuoi(string &s, int &n);
	int main()
	{
		string s;
		nhap(s);	
		int n = s.size();
		chuanHoaChuoi(s,n);
		xuat(s);
		return 0;
	}
	void chuanHoaChuoi(string &s, int &n)
	{
		while(s[0] == ' ')
			xoa(s,n,0);
		while(s[n-1] == ' ')
			xoa(s,n,n-1);
		int i = 0;
		while(i < n)
			if(s[i] == ' ' && s[i+1] == ' ')
				xoa(s,n,i);
			else
				i++;
	}
	void xoa(string &s, int &n, int k)
	{
		for(int i = k; i < n; i++)
			s[i] = s[i+1];
		n--;
	}
	void nhap(string &s)
	{
		getline(cin,s);
	}
	void xuat(string s)
	{
		cout<<s;
	}
