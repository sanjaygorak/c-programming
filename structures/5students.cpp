#include<stdio.h>
struct students
{
	int rollno;
	float marks;
	char name[20]; 	

};


main()
{
  struct students s[5];
  int i;
  for(i = 0; i < 5; i++)
  {
  	printf("enter the details of %d student : \n", i+1);
  	printf("rollno : \n");
  	scanf("%d",&s[i].rollno);
  	printf("marks :  \n");
  	scanf("%f",&s[i].marks);
  	printf("name : \n");
  	scanf("%s",s[i].name);
  }
  for(i = 0; i < 5; i++)
  {
  	printf("\n");
  	printf("\n");
  	printf("\n");
  	printf("\n");
    printf("the details of the %d student \n",i+1);
    printf("rollno : %d\n",s[i].rollno);
    printf("marks : %.2f\n",s[i].marks);
    printf("name : %s\n",s[i].name);
  }
} 
	
