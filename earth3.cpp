#include<bits/stdc++.h>
using namespace std;
int main()
{
	int final,start ,first_inc,month,sec,sum=0;
	int count=0;
	cin>>final>>start>>first_inc>>month>>sec;
	
	
	if(final<start)
	{
	cout<<count;
	}
	else
	{
		do
		{
			
			sum=start;
			
			for(int i=0;i<month;i++)
			{
				if(final<sum)
				{
					sum=sum+first_inc;
					count++;
				}
				else
				{
					for(int T=0;T<1;T++)
					{
						sum=sum+sec;
						count++;
					}		
				}
			}
		}while(sum>final);
	}
	cout<<count;
}
