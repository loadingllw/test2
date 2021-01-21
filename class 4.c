#define _CRT_SECURE_NO_WARNINGS 1
//循环与分支
#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d ", i);
//		}
//    }
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//switch后面是整形和枚举类型
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	default:
//		printf("选择错误\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int i =1;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;//continue是跳过本次循环，continue后面的部分跳过，直接到入口判断部分，进行下一次判断
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	ch = getchar();
//	//getcahr - 从标准键盘读取一个字符
//	putchar(ch);
//	//打印一个字符到标准屏幕
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		ret = ret*i;
//		sum = sum + ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		tmp=a;
//		a = b;
//		b = tmp;
//    }                                    //将三个数按照从大到小比较
//	else if (a < c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	else if (b<c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	for (n = 1; n <= 100; n++)
//	{
//		if (n % 3 == 0)
//			printf("%d ", n);
//	}
//	return 0;
//}



//int main()
//{
//	int a = 160;
//	int b = 58;
//	int c;
//	while (a%b!=0)
//	{
//		c = a%b;
//		a = b;               //辗转相除法
//		b = c;
//	}
//	printf("最大公约数是：%d", c);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	for (n = 1000; n <= 2000; n++)
//	{
//		if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)   //计算1000-2000之间的闰年
//			printf("%d ", n);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int n = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (n = 2; n < i; n++)
//		{
//			if (i%n == 0)         //计算100-200之间的所有素数
//				break;
//		}
//		if (i==n)
//			printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int count = 0;
//	for (n = 1; n <= 100; n++)
//	{
//		if (n % 10 == 9 || n / 10 == 9)   //计算1-100内含有9的数字
//		{
//			printf("%d ", n);
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	double sum = 0;
//	for (n = 1; n <= 100; n++)
//	{
//		sum = sum + 1.0 / n;
//		sum = -sum;
//    }
//	printf("%lf", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int m = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (n = 1; n <= i; n++)
//		{
//			printf("%d*%d=%2d ", i, n,i*n);//九九乘法表
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = {-1,-2,-48,-23,-376,-7,-56,-39,-3,-99};
//	int max = arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("%d", max);
//	return 0;
//}



//int  main()
//{
//	int arr1[10] = {10,11,12,13,14,15,16,17,18,19};
//	int k = 18;
//	int se = sizeof(arr1) / sizeof(arr1[0]);
//	int left =0;
//	int right = se - 1;
	while (left <= right)
	{
		int mid = (right + left) / 2;
      int mid=left+(right-left)/2
		if (arr1[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr1[mid]>k)
		{
			right = mid - 1;                          //有序数组的查找
		}
		else
		{
			printf("找到了，下标是：%d\n",mid);
			break;
		}
	}
	if (left > right)
		printf("找不到\n");
	return 0;
//}
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//int main()
//{
//	char arr1[] = "hellow world!";
//	char arr2[] = "#############";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");//头文件是 #include <stdlib.h>
//		left++;
//		right--;
//	}
//	return 0;
//}

//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char a[30] = "";
//	system("shutdown -s -t 60");//倒计时开始关机
//	again:
//	printf("请注意，你的电脑将在60秒后关机，如果输入：我是猪，就停止关机\n");
//	scanf("%s", a);
//	if (strcmp(a, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}  

