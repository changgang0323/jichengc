/*
	���ļ�д����������ʱ�����ں�ʱ��
*/

#include <time.h>
#include <stdio.h>

int main(void)
{
	FILE *fp;
	time_t current = time(NULL);				/* ��ǰ����ʱ�� */
	struct tm *timer = localtime(&current);		/* �ֽ�ʱ�䣨����ʱ�䣩*/

	if ((fp = fopen("dt_dat", "w")) == NULL)				/* ���ļ� */
		printf("\a�ļ���ʧ�ܡ�\n");
	else {
		printf("д����ǰ���ں�ʱ�䡣\n");
		fprintf(fp, "%d %d %d %d %d %d\n",
			timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday,
			timer->tm_hour,		   timer->tm_min,	  timer->tm_sec  );
		fclose(fp);											/* �ر��ļ� */
	}

	return 0;
}
