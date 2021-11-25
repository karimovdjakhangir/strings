// self-study, exs 1

#include <stdio.h>
#include <string.h>

struct student {
    
    int order;
    char name[100];
    float gpa;
    };

    struct marks {
    int q1, q2, q3, q4;
};


int main(){

    struct student rank1;
    struct marks m1={.q1=5, .q2=5, .q3=4, .q4=5};
    float gpa1=(m1.q1+m1.q2+m1.q3+m1.q4)/4;
    rank1.order=1;
    strcpy(rank1.name,"Abdullaev Dilshod");
    rank1.gpa=gpa1;
    if (rank1.gpa>=5){
    printf("#: %d\n", rank1.order);
    printf("Student name: %s\n", rank1.name);
    printf("GPA:%.2f\n", rank1.gpa);
    }

    struct student rank2;
    struct marks m2={.q1=3, .q2=3, .q3=3, .q4=3};
    float gpa2=(m2.q1+m2.q2+m2.q3+m2.q4)/4;
    rank2.order=2;
    strcpy(rank2.name,"Abdurahimov Nemat");
    rank2.gpa=gpa2;
    if (rank2.gpa>=5){
    printf("#: %d\n", rank2.order);
    printf("Student name: %s\n", rank2.name);
    printf("GPA:%.2f\n", rank2.gpa);
    }

struct student rank3;
    struct marks m3={.q1=5, .q2=5, .q3=4, .q4=5};
    float gpa3=(m3.q1+m3.q2+m3.q3+m3.q4)/4;
    rank3.order=3;
    strcpy(rank3.name,"Rejepova Dilbar");
    rank3.gpa=gpa3;
    if (rank3.gpa>=5){
    printf("#: %d\n", rank3.order);
    printf("Student name: %s\n", rank3.name);
    printf("GPA:%.2f\n", rank3.gpa);
    }

struct student rank4;
    struct marks m4={.q1=5, .q2=5, .q3=4, .q4=5};
    float gpa4=(m4.q1+m4.q2+m4.q3+m4.q4)/4;
    rank4.order=4;
    strcpy(rank4.name,"Karimova Hafiza");
    rank4.gpa=gpa4;
    if (rank4.gpa>=5){
    printf("#: %d\n", rank4.order);
    printf("Student name: %s\n", rank4.name);
    printf("GPA:%.2f\n", rank4.gpa);
    }

    printf("\n\n");
    
    return 0;
}