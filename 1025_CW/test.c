#include<stdio.h>
//定义一个函数用来实现判断
int getResult(int n) {
	if (n == 0 && n == 1)
		return 0;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;//说明就是素数
}

int main() {
	for (int n = 100; n <= 200; n++) {
		int z = getResult(n);
		if (z == 1)
			printf("%d\t", n);
	}
}

/*
//判断是否为闰年的函数
#include<stdio.h>

//定义一个函数用来确定是否为闰年
int isLeapYear(int n){
		//第一类闰年,普通闰年,是4的倍数,不是100的倍数
		if(n%4 == 0){
			if( n%100 != 0){
				printf("该年就是闰年\n");
				return 0;
			}
		}

		//第二类就是世纪闰年,是400的倍数
		if(n%400 == 0){
			printf("该年就是闰年\n");
		}
		return 0;
}

int main(){
	printf("请输入您想判断的年份:");
	int z = 0;
	scanf("%d",&z);
	isLeapYear(z);
	return 0 ;
}*/

/*
//用一个函数来实现两个数的交换
#include<stdio.h>

//定义一个函数用来实现数的交换
void exchangeNum(int* x, int* y){
	int temp ;
	temp = *x;
	*x = *y;
	*y = temp;
}
int main(){
	int x = 1;
	int y = 2;
	exchangeNum(&x,&y);
	printf("交换后的两个数为:%d %d",x,y);
	return 0;
}*/

/*
//定义一个函数用来实现乘法输入口诀的打印
#include<stdio.h>

void MulPrint(int n){
	for(int i = 1; i <= n ;i++){
		for(int j = 1; j <= i ; j++){
			printf("%d * %d = %d\t",j,i,i*j);
		}
		printf("\n");
	}
}
int main(){
	printf("请输入您想输入的数:");
	int z = 0;
	scanf("%d",&z);
	MulPrint(z);
	return 0;
}*/

/*
//用递归的方法实现打印每一位数
#include<stdio.h>

void printNum(int n){
	if(n > 9){
		printNum(n/10);
	}
	printf("%d\t",n%10);
}
int main(){
	printf("请输入你想要输出的数:");
	int z = 0;
	scanf("%d",&z);
	printNum(z);
	return 0;
}*/





/*
//实现阶乘
#include<stdio.h>

//用递归实现的函数
int  factorial1(int n){
	if( n == 1)
	return 1;
	else
	return n*factorial1(n - 1);
}

//用非递归实现的函数
int factorial2(int n){
	int z = 1;
  for(int i = 1; i <= n;i++)
		 z = i*z;
  return z;
}

int main(){
	printf("请输入您想求得的数的阶乘:");
	int z = 0;
	scanf("%d",&z);
	int x = factorial1(z);
	int y = factorial2(z);
	printf("该数的阶乘为:%d\n",y);
	printf("该数的阶乘为:%d\n",x);
	return 0;
}*/
