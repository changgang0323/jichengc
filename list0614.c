/*
	˳����ң��ڱ����ҷ���
*/

#include <stdio.h>

#define NUMBER		5		/* Ԫ�ظ���*/
#define FAILED		-1		/* ����ʧ�� */

/*--- ��Ԫ�ظ���Ϊn������v�в��Һ�keyһ�µ�Ԫ�أ��ڱ����ҷ���---*/
int search(int v[], int key, int n)
{
	int i = 0;

	v[n] = key;		/* ����ڱ� */

	while (1) {
		if (v[i] == key)
			break;			/* ���ҳɹ� */
		i++;
	}
	return (i < n) ? i : FAILED;
}

int main(void)
{
	int i, ky, idx;
	int vx[NUMBER + 1];

	for (i = 0; i < NUMBER; i++) {
		printf("vx[%d]��", i);
		scanf("%d", &vx[i]);
	}
	printf("Ҫ���ҵ�ֵ��");
	scanf("%d", &ky);

	if ((idx = search(vx, ky, NUMBER)) == FAILED)
		puts("\a����ʧ�ܡ�");
	else
		printf("%d������ĵ�%d��Ԫ�ء�\n", ky, idx + 1);

	return 0;
}
