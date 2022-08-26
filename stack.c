#include<stdio.h>
#include<conio.h>

int main(){
	int top=-1,item,max_stk,ch,ele,k;
	static int stack[10];
	max_stk=9;
	while(1){
	printf("\nPress 1 to push. ");
	printf("\npress 2 to pop. ");
	printf("\npress 3 to show Stack. ");
	printf("\nEnter your choice: ");
	scanf("%d",&ch);
	
		switch(ch){
			case 1: printf("\nEnter the element to push: ");
			        scanf("%d",&item); 
			        push(stack,top,max_stk,item);
			        break;
			case 2: ele = pop(stack,top,ele);
			        printf("\nThe poped element is : %d",ele);
			        break;
			case 3: printf("\nThe Stack: ");
					for(k=0;k<=top;k++){
						printf("\t%d",stack[k]);
					}
					break;
			default:printf("\nExited");
			        break;
		}
	}
	getch();
	return 0;
	
}
int push(int stack[],int top,int max_stk,int item){
	if(top == max_stk){
		printf("\nStack Overflow.\n");
	    return stack;
	}
	else{
		top = top+1;
		stack[top]=item;
		printf("\nElement pushed.\n");
		return stack;
	}
}
int pop(int stack[],int top,int ele){
	if(top == -1){
		printf("\nStack underflow.\n");
		return 0;
	}
	else{
		ele = stack[top];
		top = top-1;
		return ele;
	}
}
