#include<bits/stdc++.h>
using namespace std;
int t=0;
void move(char a,char b)
{
	cout<<a<<' '<<"to"<<' '<<b<<endl;
	t++; //��¼�ƶ����� 
}
void hanoi(int n,char a,char b,char c)
{
	if(n==1) move(a,c);
	else
	{
		hanoi(n-1,a,c,b);
		move(a,c);
		hanoi(n-1,b,a,c); //��ʣ��(n-1)���ƶ���b���� 
	}
}
int main()
{
	int n;
	cin>>n;
	hanoi(n,'A','B','C');
	cout<<t<<endl; //t = 2^n-1
}
