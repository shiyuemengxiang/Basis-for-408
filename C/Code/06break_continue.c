#include<stdio.h> 
int main(){
	int i,j;
	//countinue跳出本次循环 
	for(i=1;i<=10;i++){
		if(i%5==0){
			continue;
		}
		printf("continue=====>%d\n",i);
	}
	//break;循环直接结束 
	for(j=1;j<=10;j++){
		if(j==7){
		break;
		}
		printf("break=======>%d\n",j);
	}
	
	return 0; 
}
