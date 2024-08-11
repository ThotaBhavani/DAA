/*WEEK1_2_KJ_DAA:
Imagine you are working for a retail store that sells a wide variety of products. The
store has a vast inventory with thousands of items, and it's becoming challenging for
the employees to manage and locate products efficiently. Customers often ask for
specific items, and employees need to find them quickly. The sorting program's
primary goal is to organize the products in the inventory systematically, allowing for
faster and easier access to items when needed.
Implement an efficient sorting algorithm to arrange the products based on product
IDs*/
#include<stdio.h>
main(){
	int a[100],i,j,temp,choice,n;
	printf("\n Enter number of products");
	scanf("%d",&n);
	printf("\n Enter Products IDs:");
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
