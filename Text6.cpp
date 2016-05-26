#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int len ,i ,j ,flag = 0, start;
	for(len=12; len>=1; len--)					//因为计算（1<N<231）的连续因子，所以根据因子的定义最大的因子一定不超过230，且2*3*4……*13>>230。所以len=12，即连续因子序列最长不会超过12个。
	{//fix bug again
		int k=sqrt(n)+1;
		for(start =2 ; start <= k; start++)
		{//fix bug aaggiinn
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
