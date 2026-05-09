#include<stdio.h>
int main(){
	int n1,n2;
	int i,j,k;
	
	printf("Enter the number of employees in first list: ");
	scanf("%d", &n1);
	
	printf("Enter the number of employees in second list: ");
	scanf("%d", &n2);
	
	int first_list[n1],second_list[n2],final_list[n1+n2];
	
	printf("\nEnter the Employee ID of first list in Ascending order\n");
	for(i=0;i<n1;i++){
		printf("Employee %d: ", i+1);
		scanf("%d", &first_list[i]);
	}
	
	printf("\nEnter the Employee ID of second list in Ascending order\n");
	for(i=0;i<n2;i++){
		printf("Employee %d: ", i+1);
		scanf("%d", &second_list[i]);
	}
	for(i=0;i<n1;i++){
		final_list[i] = first_list[i]; 
	}
	for(j=0;j<n2;j++){
		final_list[n1+j] = second_list[j];
	}
	
	int temp;
	int n3 = n1+n2;
	
	for(i=0;i<n3-1;i++){
		for(j=0;j<n3-1-i;j++){
			if(final_list[j]>final_list[j+1]){
				temp=final_list[j+1];
				final_list[j+1]=final_list[j];
				final_list[j]=temp;
			}
		}
	}
	
	printf("\nFinal sorted list of employee id:\n");
	for(i=0;i<n3;i++){
		printf("%d ", final_list[i]);
	}
	return 0;
}
