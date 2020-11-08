#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

/*
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水
  int  drinkNum(int money) {
	//除了前两瓶,剩下的都是加一元来一瓶
	//2元喝一瓶,->1个空瓶,+1元=2个空瓶,所以又可以喝一瓶,
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
	printf("请输入您的钱数:");
	int input = 0;
	scanf("%d", &input);
	printf("您可以喝到%d瓶可乐\n",drinkNum(input));
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

	//在这里完成下面函数，参数自己设计，要求：使用指针

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

	//在这里完成下面函数，参数自己设计，要求：使用指针

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