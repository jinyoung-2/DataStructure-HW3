#include<stdio.h>

struct student1 {       //����ü student1 ����
	char lastName;
	int studentId;
	char grade;
};

typedef struct {        //����ü student2 ����
	char lastName;
	int studentId;
	char grade;
}student2;

int main() {
	struct student1 st1 = { 'A',100,'A' };   //����ü student1�� ���� ���� �� �ʱ�ȭ

	printf("[---- - [jinyounglee][2020039063] ---- - ]\n");

	printf("st1.lastName = %c\n", st1.lastName);
	printf("st1.studentId = %d\n", st1.studentId);
	printf("st1.grade = %c\n", st1.grade);

	student2 st2 = { 'b',200,'b' };		//����ü student2�� ���� ���� �� �ʱ�ȭ (typedef�� �����Ͽ�, ���� ����� struct �̿�x)

	printf("\nst2.lastName = %c\n", st2.lastName);
	printf("st2.studentId = %d\n", st2.studentId);
	printf("st2.grade = %c\n", st2.grade);

	student2 st3;		//����ü student2�� ���� ����

	st3 = st2;			//����ü ����  

	printf("\nst3.lastName = %c\n", st3.lastName); //st2.lastName�� ����
	printf("st3.studentId = %d\n", st3.studentId); //st2.studentId�� ����
	printf("st3.grade = %c\n", st3.grade); //st2.grade�� ���� 
}
