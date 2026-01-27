//#include <stdio.h>
//int main(void)
//{
//	int a = 1;
//	while (a < 10)
//	{
//		a = a * 2;
//	}
//	printf("a:%d", a);
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int a = 1;
//	int i;
//	
//	for (i = 0; i < 3; i++)
//	{
//		a = a * 2;
//	}
//	printf("a:%d\n",a);
//	return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//	int a = 1;
//
//	do
//	{
//		a = a * 2;
//	} while (a < 10);
//	printf("a:%d", a);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("$");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//	int j;
//	for (i = 0; i < 3; i++)
//	{
//		
//		for (j = 0; j <5 ; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int j;
//	int i;
//	for (i = 2; i <= 9; i++)
//	{
//		for (j = 1; j < 9; j++)
//		{
//			printf("%d*%d=%d\n", i,j, i * j);
//		}
//
//	}
//	return 0;
//}	//구구단 만들기

//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//	int sum = 0;
//
//	for (i = 1; i <= 10; i++)
//	{
//		sum += i;
//		if (sum > 30) break;
//	}
//	printf("누적한 값: %d\n", sum);
//	printf("마지막으로 더한 값:%d\n", i);
//
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int i;
//	int j;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++) {
//			if (i == j)
//			{
//				printf("*");
//			}
//			else if (i + j == 4)
//			{
//				printf("*");
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}