// deleting item from an  Array
#include<stdio.h>
#include<conio.h>


int main(){
	int a[10],i,n,k,item;
	printf("Enter the no of elements: ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("position of element: ");
	scanf("%d",&k);
	
    n = delete_element(a,k,n,item);
    printf("\nThe new array is: ");
	for(i=0;i<n;i++){
		printf("\t%d",a[i]);
		}
	getch();
	return 0;
}
int delete_element(int a[],int k,int n,int item){
	int j;
	j=k;
	item = a[k];
	for (j;j<n;j++){
		a[j]=a[j+1];
	}
	printf("The deleted element is: %d",item);
	n=n-1;
	return n;	
}
