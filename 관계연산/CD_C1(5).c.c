#include <stdio.h>

int main(void) {
  int a;
  printf("세자리수를 입력하시오: \n");
  scanf("%d",&a);
  printf("%d\n",a/100+(a%100)/10+(a%100)%10);
  printf("%d",a/100*(a%100)/10*(a%100)%10);

  return 0;
}