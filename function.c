#include <stdio.h>

// 함수 선언
void p(int num);
void function_without_return();
int function_with_return();
void function_without_parameters();
void function_with_parameters(int num1, int num2, int num3);
int function_with_retparams(int total, int ate);



int main (void)
{
    // function, 계산기
    int num = 2;
    // printf("num 은 %d 입니다.\n", num);
    p(num);

    // 2+3은?
    num = num + 3;
    // printf("num 은 %d 입니다.\n", num);
    p(num);

    // 5-1은?
    num = num - 1;
    // printf("num 은 %d 입니다.\n", num);
    p(num);

    // 4x3은?
    num = num * 3;
    // printf("num 은 %d 입니다.\n", num);
    p(num);
    
    // 12/6은?
    num = num / 6;
    // printf("num 은 %d 입니다.\n", num);
    p(num);

    function_without_return();
    int ret = function_with_return();
    p(ret);
    function_without_parameters();
    function_with_parameters(35, 27, 31);
    int rett = function_with_retparams(5, 2);
    printf("사과 5개 중에 2개를 먹으면 %d 개가 남아요.\n", rett);

    // 그러나 위 방법은 너무 귀찮고 코드가 너무 길어진다.
    return 0;
}

// 함수 정의
void p (int num) // p는 이름, int num은 전달값.
{
    printf("num 은 %d 입니다.\n", num);
}

// 전달값 : 66
// 함수 : ㅁ + 4
// 출력값(반환형) : ?
// 반환형 함수이름(전달값)
// void 함수이름 (int num, int num2, char c, float f)
// {
    
// }

// 함수 종류 - 반환값이 없는 함수(void 함수), 반환값이 있는 함수, 전달값이 없는 함수, 전달값이 있는 함수, 반환값과 전달값이 있는 함수
void function_without_return()
{
    printf("반환값이 없는 함수입니다.\n");
}
int function_with_return()
{
    printf("반환값이 있는 함수입니다.\n");
    return 10;
}
void function_without_parameters()
{
    printf("전달값이 없는 함수입니다.\n");
}
void function_with_parameters(int num1, int num2, int num3)
{
    printf("전달값이 있는 함수입니다. 전달받은 값은 %d, %d, %d 입니다.\n", num1, num2, num3);
}
int function_with_retparams(int total, int ate)
{
    printf("전달값과 반환값이 있는 함수입니다.\n");
    return total - ate;
}