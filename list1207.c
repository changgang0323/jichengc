/*
	��5��ѧ������߰���������
*/

#include <stdio.h>
#include <string.h>

#define NUMBER		5		/* ѧ������ */
#define NAME_LEN	64		/* �������ַ��� */

/*=== ��ʾѧ���Ľṹ�� ===*/
typedef struct {
	char  name[NAME_LEN];	/* ���� */
	int   height;			/* ��� */
	float weight;			/* ���� */
	long  schols;			/* ��ѧ�� */
} Student;

/*--- ��x��yָ���ѧ�����н��� ---*/
void swap_Student(Student *x, Student *y)
{
	Student temp = *x;
	*x = *y;
	*y = temp;
}

/*--- ��ѧ������a��ǰn��Ԫ�ذ���߽����������� ---*/
void sort_by_height(Student a[], int n)
{
	int i, j;

	for (i = 0; i < n - 1; i++) {
		for (j = n - 1; j > i; j--)
			if (a[j - 1].height > a[j].height)
				swap_Student(&a[j - 1], &a[j]);
	}
}

int main(void)
{
	int i;
	Student std[] = {
		{ "Sato",   178, 61.2, 80000},	/* ���� */
		{ "Sanaka", 175, 62.5, 73000},	/* ���� */
		{ "Takao",  173, 86.2, 0},		/* ��β */
		{ "Mike",   165, 72.3, 70000},	/* ƽľ */
		{ "Masaki", 179, 77.5, 70000},	/* ���� */
	};

	for (i = 0; i < NUMBER; i++)
		printf("%-8s %6d%6.1f%7ld\n",
			std[i].name, std[i].height, std[i].weight, std[i].schols);

	sort_by_height(std, NUMBER);	/* ����߽����������� */

	puts("\n���������");
	for (i = 0; i < NUMBER; i++)
		printf("%-8s %6d%6.1f%7ld\n",
			std[i].name, std[i].height, std[i].weight, std[i].schols);

	return 0;
}
