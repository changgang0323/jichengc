/*
	��ʾ������һ������ʱ�����ں�ʱ��
*/

#include <time.h>
#include <stdio.h>

char data_file[] = "datetime.dat";				/* �ļ��� */

/*--- ȡ�ò���ʾ��һ������ʱ�����ں�ʱ�� ---*/
void get_data(void)
{
	FILE *fp;

	if ((fp = fopen(data_file, "r")) == NULL)				/* ���ļ� */
		printf("�������һ�����С�\n");
	else {
		int year, month, day, h, m, s;

		fscanf(fp, "%d%d%d%d%d%d", &year, &month, &day, &h, &m, &s);
		printf("��һ����������%d��%d��%d��%dʱ%d��%d�롣\n",
										year, month, day, h, m, s);
		fclose(fp);											/* �ر��ļ� */
	}
}

/*--- д�뱾������ʱ�����ں�ʱ�� ---*/
void put_data(void)
{
	FILE *fp;
	time_t current = time(NULL);				/* ��ǰ����ʱ�� */
	struct tm *timer = localtime(&current);		/* �ֽ�ʱ��*/

	if ((fp = fopen(data_file, "w")) == NULL)				/* ���ļ� */
		printf("\a�ļ���ʧ�ܡ�\n");
	else {
		fprintf(fp, "%d %d %d %d %d %d\n",
				timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday,
				timer->tm_hour,		   timer->tm_min,	  timer->tm_sec);
		fclose(fp);											/* �ر��ļ� */
	}
}

int main(void)
{
	get_data();			/* ȡ�ò���ʾ��һ������ʱ�����ں�ʱ�� */

	put_data();			/* д�뱾������ʱ�����ں�ʱ�� */

	return 0;
}
