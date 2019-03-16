#include<stdio.h>
int main()
{
	printf("------Bubble Sort------");
	int i,j;
	int a[10];
	int itemp;
	printf("\nplease input number:\n");
	for(i=0;i<10;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	//sort from little to big
	for(i=1;i<10;i++){
		for(j=9;j>=i;j--){
			if(a[j]<a[j-1]){
				itemp=a[j];
				a[j]=a[j-1];
				a[j-1]=itemp;
			}
		}
	}
	for(i=0;i<10;i++){
		printf("%d\t",a[i]);
	}
	return 0;
}
