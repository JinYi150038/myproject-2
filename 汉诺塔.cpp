#include<bits/stdc++.h>
using namespace std;
int t=0;
void move(char a,char b)
{
	cout<<a<<' '<<"to"<<' '<<b<<endl;
	t++; //记录移动次数 
}
void hanoi(int n,char a,char b,char c)
{
	if(n==1) move(a,c);
	else
	{
		hanoi(n-1,a,c,b);
		move(a,c);
		hanoi(n-1,b,a,c); //将剩余(n-1)个移动到b柱上 
	}
}
int main()
{
	int n;
	cin>>n;
	hanoi(n,'A','B','C');
	cout<<t<<endl; //t = 2^n-1
}
