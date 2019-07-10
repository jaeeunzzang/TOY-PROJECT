#include <stdio.h>
#include <stdlib.h>

int msal,result,hsal,day,time;
int total=0;

int mon_sal1(int a)
{
  
  result=a*0.045;
  total+=result;
  return result;
}

int mon_sal2(int b)
{
  result=b*0.0323;
  total+=result;
  return result;
}

int mon_sal3(int c)
{
  result=c*0.0065;
  total+=result;
  return result;
}

int hour_sal(int d)
{
  printf("이번달에 일한 일 수를 입력해주세요 :\n");
  scanf("%d",&day);
  printf("하루에 일하는 시간을 입력해주세요: \n");
  scanf("%d",&time);
  
         
  


int main(void)
{
  int num,hsal;
  
  printf("*** 세 후 월급 계산 프로그램 ***\n\n");
  printf("1.월급으로 계산\n");
  printf("2.시급으로 계산\n");
  printf("0.종료\n\n");
  scanf("%d",&num);
    
    
    switch(num)
    {
      case 1:
        printf("세전 월급을 입력해주세요 :\n");
        scanf("%d",&msal);
        
        mon_sal1(msal);
        printf("국민연금 금액 : %d\n",result);
        mon_sal2(msal);
        printf("건강보험 납부 후 금액 : %d\n",result);
        mon_sal3(msal);
        printf("고용보험 납부 후 금액 : %d\n",result);
        printf("총 세금: %d\n\n",total);
        printf("세 후 월급 : %d원\n",msal-total);
        break;
        
      case 2:
        printf("시급을 입력해 주세요 : ");
        scanf("%d",&hsal);
        
        hour_sal(hsal);
    }
}
        
