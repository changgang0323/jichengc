/*
	ӵ�г����������ӣ��ڽṹ��������typedef����
*/

#include <stdio.h>

#define NAME_LEN	64		/* �������ַ��� */

/*=== ��ʾѧ���Ľṹ�� ===*/
typedef struct student {
	char  name[NAME_LEN];	/* ���� */
	int   height;			/* ��� */
	float weight;			/* ���� */
	long  schols;			/* ��ѧ�� */
} Student;

/*--- ��stdָ���ѧ������߱�Ϊ180cm�����ر�Ϊ80kg ---*/
void hiroko(Student *std)
{
	if (std->height < 180) std->height = 180;
	if (std->weight >  80) std->weight =  80;
}

int main(void)
{
	Student sanaka = {"Sanaka", 175, 62.5, 73000};

	hiroko(&sanaka);

	printf("���� = %s\n",   sanaka.name);
	printf("��� = %d\n",   sanaka.height);
	printf("���� = %.1f\n", sanaka.weight);
	printf("��ѧ�� = %ld\n",  sanaka.schols);

	return 0;
}
