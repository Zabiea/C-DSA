// Linear search
#include<stdio.h>
#include<conio.h>


int main(){
	int a[10],i,n,item;
	printf("Enter the no of elements: ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the element to find: ");
	scanf("%d",&item);
	
    linear(a,n,item);
    
	getch();
	return 0;
}
void linear(int a[],int n,int item){
	int flag=0,loc=1,ptr;
	for(ptr=0;ptr<n;ptr++){
		if(a[ptr] == item){
			flag=1;
			loc = ptr;
		}
	}
	if(flag==1){
		printf("The element is found at loc: %d",loc);
	}
	else{
		printf("The element is not found");
	}
}
