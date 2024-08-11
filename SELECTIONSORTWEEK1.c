#include<stdio.h>
main(){
	int a[20],i,j,min,temp,index,n;
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
	for(i=0;i<n-1;i++){
		min=a[i];
		index=i;
		for(j=i+1;j<n;j++){
			if(a[j]>min){
				min=a[j];
				index=j;
			}
		}
		if(index!=i){
			temp=a[i];
			a[i]=a[index];
			a[index]=temp;
		}
	}
	printf("\n the values after sort:");
	for(i=0;i<n;i++){
		printf("%3d",a[i]);
	}
}
