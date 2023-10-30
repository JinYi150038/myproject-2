#include<bits/stdc++.h>
using namespace std;
string number[13]={"2","3","4","5","6","7","8","9","10","J","Q","K","A"};
string flower[6]={"大王","小王","黑桃","红桃","梅花","方块"};
struct poker
{
	string name;
	int number;
	int flower;
};
bool compare(poker a,poker b)
{
	if(a.flower==b.flower)
		return a.number>b.number;
	else
		return a.flower<b.flower;
}
int judge_flower(string a)
{
	for(int i=0;i<6;i++)
	{
		if(a.find(flower[i])!=string::npos)
			return i;
	}
	return -1;
}
int judge_number(string a)
{
	for(int i=0;i<13;i++)
	{
		if(a.find(number[i])!=string::npos)
			return i;
	}
	return -1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		poker *a=new poker[n];
		for(int i=0;i<n;i++)
			cin>>a[i].name;
		for(int i=0;i<n;i++)
		{
			a[i].flower=judge_flower(a[i].name);
			a[i].number=judge_number(a[i].name);
		}
		sort(a,a+n,compare);
		for(int i=0;i<n-1;i++)
			cout<<a[i].name<<' ';
		cout<<a[n-1].name<<endl;
		delete []a;
	}
	return 0;
}
