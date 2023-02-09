#include <stdio.h>

int main(void){
  int num;
  printf("数値を入力してください");
  scanf("%d", &num);
  
  switch (num)
  {
  case 1:
    printf("数字は１です\n");
    break;
  case 2:
    printf("数字は２です\n");
    break;
  case 3:
    printf("数字は3です\n");
    break;
  default:
  printf("バグが発生しています！！！！\n");
  }
}