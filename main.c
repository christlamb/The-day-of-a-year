#include <stdio.h>
int year,month,day,days;
int shuzu[12]={0,31,59,90,120,151,181,212,243,273,304,334};
int shuzu_2[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
	printf("请输入年、月、日：\n");
	while(1==1)//主循环 
	{
		scanf("%d%d%d",&year,&month,&day);//输入年、月、日 
		
	    if(month>12||month<1||shuzu_2[month-1]<day||day<1)//判断是否符合逻辑 
		{
			printf("错误，请重试\n");
		}

		else
		{	
			if(year%4==0&&year%100!=0||year%400==0)//判断是否为闰年 
			{
				if(month<3)
				{
					days=shuzu[month-1]+day;
					printf("第%d天\n",days);
				}
				else
				{
					days=shuzu[month-1]+day+1;
					printf("第%d天\n",days);
				}
			}
			else
			{
				days=shuzu[month-1]+day;
				printf("第%d天\n",days);
			}		
		}
	}
	return 0;
} 
