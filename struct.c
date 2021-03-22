#include<stdio.h>

struct student1 {       //구조체 student1 선언
	char lastName;
	int studentId;
	char grade;
};

typedef struct {        //구조체 student2 선언
	char lastName;
	int studentId;
	char grade;
}student2;

int main() {
	struct student1 st1 = { 'A',100,'A' };   //구조체 student1의 변수 선언 및 초기화

	printf("[---- - [jinyounglee][2020039063] ---- - ]\n");

	printf("st1.lastName = %c\n", st1.lastName);
	printf("st1.studentId = %d\n", st1.studentId);
	printf("st1.grade = %c\n", st1.grade);

	student2 st2 = { 'b',200,'b' };		//구조체 student2의 변수 선언 및 초기화 (typedef로 선언하여, 변수 선언시 struct 이용x)

	printf("\nst2.lastName = %c\n", st2.lastName);
	printf("st2.studentId = %d\n", st2.studentId);
	printf("st2.grade = %c\n", st2.grade);

	student2 st3;		//구조체 student2의 변수 선언

	st3 = st2;			//구조체 대입  

	printf("\nst3.lastName = %c\n", st3.lastName); //st2.lastName과 동일
	printf("st3.studentId = %d\n", st3.studentId); //st2.studentId와 동일
	printf("st3.grade = %c\n", st3.grade); //st2.grade와 동일 
}
