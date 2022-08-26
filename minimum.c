// maximum item from an  Array
#include<stdio.h>
#include<conio.h>


int main(){
	int a[10],i,n;
	printf("Enter the no of elements: ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
    min_element(a,n);
    
	
	getch();
	return 0;
}
void min_element(int a[],int n){
	int j,min;
	min = a[0];
	for(j=1;j<n;j++){
		if(a[j] < min){
			min = a[j];
		}
	}
	printf("\nThe max element is: %d",min);
}
