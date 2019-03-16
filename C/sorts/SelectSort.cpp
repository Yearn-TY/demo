#include<stdio.h>
int main()
{
	int i,j;
	int a[10];
	int itemp;
	int ipos;
	printf("------Select Sort------");
	printf("\nplease input number:\n");
	for(i=0;i<10;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	//from little to big
	for(i=0;i<9;i++){
		itemp=a[i];
		ipos=i;
		for(j=i+1;j<10;j++){
			if(a[j]<itemp){
				itemp=a[j];
				ipos=j;
			}
		}
		a[ipos]=a[i];
		a[i]=itemp;
	}
	for(i=0;i<10;i++){
		printf("%d\t",a[i]);
	}
	return 0;
	
}
