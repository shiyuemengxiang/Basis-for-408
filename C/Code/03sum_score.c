#include<stdio.h>
int main(){
char name[]="十月梦想";
char url[]="https://cncat.cn";
printf("%s博客的域名是%s\n",name,url); 
int english,math,chinese,science,sum;
	printf("请输入语文成绩:\n");
	scanf("%d",&chinese);
	printf("请输入数学成绩:\n");
	scanf("%d",&math);
	printf("请输入英语成绩:\n");
	scanf("%d",&english);
	printf("亲爱的同学,你的三门总成绩:%d",math+english+chinese);
	return 0;
}
