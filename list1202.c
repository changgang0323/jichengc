/*
	�ñ�ʾѧ���Ľṹ������ʾ���е���Ϣ
*/

#include <stdio.h>
#include <string.h>

#define NAME_LEN	64		/* �������ַ��� */

/*=== ��ʾѧ���Ľṹ�� ===*/
struct student {
	char  name[NAME_LEN];	/* ���� */
	int   height;			/* ��� */
	float weight;			/* ���� */
	long  schols;			/* ��ѧ�� */
};

int main(void)
{
	struct student sanaka;

	strcpy(sanaka.name, "Sanaka");	/* ���� */
	sanaka.height = 175;			/* ��� */
	sanaka.weight = 62.5;			/* ���� */
	sanaka.schols = 73000;			/* ��ѧ�� */

	printf("���� = %s\n",   sanaka.name);
	printf("��� = %d\n",   sanaka.height);
	printf("���� = %.1f\n", sanaka.weight);
	printf("��ѧ�� = %ld\n",  sanaka.schols);

	return 0;
}
