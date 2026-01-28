#include<stdio.h>
int main(){
	int i,j,n;
	
	printf("Enter the number of products available: ");
	scanf("%d", &n);
	
	int price[n];
	
	for(i=0;i<n;i++){
		printf("\nEnter the price of product[%d]: ", i+1);
		scanf("%d", &price[i]);
	}
	
	int temp,min;
	
	for(i=0;i<n-1;i++){
		min = i;
		for(j=i+1;j<n;j++){
			if(price[j]<price[min]){
				min = j;
			}
		}
		temp=price[min];
		price[min]=price[i];
		price[i]=temp;
	}
	
	printf("\nPrice of products form lowest to highest:\n");
	for(i=0;i<n;i++){
		printf("%d\n", price[i]);
	}
	
	return 0;
}
