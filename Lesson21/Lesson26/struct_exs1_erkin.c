#include <stdio.h>
#include <string.h>

struct Student
{
    char name[10];
    char surname[10];
    int tartib;
    int Math;
    int English;
    int IT;
    int Russian;
    float average;
};


int main()
{
    struct Student student[4];

    for(int i=0; i<4; i++){
        printf("\nO'quvchi ma'lumotlarini kiriting: \n");
        student[i].tartib = i;
        printf("Ismini kiriting: ");
        scanf("%s", student[i].name);

        printf("Familiyasini kiriting: ");
        scanf("%s", student[i].surname);

        printf("Matematika: ");
        scanf("%d", &student[i].Math);

        printf("English: ");
        scanf("%d", &student[i].English);

        printf("IT: ");
        scanf("%d", &student[i].IT);

        printf("Russian: ");
        scanf("%d", &student[i].Russian);

        student[i].average = (student[i].Math+student[i].English+student[i].IT+student[i].Russian)/4;
    }


    printf("A'lochi o'quvchilar ro'yxati: \n");
    for(int i=0; i<4; i++){
        if(student[i].average>=4.5){
            printf("%s %s %f\n", student[i].name, student[i].surname, student[i].average);
        }
    }
    

    return 0;
}