/*
	����5 ��ѧ���ķ�������ʾ�����ǵ��ֺܷ�ƽ����
*/

#include <stdio.h>

int main(void)
{
	int uchida;			/* ����ͬѧ�ķ��� */
	int satoh;			/* ����ͬѧ�ķ��� */
	int sanaka;			/* ����ͬѧ�ķ��� */
	int hiraki;			/* ƽľͬѧ�ķ��� */
	int masaki;			/* ����ͬѧ�ķ��� */
	int sum = 0;		/* �ܷ� */

	printf("������5 ��ѧ���ķ�����\n");
	printf("1�ţ�");	scanf("%d", &uchida);	sum += uchida;
	printf("2�ţ�");	scanf("%d", &satoh);	sum += satoh;
	printf("3�ţ�");	scanf("%d", &sanaka);	sum += sanaka;
	printf("4�ţ�");	scanf("%d", &hiraki);	sum += hiraki;
	printf("5�ţ�");	scanf("%d", &masaki);	sum += masaki;

	printf("�ܷ֣�%5d\n", sum);
	printf("ƽ���֣�%5.1f\n", (double)sum / 5);

	return 0;
}
