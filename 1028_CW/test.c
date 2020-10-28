#include<stdio.h>
//定义一个函数,递归求解1-n的和
int addSum(int n) {
	if (n == 1)    //终止条件:当n最小为1时
		return 1;
	else
		return n + addSum(n - 1);//递归求和下去,交给下一层
}
//定义一个函数,递归求解菲波那切数列
int fai(int n) {
	if (n == 1 || n == 2)
		return 1;
	else
		return fai(n - 1) + fai(n - 2);
}
//编写函数不允许创建临时变量，求字符串的长度;
//一提到不允许创建,说明就是用递归
int forStringlong(char array[]) {
	if (array[0] == '\0')
		return 0;
	return 1 + forStringlong(array + 1);
 }

//定义一个函数,用来求字符串长度,用循环
int strLength(char* array) {
	int count = 0;
	for (int i = 0; array[i] != '\0'; i++) {
		count++;
	}
	return count;
}

int main(){
	printf("%d\n",addSum(5));//测验第一个递归求和函数

	printf("%d\n", fai(5));//测验菲波那切数列

	//验证递归求解字符串长度
	char string1[] = "hehe";
	printf("%d\n",forStringlong(string1));
	printf("%d\n", strLength(string1));//验证求解字符串长度循环
}
