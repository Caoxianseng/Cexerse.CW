#include<stdio.h>
//����һ������,�ݹ����1-n�ĺ�
int addSum(int n) {
	if (n == 1)    //��ֹ����:��n��СΪ1ʱ
		return 1;
	else
		return n + addSum(n - 1);//�ݹ������ȥ,������һ��
}
//����һ������,�ݹ����Ʋ���������
int fai(int n) {
	if (n == 1 || n == 2)
		return 1;
	else
		return fai(n - 1) + fai(n - 2);
}
//��д��������������ʱ���������ַ����ĳ���;
//һ�ᵽ��������,˵�������õݹ�
int forStringlong(char array[]) {
	if (array[0] == '\0')
		return 0;
	return 1 + forStringlong(array + 1);
 }

//����һ������,�������ַ�������,��ѭ��
int strLength(char* array) {
	int count = 0;
	for (int i = 0; array[i] != '\0'; i++) {
		count++;
	}
	return count;
}

int main(){
	printf("%d\n",addSum(5));//�����һ���ݹ���ͺ���

	printf("%d\n", fai(5));//����Ʋ���������

	//��֤�ݹ�����ַ�������
	char string1[] = "hehe";
	printf("%d\n",forStringlong(string1));
	printf("%d\n", strLength(string1));//��֤����ַ�������ѭ��
}
