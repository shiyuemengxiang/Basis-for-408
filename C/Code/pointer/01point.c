#include<stdio.h> 
int main(){
	int *p;//����p������ŵ�ַ�ı��� 
	int i;
	i=1;
	p=&i;  //ȡi�ĵ�ַ,p��i��ֵ����Ӱ��,pָ��i   *p=i 
	i=5;//�޸�i��ֵ,p��Ӱ�� 
	printf("p=%p\n",p);//p�Ǵ��i�ĵ�ַ 
	printf("*p=%d\n",*p);//*p��ͬ��i 
	printf("i=%d\n",i);//i��ֵ 
	return 0;
} 
