#include <stdio.h>
#include <math.h>
//#include "amount.h"

void menu();
void action (int option);
void sum (int type);
//next function void maturity (int years);
// master
int option, type;

int main(){
    
    menu();
    
    return 0;
}
   
    void menu(){
    
    printf("\n\t Menu: ");
    printf("\n\t 1. Loan type\n");
    scanf("%d", &option);
    action (option);
    }
              
void action (int option){
    int type;
    if (option == 1){
    printf("\n\t Please choose a loan type: ");
    printf("\n\t 1. Consumer loans");
    printf("\n\t 2. Microloans");
    printf("\n\t 3. Loans to buy a car");
    printf("\n\t 4. Mortgage loans");
    printf("\n\t 5. Entrepreneurship loans");
    printf("\n\t 0. Back\n");
    scanf("%d", &type);
    sum (type);
    }
}

void sum (int type){
        unsigned long amount;
        char again;
        if (type >= 1){
            printf("Please enter amount up to 100000$: ");
            scanf("%ld", &amount);
            if ((amount> 0) && (amount <= 100000)){
                //next function void maturity (int years)
                }
                if ((amount == 0) || (amount > 100000)){
                printf("Entered number is not correct, press 'Y' or 'y' to continue or press 'N' or 'n' to move back\n: ");
                    scanf("%s", &again);
                   
                    if((again == 'Y')||(again == 'y')){
                        sum(type);
                    }
                        if((again == 'N')||(again == 'n')){
                        action(option);
                        }
                }
                   
        }

    }
