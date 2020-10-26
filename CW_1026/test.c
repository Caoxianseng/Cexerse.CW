#include<stdio.h>
#include<Windows.h>
#include<string.h>
#include<stdlib.h>
//定义一个函数用来求n的阶乘
//一般求法
int lMul(int n) {
	int result = 1;
	if (n == 0) {
		return result;
	}
	for (int i = 1; i <= n; i++) {
		result = i * result;
	}
	return result;
  }
//递归求解
int lMul1(int n) {
	int result = 1;
	if (n == 0) {
		return result;
	}
	else if (n == 1) {
		return result;
	}
	else
		return  n * lMul1(n - 1);
	
}

//定义一个函数求1!+2!+3!+......n!
int addMul(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		int result = 1;
		for (int j = 1; j <= i; j++) {
			result = j * result;
		}
		sum = sum + result;
	}
	return sum;
}

//定义一个函数用来查找某个数字,也就是二分查找
void findNum(int array[], int toFind, int num) {
	int left = 0;
	int right = num - 1;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (array[mid] < toFind) {
			left = mid + 1;
		}
		else if (array[mid] > toFind) {
			right = mid - 1;
		}
		else if (array[mid] == toFind) {
			printf("这个数的角标为:%d", mid);
			break;
		}
	}
	if (left > right) {
		printf("找不到这个数");
	}
}

//定义一个函数,用来演示字符从两端移动,向中间汇聚
void exchangeForm() {
	char array1[] = "LYP IS SO WELL!";
	char array2[] = "###############";
	int left = 0;
	int right = strlen(array1) - 1;
	printf("%s\n", array2);
	while (left <= right) {
		Sleep(300);
		system("cls");
		array2[left] = array1[left];
		array2[right] = array1[right];
		printf("%s\n", array2);
		left++;
		right--;
	}
}
//定义一个函数实现输入三次密码,正确,则登陆成功,超过三次则退出程序
void inPassword() {
	for (int i = 0; i < 3; i++) {
		char input[20] = " ";
		char password[20] = "cw61527";
		printf("***************请输入您的密码:****************\n");
		scanf_s("%s",input);
		if (strcmp(input,password) == 0) {
			printf("欢迎成功进入系统");
			break;
		}
		else {
			printf("密码输入有误");
		}
	}
}


int main() {
	printf("%d\n", lMul(0));//测验一般求阶乘方法
	printf("%d\n", lMul1(0));//检测递归求解

	printf("%d\n", addMul(6));//检测求阶乘的和

	int array[] = { 1,2,3,4,5,6,7,8,9 };
	int length = sizeof(array) / sizeof(array[0]);
	 findNum(array, 6, length);//用来测试二分查找的

	 //exchangeForm();//测试动画

	 inPassword();
	return 0;
}