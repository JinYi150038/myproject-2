#include<stdio.h>
#include<string.h>
int main()
{
	int t,n;
	scanf("%d",&t);
	n=t;
	while(t--)
	{
		int num1[1010]={0},num2[1010]={0},sum=0;
		char sum1[1010]={'\0'},sum2[1010]={'\0'};
		scanf("%s %s",sum1,sum2);
		for(int i=0,j=strlen(sum1)-1;j>=0;)
		{
			num1[i]=sum1[j]-'0';
			i++;
			j--;
		}
		for(int i=0,j=strlen(sum2)-1;j>=0;)
		{
			num2[i]=sum2[j]-'0';
			i++;
			j--;
		}
		int k=0;
		while(k<=1009)
		{
			num1[k]+=num2[k];
			if(num1[k]>=10)
			{
				num1[k+1]++;
				num1[k]-=10;
			}
			k++;
		}
		int mark=0;
		for(int i=1009;i>=0;i--)
		{
			if(num1[i]!=0)
			{
				mark=i;
				break;
			}
		}
		printf("Case %d:\n",n-t);
		printf("%s + %s = ",sum1,sum2);
		if(mark==0&&num1[mark]==0)
			printf("0\n");
		else
		{
			for(int i=mark;i>=0;i--)
				printf("%d",num1[i]);
			printf("\n");
		}
		printf("\n");
	}
	cout<<"finish calculate"<<endl; 
	return 0;
}
