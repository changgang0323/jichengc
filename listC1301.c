/*
	��ʾ��ǰ���ں�ʱ��
*/

#include <time.h>
#include <stdio.h>

int main()
{
	time_t current = time(NULL);				/* ��ǰ����ʱ�� */
	struct tm *timer = localtime(&current);		/* �ֽ�ʱ�䣨����ʱ�䣩*/
	char *wday_name[] = {"��", "һ", "��", "��", "��", "��", "��"};

	printf("��ǰ���ں�ʱ��Ϊ%d��%d��%d��(%s)%dʱ%d��%d�롣\n",
			timer->tm_year + 1900,			/* �꣨��1900�������*/
			timer->tm_mon + 1,				/* �£���1�������*/
			timer->tm_mday,					/* �� */
			wday_name[timer->tm_wday],		/* ���ڣ�0-6��*/
			timer->tm_hour,					/* ʱ */
			timer->tm_min,					/* �� */
			timer->tm_sec					/* �� */
		  );
	return 0;
}
