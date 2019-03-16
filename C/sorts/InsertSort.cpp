#include<stdio.h>
int main()
{
	printf("------Insert Sort------");
	int i,j;
	int a[10];
	int itemp;
	int ipos;
	printf("\nplease input number:\n");
	for(i=0;i<10;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	//sort from little to big
	for(i=1;i<10;i++){
		itemp=a[i];
		ipos=i-1;
		while(ipos>=0&&itemp<a[ipos]){
			a[ipos+1]=a[ipos];
			ipos--;
		}
		a[ipos+1]=itemp;
	}
	for(i=0;i<10;i++){
		printf("%d\t",a[i]);
	}
	return 0;
}
