
#include<stdio.h>


int main(){
	long array[10]={1,12,33,14,95,65,77,13,4,62};
	int i=0,k=0;
	for(k;k<10;k++){
		i=0;int temp;
		for(i;i<10;i++){
			if(array[i]>array[i+1]){
				temp=array[i+1];
				array[i+1]=array[i];
				array[i]=temp;
			}
		}
	}
	i=0;
	for(i;i<10;i++){
		printf("%d ",array[i]);
	}
}
