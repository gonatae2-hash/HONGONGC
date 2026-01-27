//#include <stdio.h>
//
//int sum(int x, int y);
//
//int main(void)
//{
//	int a = 10, b = 20;
//	int result;
//
//	result = sum(a, b);
//	printf("result : %d\n", result);
//
//	return 0;
//}
//
//int sum(int x, int y)
//{
//	int temp;
//	temp = x + y;
//
//	return temp;
//}

//#include <stdio.h>
//
//int get_num(void);
//
//int main(void)
//{
//	int result;
//
//	result = get_num();
//	printf("반환값 : %d\n", result);
//	return 0;
//}
//
//int get_num(void)
//{
//	int num;
//
//	printf("양수 입력 : ");
//	scanf("%d", &num);
//
//	return num;
//
//}

//#include <stdio.h>
//
//void print_char(char ch, int count);
//
//int main(void)
//{
//	print_char('@', 5);
//
//	return 0;
//}
//
//void print_char(char ch, int count)
//{
//	int i;
//
//	for (i = 0; i < count; i++)
//	{
//		printf("%c", ch);
//	}
//	return;
//}

//#include <stdio.h>
//
//void print_line(void);
//
//int main(void)
//{
//	print_line();
//	printf("학번	이름	전공	학점\n");
//	print_line();
//
//	return 0;
//}
//
//void print_line(void)
//{
//	int i;
//	for (i = 0; i < 50; i++)
//	{
//		printf("-");
//	}
//	printf("\n");
//}

//#include <stdio.h>
//
//void fruit(void);
//
//int main(void)
//{
//	fruit();
//
//	return 0;
//}
//
//void fruit(void)
//{
//	printf("apple\n");
//	fruit();
//}

//#include <stdio.h>
//
//void fruit(int count);
//
//int main(void)
//{
//	fruit(1);
//
//	return 0;
//}
//
//void fruit(int count)
//{
//	printf("apple\n");
//	if (count == 3) return;
//	fruit(count + 1);
//	printf("jam\n"); 
//}

//#include <stdio.h>
//
//int sum(int x);
//
//int main(void)
//{
//	sum(10);
//	sum(100);
//	return 0;
//}
//
//int sum(int x)
//{
//	int temp;
//	temp = (1 + x) * (x / 2);
//	printf("1부터 %d까지의 합은 %d입니다.\n",x, temp);
//}
//
//#include <stdio.h>
//
//int rec_func(int n);
//
//int main(void)
//{
//	printf("%d",rec_func(10));
//	
//	return 0;
//}
//
//int rec_func(int n)
//{
//	
//
//	if (n == 0)
//		return 0;
//	return n+rec_func(n - 1);
//	
//	
//}
