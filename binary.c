// Binary search
#include<stdio.h>
#include<conio.h>


int main(){
	int a[10],i,n,item,lb,ub;
	printf("Enter the no of elements: ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the element to find: ");
	scanf("%d",&item);
	lb=0;
	ub=n;
    binary(a,n,ub,lb,item);
    
	getch();
	return 0;
}
void binary(int a[],int n,int ub,int lb,int item){
	int loc=0,ptr,beg,end,mid;
	beg=lb;
	end=ub;
	mid = (beg+end)/2;
	while(beg<=end && a[mid]!= item){
		if(item < a[mid]){
			end = mid-1;
		}
		else{
			beg = mid+1;
		}
		mid = (beg+end)/2;
	}
	if(item==a[mid]){
		loc = mid;
		printf("The element is found at loc: %d",loc);
	}
	else{
		loc=0;
		printf("The element is not found");
	}
}
