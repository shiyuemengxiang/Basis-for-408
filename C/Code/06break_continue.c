#include<stdio.h> 
int main(){
	int i,j;
	//countinue��������ѭ�� 
	for(i=1;i<=10;i++){
		if(i%5==0){
			continue;
		}
		printf("continue=====>%d\n",i);
	}
	//break;ѭ��ֱ�ӽ��� 
	for(j=1;j<=10;j++){
		if(j==7){
		break;
		}
		printf("break=======>%d\n",j);
	}
	
	return 0; 
}
