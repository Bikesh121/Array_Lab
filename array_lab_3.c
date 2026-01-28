#include<stdio.h>
int main(){
	int i,j,n;
	
	printf("Enter the number of students in a class: ");
	scanf("%d", &n);
	
	int student[n];
	int largest,s_largest;
	
    for(i=1;i<=n;i++){
    	printf("\nEnter the score of student[%d]: ", i);
    	scanf("%d", &student[i]);
    	
    	if(i==1){
    	largest = student[i];
        }
    	else if(student[i]>largest){
    		s_largest = largest;
    		largest = student[i];
		}
	}
	
	printf("\nThe largest score in a class test is: %d", largest);
	printf("\nThe second largest score in a class test is: %d", s_largest);
	
	
	return 0;
}
