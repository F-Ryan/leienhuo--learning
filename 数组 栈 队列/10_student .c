#include <stdio.h>
#include <malloc.h> 

struct student{
	int sid;
	int age;
}; 
struct student *CreatStudent(void){
	
	struct student *pst = (struct student *)malloc(sizeof(struct student));
	pst->sid = 99;
	pst->age = 88;
}
void ShowStudent(struct student *p)
{
	printf("%d %d\n",p->sid ,p->age );
	
}
int main (){
	
	struct student *ps ;
	ps = CreatStudent();
	ShowStudent(ps);
	
	return 0;
	
}
