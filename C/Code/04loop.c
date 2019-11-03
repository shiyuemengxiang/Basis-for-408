#include<stdio.h>
int main(){
int i,j,row,col;
	printf("需要生成乘法表的行数:\n");
	scanf("%d",&row);
	for(i=1;i<=row;i++){
		
		for(j=1;j<=i;j++){
			printf("%d*%d=%d\t",j,i,i*j);
		}
		printf("\n"); 
	}
	return 0;
}
