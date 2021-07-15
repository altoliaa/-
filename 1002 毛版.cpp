#include<stdio.h>
#include<string.h>
int main()
{
	char a[1005],b[1005],c[1005]={0};
	int n,t=0,i,j,l1,l2,m,f=0,k=1;
	scanf("%d",&n);
	while(n--)
	{
		memset(c,0,sizeof(c));
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
	    
	    scanf("%s%s",&a,&b);
	
	    
	    l1=strlen(a);
	    l2=strlen(b);
	    
/*	    for(i=0;i<l1;i++)
	    {
			a[i]-='0';
		}
		
	    for(i=0;i<l2;i++)
	    {
			b[i]-='0';
		}*/
		
		
		m=0;
		for(i=l1-1,j=l2-1;;i--,j--)
		{
			if(i<0&&j<0) break;
			
			if(i<0) t=b[j]-'0'+m;
			else if(j<0) t=a[i]-'0'+m;
			else t=a[i]-'0'+b[j]-'0'+m;
			
			c[f++]=t%10;
			m=t/10;
			
			if(i<=0&&j<=0&&m!=0)
			c[f++]=m;
			
				
		}
        printf("Case %d:\n",k);	k++;
		printf("%s + %s = ",a,b); 

		for(i=f-1;i>=0;i--)
		printf("%d",c[i]);
		
		printf("\n");	
		if(n!=0) printf("\n");
		
		f=0;			
	
	}
}
 
