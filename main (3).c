#include <stdio.h>

int main() {
  int num;
  int num1;
  int num2;
  printf("학번 : ");
  scanf("%d %d %d", &num,&num1,&num2);

  if(num2-10<1)
  {
    printf("%d학년 %d반 %d번",num,num1,num2);
  }
  else
 {
    printf("%d학년 %d반 %d번",num,num1,num2);
   }
 return 0;
}