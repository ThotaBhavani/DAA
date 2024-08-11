/*WEEK1_1_GN_DAA:
Imagine you work for a large logistics company that handles a high volume of
package deliveries on a daily basis. The company's success hinges on ensuring that
packages are delivered to their respective destinations efficiently and on time. To
solve this problem, you create a program that can quickly process and classify
packages based on their destination.*/
#include<stdio.h>
main(){
	int a[100],i,j,current,choice;
	printf("Enter time to reach destination:");
	for(i=0;i<4;i++){
		scanf("%d",&a[i]);
	}
	printf("\nChoose sorting order:\n1. Ascending\n2. Descending\n");
    scanf("%d", &choice);
	//insertion sort
	if(choice==1){
	for(i=1;i<4;i++){
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
   	for(i=1;i<4;i++){
		current=a[i];
		j=i-1;
		while(j>=0 && a[j]<current){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=current;
	}
   }
	for(i=0;i<4;i++){
		printf("\n%d",a[i]);
	}
}
