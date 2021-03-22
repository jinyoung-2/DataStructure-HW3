#include <stdio.h>
#include <stdlib.h>

void main()
{
	int list[5];
	int* plist[5] = { null, };  //포인터 배열 선언

	plist[0] = (int*)malloc(sizeof(int));   //plist[0]에 할당된 동적메모리의 주소 저장

	list[0] = 1;
	list[1] = 100;

	*plist[0] = 200;  //포인터 배열 plist[0]이 가리키는 변수의 값을 200으로 할당.

	printf("[---- - [jinyounglee][2020039063] ---- - ]\n");

	/* 배열의 이름은 배열의 시작주소로,
	list,&list,&list[0]을 출력하면, 모두 동일한 주소값이 출력됨.*/
	printf("value of list[0] = %d\n", list[0]);
	printf("address of list[0]            = %p\n", &list[0]);
	printf("value of list                 = %p\n", list);
	printf("address of list (&list)       = %p\n", &list);

	/* list+1은 list[1]을 가리키는 포인터로 list+1,&list[1]은 모두 동일한 주소값을 출력함.
	list[1],*(list+1)은 값이므로, 모두 동일한 값이 출력됨.*/
	printf("--------------------------------------------\n\n");
	printf("value of list[1]    = %d\n", list[1]);
	printf("address of list[1]  = %p\n", &list[1]);
	printf("value of *(list+1)  = %d\n", *(list + 1));
	printf("address of list+1   = %p\n", list + 1);

	/* plist,&plist,&plist[0]은 포인터배열plist의 주소이므로, 모두 동일한 주소값이 출력됨.
	plist[0]은 할당된 동적메모리의 주소가 출력됨
	*plist[0]은 할당된 동적메모리의 값이 출력됨.*/
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

	free(plist[0]);  //동적메모리 할당 해제 
}
