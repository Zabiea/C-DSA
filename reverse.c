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
	
    reverse_element(a,n);
    printf("\nThe new array is: ");
	for(i=0;i<n;i++){
		printf("\t%d",a[i]);
		}
    
	
	getch();
	return 0;
}
int reverse_element(int a[],int n){
	int j,i,k,temp;
	j = n/2;
	k = n-1;
	for(i=0;i<j;i++){
			temp = a[i];
			a[i]=a[k];
			a[k]=temp;
			k--;
	}
}
