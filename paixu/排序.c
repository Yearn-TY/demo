#include<stdio.h>
int main()
{
	int m,n,c,i,a,x,z,y;
	scanf("%d %d\n",&n,&m);
	int s[n];
	if(n>=1&&n<=1000&&m>=1&&m<=1000)
	{
		
		for(;n>0;--n)
		{
			scanf("%d ",&s[n-1]);
			if(s[n-1]>=1&&s[n-1]<=1000);
		}
		i=n;
		for(z=n;z>0;--z)
		{
			i-=1;
			for( a=i-2;a>=0;--a)
			{
				if(s[i]>s[a])
				{       
					c=s[i];
					s[i]=s[a];
					s[a]=c;
				}
			}
		}
	}
	
	
	if(n>m)
	{
		for( x=0;x<m;++x)
			printf("%d ",s[x]);
	}
	else  
	{
		for(y=0;y<n;++y)
		printf("%d",s[y]);
	}

	return 0;
}
