// Traversing Linear Array
#include<stdio.h>
#include<conio.h>

int main(){
	int a[10],i,n,lb,ub;
	printf("Enter the no of elements: ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	lb=0;
	ub=n;
	traverse(a,lb,ub);
	getch();
	return 0;
}

void traverse(int a[],int lb,int ub){
	int k;
	k=lb;
	printf("The traversed elements are: ");
	for(k;k<ub;k++){
		printf("\t%d",a[k]);
	}
	
}
