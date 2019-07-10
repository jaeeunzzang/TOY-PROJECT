#include <stdio.h>
#include <stdlib.h>

int msal,result,hsal,day,time;
int total=0;
int h_sal=0;
//전역변수 선언

int mon_sal(int a) //월급 세금계산 함수
{
  result=a*0.045;
  total+=result;
  printf("국민연금 금액 : %d원\n",result);
  
  result=a*0.0323;
  total+=result;
  printf("건강보험 금액 : %d원\n",result);
  
  result=a*0.0065;
  total+=result;
  printf("고용보험 금액 : %d원\n",result);
  
  return total;
}

int hour_sal(int b) //시급 -> 월급 변환 함수
{
  
  printf("이번달에 일한 일 수를 입력해주세요 :\n");
  scanf("%d",&day);
  printf("하루에 일하는 시간을 입력해주세요: \n");
  scanf("%d",&time);
  h_sal=b*time*day;
  
  return h_sal;
}
  

void main()
{
  int num;
  
 while(1) //종료 전 까지 반복
 {
   
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
        
        mon_sal(msal);     
        printf("총 세금: %d원\n\n",total);
        printf("세 후 월급 : %d원\n",msal-total);
        break;
        
      case 2:
        printf("시급을 입력해 주세요 : \n");
        scanf("%d",&hsal);
        
        hour_sal(hsal);
        printf("세 전 월급은 %d 원 입니다.\n",h_sal);
        
        mon_sal(h_sal);
        printf("총 세금: %d원\n\n",total);
        printf("세 후 월급 : %d원\n",h_sal-total);
        break;
        
      case 0:
        printf("종료합니다.");
        exit(0);
        break;
        
      default:
        printf("정확한 숫자를 입력해 주세요\n\n");
        break;
    }
 }
}
        
