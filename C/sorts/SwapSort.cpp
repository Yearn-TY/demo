#include<stdio.h>
int main()
{
	printf("------Swap Sort------");
	int i,j;
	int a[10];
	int itemp;
	printf("\nplease input number:\n");
	for(i=0;i<10;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	//Sort from little to big
	for(i=0;i<9;i++){
		for(j=i+1;j<10;j++){
			if(a[j]<a[i]){
				itemp=a[j];
				a[j]=a[i];
				a[i]=itemp;
			}
		}
	}
	for(i=0;i<10;i++){
		printf("%d\t",a[i]);
	}
	return 0;
}
