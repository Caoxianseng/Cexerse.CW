#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

/*
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ
  int  drinkNum(int money) {
	//����ǰ��ƿ,ʣ�µĶ��Ǽ�һԪ��һƿ
	//2Ԫ��һƿ,->1����ƿ,+1Ԫ=2����ƿ,�����ֿ��Ժ�һƿ,
	  int total = 0;
	  if (money <= 0)
	  {
		  total = 0;
	  }
	  else
	  {
		  total = money * 2 - 1;
	  }
	  return total;
	}
int main() {
	printf("����������Ǯ��:");
	int input = 0;
	scanf("%d", &input);
	printf("�����Ժȵ�%dƿ����\n",drinkNum(input));
	int arr[] = { 1,2,3,4,5 };
	short* p = (short*)arr;
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		*(p + i) = 0;
	}

	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	unsigned long pulArray[] = { 6,7,8,9,10 };
	unsigned long* pulPtr;
	pulPtr = pulArray;
	*(pulPtr + 3) += 3;
	printf("% d, % d\n", *pulPtr, *(pulPtr + 3));

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;  
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i)
	{
		printf("%d ", *p);   
		p++;
	}

	char str[] = "hello bit";

	//������������溯���������Լ���ƣ�Ҫ��ʹ��ָ��

	Reverse(str);

	return 0;

	return 0;
}

void Reverse(char* str)

{

	char* left = str;

	char* right = str + strlen(str) - 1;

	while (left < right)

	{

		char temp = *left;

		*left = *right;

		*right = temp;

		++left;

		--right;

	}

}





int main()

{

	char str[] = "hello bit";

	//������������溯���������Լ���ƣ�Ҫ��ʹ��ָ��

	Reverse(str);

	return 0;

}*/

void change(char* str){
	char* left = str;
	char* right = str + strlen(str) - 1;
	while (left < right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		++left;
		++right;
	}
}

int main()

{
	char str[] = "hello wor";
	change(str);
	printf("%s", str);
	return 0;
}