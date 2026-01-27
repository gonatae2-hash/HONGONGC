// 1-5 문제
// 다음의 main함수와 실행결과를 참고하여 함수를 추가하고 프로그램을 완성합니다.
// ```c
// int main(void)
// {
//     int sel;
// 
//     sel = disp_menu();
//     printf(""선택된 메뉴는 % d번 입니다. \n"", sel);
//
//     return 0;
// }
// ```
//
// # 실행결과 #
// 1. 볶음짬뽕
// 2. 콩나물국밥
// 3. 바지락칼국수
//
// #메뉴를 선택하세요 : 2 (Enter)
// 선택된 메뉴는 2번입니다. "


//#include <stdio.h>
//
//int disp_menu();
//
// int main(void)
// {
//     int sel;
// 
//     sel = disp_menu();
//     if ((sel > 0) && (sel < 4))
//     {
//         printf("선택된 메뉴는 %d번 입니다. \n", sel);     // disp_menu 함수를 통해 1~3까지 나왔을때 출력
//     }
//     else
//     {
//         printf("%d번 메뉴는 없는 메뉴입니다.\n", sel);    // disp_menu 함수를 통해 1~3이외일 때 출력
//     }
//     return 0;
// }
//int disp_menu()
//{
//    int i=0;
//    printf("1.볶음짬뽕\n2.콩나물국밥\n3.바지락칼국수\n");
//    printf("메뉴를 선택하세요 :");
//    scanf("%d", &i);
//    if  (i == 1)
//    {
//        return 1;
//    }
//    else if (i == 2)
//    {
//        return 2;
//    }
//    else if (i == 3)
//    {
//        return 3;
//    }
//    else
//    {
//        return i;
//    }
//}