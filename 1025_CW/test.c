#include<stdio.h>
//����һ����������ʵ���ж�
int getResult(int n) {
	if (n == 0 && n == 1)
		return 0;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;//˵����������
}

int main() {
	for (int n = 100; n <= 200; n++) {
		int z = getResult(n);
		if (z == 1)
			printf("%d\t", n);
	}
}

/*
//�ж��Ƿ�Ϊ����ĺ���
#include<stdio.h>

//����һ����������ȷ���Ƿ�Ϊ����
int isLeapYear(int n){
		//��һ������,��ͨ����,��4�ı���,����100�ı���
		if(n%4 == 0){
			if( n%100 != 0){
				printf("�����������\n");
				return 0;
			}
		}

		//�ڶ��������������,��400�ı���
		if(n%400 == 0){
			printf("�����������\n");
		}
		return 0;
}

int main(){
	printf("�����������жϵ����:");
	int z = 0;
	scanf("%d",&z);
	isLeapYear(z);
	return 0 ;
}*/

/*
//��һ��������ʵ���������Ľ���
#include<stdio.h>

//����һ����������ʵ�����Ľ���
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
	printf("�������������Ϊ:%d %d",x,y);
	return 0;
}*/

/*
//����һ����������ʵ�ֳ˷�����ھ��Ĵ�ӡ
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
	printf("�����������������:");
	int z = 0;
	scanf("%d",&z);
	MulPrint(z);
	return 0;
}*/

/*
//�õݹ�ķ���ʵ�ִ�ӡÿһλ��
#include<stdio.h>

void printNum(int n){
	if(n > 9){
		printNum(n/10);
	}
	printf("%d\t",n%10);
}
int main(){
	printf("����������Ҫ�������:");
	int z = 0;
	scanf("%d",&z);
	printNum(z);
	return 0;
}*/





/*
//ʵ�ֽ׳�
#include<stdio.h>

//�õݹ�ʵ�ֵĺ���
int  factorial1(int n){
	if( n == 1)
	return 1;
	else
	return n*factorial1(n - 1);
}

//�÷ǵݹ�ʵ�ֵĺ���
int factorial2(int n){
	int z = 1;
  for(int i = 1; i <= n;i++)
		 z = i*z;
  return z;
}

int main(){
	printf("������������õ����Ľ׳�:");
	int z = 0;
	scanf("%d",&z);
	int x = factorial1(z);
	int y = factorial2(z);
	printf("�����Ľ׳�Ϊ:%d\n",y);
	printf("�����Ľ׳�Ϊ:%d\n",x);
	return 0;
}*/
