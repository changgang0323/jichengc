/*
	�ñ�ʾѧ���Ľṹ������ʾ��β����Ϣ
*/

#include <stdio.h>

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
	struct student takao = {"Takao", 173, 86.2};

	printf("���� = %s\n",   takao.name);
	printf("��� = %d\n",   takao.height);
	printf("���� = %.1f\n", takao.weight);
	printf("��ѧ�� = %ld\n",  takao.schols);

	return 0;
}
