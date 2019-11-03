#include<stdio.h>
//定义函数
/*

形参去改变实参的值 
*/
int change(int *a,int*b){
int t;//int变量 
 t=*a; // 把*a地址指向内容赋值给t 
 *a=*b;//*b的赋值给*a 
 *b=t; 
 return; 
} 
int main(){
	int m=10,n=15;
	change(&m,&n);
	printf("a=%d,b=%d\n",m,n); 
	printf("long int字节数:%d",sizeof(long int));
	return 0;
}
