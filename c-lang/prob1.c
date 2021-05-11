#include<stdio.h>
#include<stdlib.h>

void multiples_sum(int start, int end){
	int i = 0;
	int req_sum = 0;
	for(i = start; i < end; i++){
		if((i % 3 == 0) || (i % 5 == 0)){
			req_sum += i;
		}
	}
	printf("%d\n",req_sum);
}

int main(){
	multiples_sum(1, 10);
	multiples_sum(1, 1000);
	return 0;
}
