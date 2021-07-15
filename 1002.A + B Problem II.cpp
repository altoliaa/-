#include<stdio.h>
#include<string.h>
int main()
{
	int n,len1,len2,k=1,i,j,flag=0,t,m;
	char a[1005],b[1005],sum[1005]={0};
	
	scanf("%d",&n);
	while(n--)
	{
		memset(sum,0,sizeof(sum));//初始化数组，memset在string函数库里
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		
		scanf("%s%s",&a,&b);
		
		len1=strlen(a);
		len2=strlen(b);
		
		m=0;//每一组数据测试时m初始化
		for(i=len1-1,j=len2-1;;i--,j--)//从各自的最后一位开始逐项相加 
		{
			if(i<0 && j<0) break;
			
			if(i<0) t=b[j]-'0'+m; //字符串a算完了但b还没有（b的位数多） 
			else if(j<0) t=a[i]-'0'+m;//a的位数多
			else t=a[i]-'0'+b[j]-'0'+m;
			//这里t不但是两数相加，还要加上m，(m是进位的数，(m=1).)
			
			sum[flag++]=t%10; //对10求余算出相加后的个位数并保存
			m=t/10; // t/10是两数相加后的十位上的数，该数需要加到下一个位置上
			
			if(((i==0&&j<=0)||(i<=0&&j==0)) && m!=0)//若首位计算完，还要进位（m!=0） 
				sum[flag++]=m; //其实m一定是1
			
		}
		printf("Case %d:\n",k);	k++; //打印case
		printf("%s + %s = ",a,b); 
		
		for(i=flag-1;i>=0;i--)  //因为保存数字时是从最后一位开始相加的，所以要倒序输出
			printf("%d",sum[i]);
			
		printf("\n");
		if(n!=0) printf("\n"); //这里是最坑的！！！交了好多次才发现，如果是最后一个样例，后边是没有换行符的，不然一直是Presentation Error！！！
		
		flag=0; //flag置为0
	}
	return 0;
}