#include<stdio.h>
//���庯��
/*

�β�ȥ�ı�ʵ�ε�ֵ 
*/
int change(int *a,int*b){
int t;//int���� 
 t=*a; // ��*a��ַָ�����ݸ�ֵ��t 
 *a=*b;//*b�ĸ�ֵ��*a 
 *b=t; 
 return; 
} 
int main(){
	int m=10,n=15;
	change(&m,&n);
	printf("a=%d,b=%d\n",m,n); 
	printf("long int�ֽ���:%d",sizeof(long int));
	return 0;
}
