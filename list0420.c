/*
	����һ����������ʾ��������*��ѭ������������ָ����
*/

#include <stdio.h>

int main(void)
{
	int retry;

	do {
		int i, no;

		do {
			printf("������һ����������");
			scanf("%d", &no);
			if (no <= 0)
				puts("\a�벻Ҫ�������������");
		} while (no <= 0);
							/* no ��ֵ���ڵ���0 */
		for (i = 1; i <= no; i++)
			putchar('*');
		putchar('\n');

		printf("�Ƿ����ִ�У���Yes��0/No�� 9�� :");
		scanf("%d", &retry);
	} while (retry == 0);

	return 0;
}
