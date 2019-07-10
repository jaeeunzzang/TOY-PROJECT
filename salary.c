#include <stdio.h>
#include <stdlib.h>


double mon_sal1(double a)
{
  double result;
  
  result=a*0.045;
  return result;
}

double mon_sal2(double b)
{
  double result;
  result=b*0.0323;
  return result;
}

double mon_sal3(double c)
{
  double result;
  result=c*0.0065;
  return result;
}




void main()
{
  int num,msal,hsal,;
  
  printf("*** 세 후 월급 계산 프로그램 ***\n\n");
  printf("1.월급으로 계산\n");
  printf("2.시급으로 계산\n");
  printf("0.종료");
  scanf("%d",&num);
    
    
    switch(num)
    {
      case 1:
        printf("세전 월급을 입력해주세요 :\n");
        scanf("%d",&msal);
        mon_sal1(msal);
        printf("국민연금 납부 후 금액 : %.0lf",msal);
        mon_sal2(msal);
        printf("건강보험 납부 후 금액 : %.0lf",msal);
        mon_sal3(msal);
        printf("고용보험 납부 후 금액 : %.0lf",msal);
        
