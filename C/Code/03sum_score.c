#include<stdio.h>
int main(){
char name[]="ʮ������";
char url[]="https://cncat.cn";
printf("%s���͵�������%s\n",name,url); 
int english,math,chinese,science,sum;
	printf("���������ĳɼ�:\n");
	scanf("%d",&chinese);
	printf("��������ѧ�ɼ�:\n");
	scanf("%d",&math);
	printf("������Ӣ��ɼ�:\n");
	scanf("%d",&english);
	printf("�װ���ͬѧ,��������ܳɼ�:%d",math+english+chinese);
	return 0;
}
