#include<stdio.h> 
int main(){
	int *p;//变量p用来存放地址的变量 
	int i;
	i=1;
	p=&i;  //取i的地址,p和i的值互不影响,p指向i   *p=i 
	i=5;//修改i的值,p无影响 
	printf("p=%p\n",p);//p是存放i的地址 
	printf("*p=%d\n",*p);//*p等同于i 
	printf("i=%d\n",i);//i的值 
	return 0;
} 
