#define _CRT_SECURE_NO_WARNINGS 1
//ѭ�����֧
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
//	switch (day)//switch���������κ�ö������
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	default:
//		printf("ѡ�����\n");
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
//			continue;//continue����������ѭ����continue����Ĳ���������ֱ�ӵ�����жϲ��֣�������һ���ж�
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	ch = getchar();
//	//getcahr - �ӱ�׼���̶�ȡһ���ַ�
//	putchar(ch);
//	//��ӡһ���ַ�����׼��Ļ
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
//    }                                    //�����������մӴ�С�Ƚ�
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
//		a = b;               //շת�����
//		b = c;
//	}
//	printf("���Լ���ǣ�%d", c);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	for (n = 1000; n <= 2000; n++)
//	{
//		if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)   //����1000-2000֮�������
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
//			if (i%n == 0)         //����100-200֮�����������
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
//		if (n % 10 == 9 || n / 10 == 9)   //����1-100�ں���9������
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
//			printf("%d*%d=%2d ", i, n,i*n);//�žų˷���
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
			right = mid - 1;                          //��������Ĳ���
		}
		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n",mid);
			break;
		}
	}
	if (left > right)
		printf("�Ҳ���\n");
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
//		system("cls");//ͷ�ļ��� #include <stdlib.h>
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
//	system("shutdown -s -t 60");//����ʱ��ʼ�ػ�
//	again:
//	printf("��ע�⣬��ĵ��Խ���60���ػ���������룺��������ֹͣ�ػ�\n");
//	scanf("%s", a);
//	if (strcmp(a, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}  

