#include <stdio.h>

int main(void){
    int a;
    printf("サイコロの目を入力してください:");
    scanf("%d", &a);

    if (a == 2 || a == 4 || a == 6){
      printf("サイコロの目は偶数です\n");
      
    }
    else if(a == 1 || a== 3 || a== 5){
      printf("サイコロの目は奇数です\n");
    }
    else{
      printf("サイコロは1~6までしか出ませんよ\n");
    }
}
