#include <stdio.h>
#include <string.h>

struct Notebook {
    int id;
    char name[20];
    int page_num;
    char color[20];
    float price;
};

int main(){

    struct Notebook notebook1;
    notebook1.id=1340;
    notebook1.price=3000.8;
    notebook1.page_num=95;
    strcpy(notebook1.name,"Mcqueen lightning");
    strcpy(notebook1.color, "red");

    printf("Id number of the notebook: %d\n", notebook1.id);
    printf("Price of the notebook: %.2f\n", notebook1.price);
    printf("Number of pages of the notebook: %d\n", notebook1.page_num);
    printf("Title of the notebook: %s\n", notebook1.name);
    printf("Color of the cover of the notebook: %s\n", notebook1.color);

    return 0;
}