//#include <stdio.h>
//
//int main(void)
//{
//	char str1[80], str2[80];
//	char temp[80];
//
//	printf("두 문자열 입력 : ");
//	scanf("%s%s", str1, str2);
//	printf("바꾸기 전 : %s, %s\n", str1, str2);
//	strcpy(temp, str2);
//	strcpy(str2, str1);
//	strcpy(str1, temp);
//	printf("바꾼 후 : %s,%s\n",str1, str2);
//	
//	return 0;
//
//}

//#include <stdio.h>
//
//int main(void)
//{
//	char str[80];
//	int cnt = 0;
//	int i;
//
//	printf("문장 입력:");
//	gets(str);
//
//	for (i = 0; str[i] != '\0'; i++)
//	{
//		if ((str[i] >= 'A') && (str[i] <= 'Z'))
//		{
//		str[i] += ('a' - 'A');
//		cnt++;
//		}
//	}
//	printf("바뀐 문자:");
//	puts(str);
//	printf("바뀐 문자: 수 %d\n", cnt);
//
//	return 0;
//}