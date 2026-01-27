//#include <stdio.h>
//
//int main(void)
//{
//	int a;
//	int* pa;
//
//	pa = &a;
//	*pa = 10;
//
//	printf("포인터로 a 값 출력: %d\n", *pa);
//	printf("변수명으로 a 값 출력 : %d\n", a);
//
//	return 0;
//}

//#include<stdio.h>
//
//int main(void)
//{
//	int a = 10, b = 15, total;
//	double avg;
//	int *pa, *pb;
//	int *pt = &total;
//	double *pg = &avg;
//
//	pa = &a; pb = &b;
//
//	*pt = *pa + *pb;
//	*pg = *pt / 2.0;
//
//	printf("두 정수의 값: %d, %d\n", *pa,*pb);
//	printf("두 정수의 합 : %d\n,", *pt);
//	printf("두 정수의 평균 : %1lf\n", *pg);
//	
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int a = 10, b = 20;
//	const int* pa = &a;
//
//	printf("변수 a값 : %d\n", *pa);
//	pa = &b;
//	printf("변수 b 값 : %d\n", *pa);
//	pa = &a;
//	a = 20;
//	printf("변수 a 값 : %d\n", *pa);
//
//	return 0;
//}