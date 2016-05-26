#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int len ,i ,j ,flag = 0, start;
	for(len=12; len>=1; len--)
	{
		int k=sqrt(n)+1;
		for(start =2 ; start <= k; start++)
		{
			long long sum =1;
			for(i=start ,j=0 ; j<len ; j++,i++)
			{
				sum =sum*i;
			}
			if(n%sum==0)
			{
				flag=1;
				break;
			}
		}
		if(flag)break;
	}
	if(flag)
	{
		cout<<len<<endl;
		for(i=start ,j=0; j<len ; j++,i++)
		{
			cout<<i<<(j==(len-1))?'\n':' ';
		}
	}
	else
	{
		cout<<n<<endl;
	}
	return 0;
}
