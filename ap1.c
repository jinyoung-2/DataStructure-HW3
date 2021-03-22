#include <stdio.h>
#include <stdlib.h>

void main()
{
	int list[5];
	int* plist[5] = { null, };  //������ �迭 ����

	plist[0] = (int*)malloc(sizeof(int));   //plist[0]�� �Ҵ�� �����޸��� �ּ� ����

	list[0] = 1;
	list[1] = 100;

	*plist[0] = 200;  //������ �迭 plist[0]�� ����Ű�� ������ ���� 200���� �Ҵ�.

	printf("[---- - [jinyounglee][2020039063] ---- - ]\n");

	/* �迭�� �̸��� �迭�� �����ּҷ�,
	list,&list,&list[0]�� ����ϸ�, ��� ������ �ּҰ��� ��µ�.*/
	printf("value of list[0] = %d\n", list[0]);
	printf("address of list[0]            = %p\n", &list[0]);
	printf("value of list                 = %p\n", list);
	printf("address of list (&list)       = %p\n", &list);

	/* list+1�� list[1]�� ����Ű�� �����ͷ� list+1,&list[1]�� ��� ������ �ּҰ��� �����.
	list[1],*(list+1)�� ���̹Ƿ�, ��� ������ ���� ��µ�.*/
	printf("--------------------------------------------\n\n");
	printf("value of list[1]    = %d\n", list[1]);
	printf("address of list[1]  = %p\n", &list[1]);
	printf("value of *(list+1)  = %d\n", *(list + 1));
	printf("address of list+1   = %p\n", list + 1);

	/* plist,&plist,&plist[0]�� �����͹迭plist�� �ּ��̹Ƿ�, ��� ������ �ּҰ��� ��µ�.
	plist[0]�� �Ҵ�� �����޸��� �ּҰ� ��µ�
	*plist[0]�� �Ҵ�� �����޸��� ���� ��µ�.*/
	printf("--------------------------------------------\n\n");
	printf("value of *plist[0]  = %d\n", *plist[0]);
	printf("&plist[0]           = %p\n", &plist[0]);
	printf("&plist              = %p\n", &plist);
	printf("plist               = %p\n", plist);
	printf("plist[0]            = %p\n", plist[0]);
	printf("plist[1]            = %p\n", plist[1]);
	printf("plist[2]            = %p\n", plist[2]);
	printf("plist[3]            = %p\n", plist[3]);
	printf("plist[4]            = %p\n", plist[4]);

	free(plist[0]);  //�����޸� �Ҵ� ���� 
}
