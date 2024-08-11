/*WEEK1_3_GN_DAA:
Imagine you're working for a large online marketplace company that facilitates the
buying and selling of various products. As part of the order processing system, the
company receives thousands of new orders every minute from customers all around
the world. To ensure efficient and timely order fulfillment, the orders need to be
sorted based on various criteria before they can be processed and shipped.
Some customers may request advanced shipping or have urgent requirements.
So, implement an application to arrange the Orders based on priority Number*/
#include<stdio.h>
main(){
	int a[100],i,j,min,temp,index,choice;
	printf("Enter orders Priority Number:");
	for(i=0;i<12;i++){
		scanf("%d",&a[i]);
	}
	//selection sort
	printf("\nChoose sorting order:\n1. Ascending\n2. Descending\n");
    scanf("%d", &choice);
    if(choice==1){
	for(i=0;i<11;i++){
		min=a[i];
		index=i;
		for(j=i+1;j<12;j++){
			if(a[j]<min){
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
}
   if(choice==2){
   	for(i=0;i<11;i++){
		min=a[i];
		index=i;
		for(j=i+1;j<12;j++){
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
   }
	for(i=0;i<12;i++){
		printf("\n%d",a[i]);
	}
}
