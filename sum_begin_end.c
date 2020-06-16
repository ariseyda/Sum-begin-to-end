#include<stdio.h>

// A computer program uses a loop to compute sum of first 100 positive integers, from 1 to 100, and prints the sum on console. 
//Start and end integer numbers can be asked to enter by user too. 

int main(){
	
	int begin,end;
	int i;
	int sum=0;
	
	printf("Please enter start and enter integer numbers:");
	scanf("%d%d",&begin,&end);
	
	if(end<=100 && begin>=1){
		
		for(i==begin;i<=end;i++){
		
		sum+=i;
		
	}
	
	printf("Sum:%d",sum);
	}
    
    else
	  printf("Enter integers between 1 to 100");

	return 0;
}

