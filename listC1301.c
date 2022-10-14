/*
	显示当前日期和时间
*/

#include <time.h>
#include <stdio.h>

int main()
{
	time_t current = time(NULL);				/* 当前日历时间 */
	struct tm *timer = localtime(&current);		/* 分解时间（当地时间）*/
	char *wday_name[] = {"日", "一", "二", "三", "四", "五", "六"};

	printf("当前日期和时间为%d年%d月%d日(%s)%d时%d分%d秒。\n",
			timer->tm_year + 1900,			/* 年（加1900后求出）*/
			timer->tm_mon + 1,				/* 月（加1后求出）*/
			timer->tm_mday,					/* 日 */
			wday_name[timer->tm_wday],		/* 星期（0-6）*/
			timer->tm_hour,					/* 时 */
			timer->tm_min,					/* 分 */
			timer->tm_sec					/* 秒 */
		  );
	return 0;
}
