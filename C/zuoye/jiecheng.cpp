#include<stdio.h>
#include<stdio.h>
int main()
{
	int n,t,i,j,k,f,a[10000];
	while(scanf("%d",&n)!=EOF){
		//memset(a,0,sizeof(a));//chu shi hua 0;
		t=1;
		a[1]=1;
		for(i=1;i<=n;i++){
			//n de jie cheng, cong 1 dao n
			k=0;
			for(j=1;j<=n;j++){
				//arry store
				a[j]=a[j]*i+k;
				k=a[j]/10000;
				a[j]=a[j]%10000;
				
			}
			if(k!=0){
				//shu zu xia biao zengjia(siwei yi yi)
				t++;a[t]=k;
			}
		}
		printf("%d",a[t]);
		for(i=t-1;i>0;i--){
			printf("%04d",a[i]);
		}
		printf("\n");
	}
	return 0;
}
