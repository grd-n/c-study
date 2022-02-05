#include <stdio.h>

void p ();

int main (void)
{
    // 배열
    // int subway_1 = 30;
    // int subway_2 = 40;
    // int subway_3 = 50;
    
    // printf("지하철 1호차에 %d명이 타고있습니다.\n", subway_1);
    // printf("지하철 2호차에 %d명이 타고있습니다.\n", subway_2);
    // printf("지하철 3호차에 %d명이 타고있습니다.\n", subway_3);
    // 위 방법처럼 일일히 적으면 호차가 늘어날 수록 코드의 비효율 증가. 이 때 필요한 것이 바로 배열.

    // 여러 개의 변수를 함께, 동시에 생성.
    // int subway_array[3]; // [0][1][2]
    // subway_array[0] = 30;
    // subway_array[1] = 40;
    // subway_array[2] = 50;

    // for (int i = 0; i < 3; i++)
    // {
    //     printf("지하철 %d호차에 %d명이 타고있습니다.\n", i+1, subway_array[i]);
    // }

    // 값 설정 방법
    // int arr[10] = {1,2,3,4,5,6,7,8,9,10}; // 중괄호 안에 들어간 순서대로 배열에 할당됨. 중괄호 입력 안해주면 오류. []안에도 문자가 아닌 항상 상수로 선언할 것.
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d\n", arr[i]);
    // }

    // 상수가 아닌 변수로 설정한 경우 오류.
    // int size = 10;
    // int arr[size];

    // int arr[10] = {1,2}; // 3번째 값부터 '0'으로 초기화 됨. 위 예시처럼 아무것도 설정하지 않으면 오류가 나지만, 하나라도 설정하면 그 뒤는 '0'으로 초기화 되는 듯.
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d\n", arr[i]);
    // }

    // int arr[] = {1,2}; // 이 경우는 배열 크기를 따로 설정해주지 않았지만, 뒤 요소들 갯수에 맞춰 자동으로 배열 크기가 결정된다.

    // float arr_f[5] = {1.0f,2.0,3.0f};
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%.2f\n", arr_f[i]);
    // }

    // 문자 vs 문자열
    // char c = 'A';
    // printf("%c\n", c);

    // 문자열 끝에는 끝을 의미하는 NULL문자 '₩0'가 포함되어야함.
    // char str[6] = "coding";
    // char str[7] = "coding";
    // printf("%s\n", str);

    // char str[] = "coding";
    // printf("%s\n", str);
    // printf("%d\n", sizeof(str)); // 이것이 출력되는 결과를 보면 알겠지만, [c][o][d][i][n][g]뒤에 NULL문자[₩0]이 있음을 알 수 있다.

    // for (int i = 0; i < sizeof(str); i++)
    // {
    //     printf("%c\n", str[i]); // 이것을 통해서도 널문자의 존재를 확인할 수 있다.
    // }

    // char kor[] = "나도코딩";
    // printf("%s\n", kor);
    // printf("%d\n", sizeof(kor));
    // 위 예시를 보면 알겠지만, 영어 한글자는 1바이트인데 반해, 한글 1글자는 더 많은 용량을 필요로한다.

    // char c_array[6] = "coding";
    // for (int i = 0; i < sizeof(c_array); i++)
    // {
    //     printf("%d\n", c_array[i]); // ASCII 코드!
    // }

    // 참고 : ASCII 코드는 ANSI (미국 표준 협회) 에서 제시한 표준 코드 체계
    // 7bit, 총 128개 코드 (0-127)
    // a : 97 (문자 a 의 아스키코드 정수값)
    // A : 65
    // O : 48

    // printf("%c\n", 'a'); // 0
    // printf("%d\n", '0'); // 48

    for (int i = 0; i < 128; i++)
    {
        printf("각 문자별 아스키코드 %d : %c\n", i, i);
    }

    return 0;
}