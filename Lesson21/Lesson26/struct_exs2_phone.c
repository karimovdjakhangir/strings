#include <stdio.h>
#include <string.h>

struct employee
{
     int id;
     char name[50];
     char surname[50];
     char number[100];
};

int main()
{
     int i;
     char surname[50];
     struct employee record[2];

     // 1st employee's record
     record[0].id = 1;
     strcpy(record[0].name, "Aziz");
     strcpy(record[0].surname, "Abdullaev");
     strcpy(record[0].number, "998992058693");

     // 2nd employee's record
     record[1].id = 2;
     strcpy(record[1].name, "Jahongir");
     strcpy(record[1].surname, "Karimov");
     strcpy(record[1].number, "998901287945");

     // 3rd employee's record
     record[2].id = 3;
     strcpy(record[2].name, "Sarvar");
     strcpy(record[2].surname, "Zahidov");
     strcpy(record[2].number, "998914578212");

     printf("Enter surname of employee: \n");
     scanf("%s", &surname);

     for (i = 0; i < 3; i++)
     {
          if (surname == record[i].surname)
          {

               printf(" Name: %s \n", record[i].surname);
               printf(" Phone number of %s is: %s\n\n", record[i].surname, record[i].number);
          }
     }
     return 0;
}