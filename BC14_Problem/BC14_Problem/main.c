#define _CRT_SECURE_NO_DEPRECATE
/*
	@author:liang
	time:2024年3月30日 09点34分
	题目名称：BC14  出生日期输入输出
	题目描述：{输入一个人的出生日期（包括年月日），将该生日中的年、月、日分别输出。
			   数据范围：年份满足1990≤y≤2015 ，月份满足1≤m≤12，日满足1≤d≤30 
		};
	题目链接：https://www.nowcoder.com/ta/beginner-programmers-v1
*/
/*输入描述
	输入只有一行，出生日期，包括年月日，年月日之间的数字没有分隔符。
*/

/*输出描述
	输出三行，第一行为出生年份，第二行为出生月份，第三行为出生日期。
	输出时如果月份或天数为1位数，需要在1位数前面补0。
*/

/*输出示例
	输入：20130225 

输出：year=2013
	  month=02
	  date=25
*/

#include <stdio.h>
int main()
{
	int year, month, date;
	//%d，d前面加数字表示截取到第几位
	scanf("%4d%2d%2d", &year, &month, &date);
	if ((1990 <= year && year <= 2015) && (1 <= month && month <= 12) && (1 <= date && date <= 30))
	{
		//%0d格式控制符，，输出数值时指定左面不使用的空位置自动填0，0后加数字表示输出几位
		//例如:%02d，输出两位，若输出时只有一位，左边空位置自动补0
		printf("year=%d\nmonth=%02d\ndate=%02d\n", year, month, date);
	}
	return 0;
}