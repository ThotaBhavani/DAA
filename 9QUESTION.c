/*WEEK1_3_KJ_DAA:
Imagine you're working for a large online marketplace company that facilitates the
buying and selling of various products. As part of the order processing system, the
company receives thousands of new orders every minute from customers all around
the world. To ensure efficient and timely order fulfillment, the orders need to be
sorted based on various criteria before they can be processed and shipped.
Some customers may request advanced shipping or have urgent requirements.
So, implement an application to arrange the Orders based on priority Number*/
#include<stdio.h>
main(){
	int a[100],i,j,temp,choice,n;
	printf("\n Enter number of priorites");
	scanf("%d",&n);
	printf("\n Enter orders priority numbers:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\nChoose sorting order:\n1. Ascending\n2. Descending\n");
    scanf("%d", &choice);
	//bubble sort
	if(choice==1){
	for(i=0;i<n;i++){
		for(j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
   }
   if(choice==2){
   	for(i=0;i<n;i++){
		for(j=0;j<n-1-i;j++){
			if(a[j]<a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
   }
	for(i=0;i<n;i++){
		printf("\n%d",a[i]);
	}
}
