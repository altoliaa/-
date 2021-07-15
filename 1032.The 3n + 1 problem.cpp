#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,n,m,t=0,tm=0,a,b;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(a<b)
		{
			n=a;
			m=b;
		}
		if(b>a)
		{
			n=b;
			n=a;
		}
		t=0,tm=0;
		for(i=n;i<=m;i++)
		{
			j=i;
			while(j!=1)
			{
				if(j%2==0)
				{
					j=j/2;
					t++;
				}
				else
				{
					j=3*j+1;
					t++;
				}				
			}
			if(t>tm) tm=t;
			t=0;
		}
		printf("%d %d %d\n",a,b,tm+1);
	}
}
