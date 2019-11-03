#include<stdio.h>
int main(){
	float score;
	printf("请输入你的英语总成绩\n");
	scanf("%f",&score); 
	if(score>90){
		printf("你的英语成绩%f分,优秀\n",score); 
	}else if(score>80&&score>=90){
		printf("你的英语成绩%f分,良好\n",score); 	
	}else if(score>70&&score>=80){
		printf("你的英语成绩%f分,中等\n",score); 	
	}else if(score>=60&&score>=70){
		printf("你的英语成绩%f分,及格\n",score); 	
	}else{
		printf("你的英语成绩%f分,不及格,要补考了,爽歪歪\n",score); 	
	}
	return 0;
}
