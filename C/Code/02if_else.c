#include<stdio.h>
int main(){
	float score;
	printf("���������Ӣ���ܳɼ�\n");
	scanf("%f",&score); 
	if(score>90){
		printf("���Ӣ��ɼ�%f��,����\n",score); 
	}else if(score>80&&score>=90){
		printf("���Ӣ��ɼ�%f��,����\n",score); 	
	}else if(score>70&&score>=80){
		printf("���Ӣ��ɼ�%f��,�е�\n",score); 	
	}else if(score>=60&&score>=70){
		printf("���Ӣ��ɼ�%f��,����\n",score); 	
	}else{
		printf("���Ӣ��ɼ�%f��,������,Ҫ������,ˬ����\n",score); 	
	}
	return 0;
}
