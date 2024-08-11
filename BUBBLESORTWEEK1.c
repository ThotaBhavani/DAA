#include<stdio.h>
main(){
	int n,a[20],i,j,temp;
	printf("\n enter how many elements you want to enter");
	scanf("%d",&n);
	printf("\n enter elements");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\n the elements of array are:");
	for(i=0;i<n;i++){
		printf("%3d",a[i]);
	}
	for(i=n-1;i>=1;i--){
		for(j=0;j<i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\n the values after sort:");
	for(i=0;i<n;i++){
		printf("%3d",a[i]);
}
}
