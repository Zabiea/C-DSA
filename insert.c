// inserting item into an  Array
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
	printf("Enter the position of new element: ");
	scanf("%d",&k);
	printf("Enter the new element: ");
	scanf("%d",&item);
	
    n = insert_element(a,k,n,item);
	for(i=0;i<n;i++){
		printf("\t%d",a[i]);
		}
	getch();
	return 0;
}

int insert_element(int a[],int k,int n,int item){
	int j,i;
	j=n;
	for (j;j>=k;j--){
		a[j+1]=a[j];
	}
	a[k]=item;
	n=n+1;
	//for(i=0;i<n;i++){
	//	printf("\t%d",a[i]);
	//}
	return n;         //we can return only one value in c/c++

}
