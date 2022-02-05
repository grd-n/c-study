#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (void) {
    
    //// 버스를 탄다고 가정. 학생 / 일반인으로 구분 (일반인 : 20세)
    //if (조건) {...} else {...}
    // int age = 25;
    // if (age >= 20) {
    //     printf("일반인 입니다.\n");
    // }
    // else {
    //     printf("학생입니다.\n");
    // }

    //// else if의 등장. 파이썬의 elif와 같은 역할
    // int age = 40;
    // if (age >= 8 && age <=13) {
    //     printf("초등학생입니다.\n");
    // }
    // else if (age >= 14 && age <= 16) {
    //     printf("중학생입니다.\n");
    // }
    // else if (age > 17 && age <= 19) {
    //     printf("고등학생입니다.\n");
    // }
    // else {
    //     printf("학생이 아닌가봐요.\n");
    // }

    //// break/continue
    //// 1번부터 30번까지 있는 반에서 1번에서 5번까지 조별발표를 합니다.
    // for (int i = 1; i <= 30; i++) {
    //     if (i>=6) {
    //         printf("나머지 학생은 집에 가세요\n");
    //         break;
    //     }
    //     printf("%d번 학생은 조별 발표를 준비하세요.\n", i);
    // }

    //// 1번부터 30번까지 있는 반에서 7번 학생은 아파서 결석
    //// 7번을 제외하고 6번부터 10번까지 조별 발표를 하세요.
    // for (int i = 1; i <= 30; i++) 
    // {
    //     if (i >= 6 && i <= 10)
    //     {
    //         if (i == 7)
    //         {
    //             printf("%d번 학생은 결석입니다.\n", i);
    //             continue;
    //         }
    //         printf("%d번 학생은 조별 발표 준비를 하세요.\n", i);
    //     }
    // }

    //// && ||
    // int a = 10;
    // int b = 11;
    // int c = 13;
    // int d = 13;

    // if (a == b || c == d)
    // {
    //     printf("a 와 b, 혹은 c 와 d 의 값이 같습니다.\n");
    // }
    // else
    // {
    //     printf("값이 서로 다르네요.\n");
    // }

    //// 랜덤
    //// 처음에 #include <time.h> 추가할 것. 만약 이래도 안되면 #include <stlib.h> 도 추가해주면 된다.
    //// int num = rand() % 어떤 수; 여기서 어떤 수는 뽑고싶은 숫자의 범위를 말한다.
    //// srand(time(NULL)); 난수 초기화. 이걸 하지 않으면 랜덤으로 뽑은 숫자 셋트가 계속 반복해서 나온다.
    //// int num1 = rand() % 4; //0~3까지의 범위
    //// int num2 = rand() % 3 + 1; //1~3까지의 범위

    // printf("난수 초기화 이전\n");
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d ", rand() % 10); // 변수 선언 과정이 아니기 때문에 10 뒤에 ; 안붙임. 위 변수 선언 과정과 다른 이유.
    // }

    // srand(time(NULL));
    // printf("\n\n난수 초기화 이후\n");
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d ", rand() % 10);
    // }

    //// 아래 결과는 바로 위 코드에 의한 출력물.
    /*
    난수 초기화 이전
    7 9 3 8 0 2 4 8 3 9 

    난수 초기화 이후
    5 0 2 9 7 5 5 8 9 0
    */

    /*
    난수 초기화 이전
    7 9 3 8 0 2 4 8 3 9 

    난수 초기화 이후
    9 1 4 8 0 2 3 0 8 4
    */

    // 가위바위보
    // srand(time(NULL));
    // int i = rand() % 100;
    // if (i==0)
    // {
    //     printf("가위\n");
    // }
    // else if (i==1)
    // {
    //     printf("바위\n");
    // }
    // else if (i==2)
    // {
    //     printf("보\n");
    // }
    // else
    // {
    //     printf("몰라요\n");
    // }
    
    // switch case 사용
    // srand(time(NULL));
    // int i = rand() % 3;
    // switch (i)
    // {
    // case 0:printf("가위\n"); break; // case 구문 뒤에 break 붙여주지 않으면 실행된 문장 아래는 조건을 알아보지도 않고 무조건 실행되기에 break를 꼭 뒤에 붙여야 한다.
    // case 1:printf("바위\n"); break; // ex) 만약 i 가 1이 나온 경우, 가위는 출력이 안되지만 바위가 출력되고, 바위 아래 보 및 몰라요는 조건에 상관없이 무조건 실행된다는 말.
    // case 2:printf("보\n"); break; // 따라서 실행된 뒤에는 break를 통해 빠져나갈 수 있도록 코드를 짜주는 것이다.
    // default:printf("몰라요\n"); break;
    // }
    // srand(time(NULL));
    // int age = rand() % 20 + 1;
    // printf("%d\n", age);
    // switch (age)
    // {
    // case 1:
    // case 2:
    // case 3:
    // case 4:
    // case 5:
    // case 6:
    // case 7:printf("학생이 아닌가봐요.\n"); break;
    // case 8:
    // case 9:
    // case 10:
    // case 11:
    // case 12:
    // case 13:printf("초등학생입니다.\n"); break;
    // case 14:
    // case 15:
    // case 16:printf("중학생입니다.\n"); break;
    // case 17:
    // case 18:
    // case 19:printf("고등학생입니다.\n"); break;
    // default:printf("학생이 아닌가봐요.\n"); break;
    // }

    // Up and Down
    srand(time(NULL));
    int i = rand() % 100+1;
    printf("정답은 %d\n", i);
    int answer = 0;
    int chance = 5;
    while (chance > 0)
    {
        printf("남은 기회 %d 번.\n", chance--);
        printf("숫자를 맞춰보세요. (1~100) : ");
        scanf("%d", &answer);
        if (chance == 0)
        {
            printf("모든 기회를 다 사용하셨네요. 아쉽게 실패했습니다.\n\n");
            break;
        }
        if (answer > i)
        {
            printf("Down.\n\n");
        }
        else if (answer < i)
        {
            printf("Up.\n\n");
        }
        else if (answer == i)
        {
            printf("정답입니다!\n\n");
            break;
        }
        else
        {
            printf("알 수 없는 오류가 발생했어요.\n\n");
        }
        
    }
    


    return 0;
}