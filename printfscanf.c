#include <stdio.h>

int main (void) {
    //상수와 변수에 대해서
    // int age = 12;
    // printf("%d\n", age);
    // age = 13;
    // printf("%d\n", age);
    // printf("1\n");
    // printf("2\n");
    // printf("3\n");

    //실수형 변수에 대한 예제
    // float f = 46.5;
    // printf("%8.2f\n", f);
    // double d = 4.428;
    // printf("%.2lf", d);

    //상수에 대한 예제
    // const int YEAR = 2000;
    // printf("태어난 년도 : %d\n", YEAR);

    //printf에 대한 예제
    // int add = 3 + 7; //10
    // printf("3+7=%d\n",add);
    // printf("%dx%d=%d\n",30,79,30*79);

    //scanf에 대한 예제
    //키보드에 입력을 받아서 저장. python의 input과 동일
    // int input;
    // printf("값을 입력하세요 : ");
    // scanf("%d", &input);
    // printf("입력값 : %d\n", input);
    // int one, two, three;
    // printf("3개의 정수를 입력하세요 : ");
    // scanf("%d %d %d", &one, &two, &three);
    // printf("첫번째 값 : %d\n", one);
    // printf("두번째 값 : %d\n", two);
    // printf("세번째 값 : %d\n", three);

    // char c = 'A';
    // printf("%c\n", c);

    // char str[256];
    // printf("문자를 입력하세요. : ");
    // scanf("%s", str);
    // printf("입력하신 문자 : %s\n", str);

    //프로젝트
    //경찰관이 범죄자의 정보를 입수 (조서 작성)
    //이름? 나이? 몸무게? 키? 범죄명?

    char name[256]; // array.c 공부하다가 넘어옴 (20210205) 여기에 나온 []안의 숫자는 출력 가능한 문자의 크기를 얘기한다.
    int age;
    float weight;
    int height;
    char crime[256];

    printf("이름이 어떻게 되시나요? : ");
    scanf("%s", name);
    printf("나이가 어떻게 되시나요? : ");
    scanf("%d", &age);
    printf("몸무게가 어떻게 되시나요? (소수점 첫째자리까지 적어주세요.) : ");
    scanf("%f", &weight);
    printf("키가 어떻게 되시나요? : ");
    scanf("%d", &height);
    printf("어떤 범죄를 저지르셨나요? : ");
    scanf("%s", crime);
    printf("\n\n[조서]\n이름 : %s\n나이 : %d살\n몸무게 : %.1f\n키 : %d\n혐의 : %s\n", name, age, weight, height, crime);

    return 0;
}