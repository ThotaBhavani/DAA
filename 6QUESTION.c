/*WEEK1_3_SKM_DAA:
Imagine you are working for a large online marketplace like Amazon or eBay. One
of the critical functionalities of such platforms is to display products to customers in
a way that is relevant, helpful, and easy to navigate. Customers can browse through
thousands or even millions of products, and Many users prefer to see products sorted
by price, either in ascending or descending order. This allows them to find the
cheapest or most expensive products within their budget. So, implement an
application to arrange the products based on price*/
#include<stdio.h>
main(){
	int a[100],i,j,current,choice,n;
	printf("\n Enter number of products");
	scanf("%d",&n);
	printf("Enter Product Price:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\nChoose sorting order:\n1. Ascending\n2. Descending\n");
    scanf("%d", &choice);
	//insertion sort
	if(choice==1){
	for(i=1;i<n;i++){
		current=a[i];
		j=i-1;
		while(j>=0 && a[j]>current){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=current;
	}
   }
   if(choice==2){
   	for(i=1;i<n;i++){
		current=a[i];
		j=i-1;
		while(j>=0 && a[j]<current){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=current;
	}
   }
	for(i=0;i<n;i++){
		printf("\n%d",a[i]);
	}
}
