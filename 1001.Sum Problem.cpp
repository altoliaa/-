#include<stdio.h>
/*int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	printf("%d\n",(1+n)*n/2);
} */
int main(){
	int n,i,sum;
	while(scanf("%d", &n) != EOF) {
		sum=0;
		for(i=1;i<=n;i++){
			sum += i;
		}
		printf("%d\n\n", sum);
	}
	
}
