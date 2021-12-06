#include <stdio.h>

void menu(void);
void types(void);
void sum(void);
void maturity(void);
void interest(void);
void calculate(void);

int type, years, rate, date;
float amount;
int loan, i;
char again, option;

int main()
{
    menu();
    return 0;
}

void menu()
{
    printf("\n\t Hello! Welcome to our USSD application! Thank you for using our services offered 24/7. \n");
    printf("\n\t Please press 'y' to proceed to design your loan repayment schedule\n\n\t ");
    scanf("%s", &option);
    if (option == 'y'){
    types();
    } else {
    menu();
    }
}

void types()
{
    if (option == 'y')
    {
        printf("\n\t Please choose loan type: ");
        printf("\n\t 1. Consumer loans");
        printf("\n\t 2. Microloans");
        printf("\n\t 3. Loans to buy a vehicle");
        printf("\n\t 4. Mortgage loans");
        printf("\n\t 5. Entrepreneurship loans\n\n\t ");
        scanf("%d", &type);
        sum();
    }
       if(type!=1 && type!=2 && type!=3 && type!=4 && type!=5){
       printf("\n\t Please try again, choose serial number from the displayed list\n");
       types();}
       
}

void sum()
{

    if (type == 1)
    {
        printf("\n\t Please enter amount up to $10000: ");
        scanf("%f", &amount);
        if ((amount > 0.0) && (amount <= 10000.0))
        {
            maturity();
        }
        else if ((amount == 0.0) || (amount > 10000.0))
        {
            printf("\n\tYou have exceeded loan limit, press 'y' to continue or 'n' to move back:\n ");
            scanf("%s", &again);
            if (again == 'y')
            {
                sum();
            }
            if (again == 'n')
            {
                types();
            }
        }
    }

    if (type == 2)
    {
        printf("\n\tPlease enter amount up to $5000: ");
        scanf("%f", &amount);
        if ((amount > 0.0) && (amount <= 5000.0))
        {
            maturity();
        }
        else if ((amount == 0.0) || (amount > 5000.0))
        {
            printf("\n\tYou have exceeded loan limit, press 'y' to continue or 'n' to move back:\n ");
            scanf("%s", &again);
            if (again == 'y')
            {
                sum();
            }
            if (again == 'n')
            {
                types();
            }
        }
    }

    if (type == 3)
    {
        printf("\n\tPlease enter amount up to $50000: ");
        scanf("%f", &amount);
        if ((amount > 0.0) && (amount <= 50000.0))
        {
            maturity();
        }
        else if ((amount == 0.0) || (amount > 50000.0))
        {
            printf("\n\tYou have exceeded loan limit, press 'y' to continue or 'n' to move back:\n ");
            scanf("%s", &again);
            if (again == 'y')
            {
                sum();
            }
            if (again == 'n')
            {
                types();
            }
        }
    }

    if (type == 4)
    {
        printf("\n\tPlease enter amount up to $100000: ");
        scanf("%f", &amount);
        if ((amount > 0.0) && (amount <= 100000.0))
        {
            maturity();
        }
        else if ((amount == 0.0) || (amount > 100000.0))
        {
            printf("\n\tYou have exceeded loan limit, press 'y' to continue or 'n' to move back:\n ");
            scanf("%s", &again);
            if (again == 'y')
            {
                sum();
            }
            if (again == 'n')
            {
                types();
            }
        }
    }

    if (type == 5)
    {
        printf("\n\tPlease enter amount up to $1000000: ");
        scanf("%f", &amount);
        if ((amount > 0.0) && (amount <= 1000000.0))
        {
            maturity();
        }
        else if ((amount == 0.0) || (amount > 1000000.0))
        {
            printf("\n\tYou have exceeded loan limit, press 'y' to continue or 'n' to move back:\n ");
            scanf("%s", &again);
            if (again == 'y')
            {
                sum();
            }
            if (again == 'n')
            {
                types();
            }
        }
    }
}

void maturity()
{

    if (type == 1)
    {
        printf("\n\tPlease choose a period of the loan in years: 1, 2, 3\n\tEnter number of years: ");
        scanf("%d", &years);
        if ((years > 0) && (years <= 3))
        {
            interest();
        }
        else
        {
            printf("\n\tThis number is not acceptable, press 'y' to try again or 'n' to move back");
            scanf("%s", &again);
            if (again == 'y')
            {
                maturity();
            }
            if (again == 'n')
            {
                sum();
            }
        }
    }
    if (type == 2)
    {
        printf("\n\tPlease choose a period of the loan in years: 1, 2, 3\n\tEnter number of years: ");
        scanf("%d", &years);
        if ((years > 0) && (years <= 3))
        {
            interest();
        }
        else
        {
            printf("\n\tThis number is not acceptable, press 'y' to try again or 'n' to move back");
            scanf("%s", &again);
            if (again == 'y')
            {
                maturity();
            }
            if (again == 'n')
            {
                sum();
            }
        }
    }
    if (type == 3)
    {
        printf("\n\tPlease choose a period of the loan in years: 1, 2, 3\n\tEnter number of years: ");
        scanf("%d", &years);
        if ((years > 0) && (years <= 3))
        {
            interest();
        }
        else
        {
            printf("\n\tThis number is not acceptable, press 'y' to try again or 'n' to move back");
            scanf("%s", &again);
            if (again == 'y')
            {
                maturity();
            }
            if (again == 'n')
            {
                sum();
            }
        }
    }

    if (type == 4)
    {
        printf("\n\tPlease choose a period of the loan in years: 5, 10, 15, 20\n\tEnter number of years: ");
        scanf("%d", &years);

        if ((years == 5) || (years == 10) || (years == 15) || (years == 20))
        {
            interest();
        }
        else
        {
            printf("\n\tThis number is not acceptable, press 'y' to try again or 'n' to move back");
            scanf("%s", &again);
            if (again == 'y')
            {
                maturity();
            }
            if (again == 'n')
            {
                sum();
            }
        }
    }

    if (type == 5)
    {
        printf("\n\tPlease choose a period of the loan in years: 1, 3, 5, 10\n\tEnter number of years: ");
        scanf("%d", &years);
        if ((years == 1) || (years == 3) || (years == 5) || (years == 10))
        {
            interest();
        }
        else
        {
            printf("\n\tThis number is not acceptable, press 'y' to try again or 'n' to move back");
            scanf("%s", &again);
            if (again == 'y')
            {
                maturity();
            }
            if (again == 'n')
            {
                sum();
            }
        }
    }
}

void interest()
{
    if (type == 1 && (amount > 0.0 && amount <= 10000.0) && years == 1)
    {
        rate = 20;
        printf("\n\tYou have selected loan with annual interest rate of %d percent.", rate);
        printf("\n\tPress 'y' to proceed with calculation or 'n to go to main menu\n");
        scanf("%s", &again);
            if (again == 'y')
            {
                calculate();
            }
            if (again == 'n')
            {
                types();}
    }
    if (type == 1 && (amount > 0.0 && amount <= 10000.0) && years == 2)
    {
        rate = 22;
        printf("\n\tYou have selected loan with annual interest rate of %d percent.", rate);
        printf("\n\tPress 'y' to proceed with calculation or 'n to go to main menu\n");
        scanf("%s", &again);
            if (again == 'y')
            {
                calculate();
            }
            if (again == 'n')
            {
                types();
    }}
    if (type == 1 && (amount > 0.0 && amount <= 10000.0) && years == 3)
    {
        rate = 24;
        printf("\n\tYou have selected loan with annual interest rate of %d percent.", rate);
        printf("\n\tPress 'y' to proceed with calculation or 'n to go to main menu\n");
        scanf("%s", &again);
            if (again == 'y')
            {
                calculate();
            }
            if (again == 'n')
            {
                types();
    }}
    if (type == 2 && (amount > 0.0 && amount <= 5000.0) && years == 1)
    {
        rate = 18;
        printf("\n\tYou have selected loan with annual interest rate of %d percent.", rate);
        printf("\n\tPress 'y' to proceed with calculation or 'n to go to main menu\n");
        scanf("%s", &again);
            if (again == 'y')
            {
                calculate();
            }
            if (again == 'n')
            {
                types();
    }}
    if (type == 2 && (amount > 0.0 && amount <= 5000.0) && years == 2)
    {
        rate = 20;
        printf("\n\tYou have selected loan with annual interest rate of %d percent.", rate);
        printf("\n\tPress 'y' to proceed with calculation or 'n to go to main menu\n");
        scanf("%s", &again);
            if (again == 'y')
            {
                calculate();
            }
            if (again == 'n')
            {
                types();
    }}
    if (type == 2 && (amount > 0.0 && amount <= 5000.0) && years == 3)
    {
        rate = 22;
        printf("\n\tYou have selected loan with annual interest rate of %d percent.", rate);
        printf("\n\tPress 'y' to proceed with calculation or 'n to go to main menu\n");
        scanf("%s", &again);
            if (again == 'y')
            {
                calculate();
            }
            if (again == 'n')
            {
                types();
    }}
    if (type == 3 && (amount > 0.0 && amount <= 50000.0) && years == 1)
    {
        rate = 22;
        printf("\n\tYou have selected loan with annual interest rate of %d percent.", rate);
        printf("\n\tPress 'y' to proceed with calculation or 'n to go to main menu\n");
        scanf("%s", &again);
            if (again == 'y')
            {
                calculate();
            }
            if (again == 'n')
            {
                types();
    }}
    if (type == 3 && (amount > 0.0 && amount <= 50000.0) && years == 2)
    {
        rate = 24;
        printf("\n\tYou have selected loan with annual interest rate of %d percent.", rate);
        printf("\n\tPress 'y' to proceed with calculation or 'n to go to main menu\n");
        scanf("%s", &again);
            if (again == 'y')
            {
                calculate();
            }
            if (again == 'n')
            {
                types();
    }}
    if (type == 3 && (amount > 0.0 && amount <= 50000.0) && years == 3)
    {
        rate = 26;
        printf("\n\tYou have selected loan with annual interest rate of %d percent.", rate);
        printf("\n\tPress 'y' to proceed with calculation or 'n to go to main menu\n");
        scanf("%s", &again);
            if (again == 'y')
            {
                calculate();
            }
            if (again == 'n')
            {
                types();
    }}
    if (type == 4 && (amount > 0.0 && amount <= 100000.0) && years == 5)
    {
        rate = 25;
        printf("\n\tYou have selected loan with annual interest rate of %d percent.", rate);
        printf("\n\tPress 'y' to proceed with calculation or 'n to go to main menu\n");
        scanf("%s", &again);
            if (again == 'y')
            {
                calculate();
            }
            if (again == 'n')
            {
                types();
    }}
    if (type == 4 && (amount > 0.0 && amount <= 100000.0) && years == 10)
    {
        rate = 26;
        printf("\n\tYou have selected loan with annual interest rate of %d percent.", rate);
        printf("\n\tPress 'y' to proceed with calculation or 'n to go to main menu\n");
        scanf("%s", &again);
            if (again == 'y')
            {
                calculate();
            }
            if (again == 'n')
            {
                types();
    }}
    if (type == 4 && (amount > 0.0 && amount <= 100000.0) && years == 15)
    {
        rate = 27;
        printf("\n\tYou have selected loan with annual interest rate of %d percent.", rate);
        printf("\n\tPress 'y' to proceed with calculation or 'n to go to main menu\n");
        scanf("%s", &again);
            if (again == 'y')
            {
                calculate();
            }
            if (again == 'n')
            {
                types();
    }}
    if (type == 4 && (amount > 0.0 && amount <= 100000.0) && years == 20)
    {
        rate = 28;
        printf("\n\tYou have selected loan with annual interest rate of %d percent.", rate);
        printf("\n\tPress 'y' to proceed with calculation or 'n to go to main menu\n");
        scanf("%s", &again);
            if (again == 'y')
            {
                calculate();
            }
            if (again == 'n')
            {
                types();
    }}
    if (type == 5 && (amount > 0.0 && amount <= 1000000.0) && years == 1)
    {
        rate = 19;
        printf("\n\tYou have selected loan with annual interest rate of %d percent.", rate);
        printf("\n\tPress 'y' to proceed with calculation or 'n to go to main menu\n");
        scanf("%s", &again);
            if (again == 'y')
            {
                  calculate();
            }
            if (again == 'n')
            {
                types();
    }}
    if (type == 5 && (amount > 0.0 && amount <= 1000000.0) && years == 3)
    {
        rate = 22;
        printf("\n\tYou have selected loan with annual interest rate of %d percent.", rate);
        printf("\n\tPress 'y' to proceed with calculation or 'n to go to main menu\n");
        scanf("%s", &again);
            if (again == 'y')
            {
                  calculate();
            }
            if (again == 'n')
            {
                types();
    }}
    if (type == 5 && (amount > 0.0 && amount <= 1000000.0) && years == 5)
    {
        rate = 25;
        printf("\n\tYou have selected loan with annual interest rate of %d percent.", rate);
        printf("\n\tPress 'y' to proceed with calculation or 'n to go to main menu\n");
        scanf("%s", &again);
            if (again == 'y')
            {
                   calculate();
            }
            if (again == 'n')
            {
                types();
    }}
    if (type == 5 && (amount > 0.0 && amount <= 1000000.0) && years == 10)
    {
        rate = 28;
        printf("\n\tYou have selected loan with annual interest rate of %d percent.", rate);
        printf("\n\tPress 'y' to proceed with calculation or 'n to go to main menu\n");
        scanf("%s", &again);
            if (again == 'y')
            {
                 calculate();
            }
            if (again == 'n')
            {
                types();
              
    }
    
}
    }

void calculate() {
    
    if (type == 1 && (amount > 0.0 && amount <= 10000.0) && years == 1 && rate == 20){
    
        float periodic = amount/12.0;
        printf("Your loan schedule:\n");
        for (int i=1; i<=12; i++){
        printf("\tMonths:%d\t", i);
        printf("\tPrincipal:%0.3f\t", periodic);
        float interest = amount*(0.2/12);
        printf("\tInterest:%0.3f\t", interest);
        float m=periodic+interest;
        printf("\tFull payment:%0.3f\t", m);
        amount=amount-periodic;
        printf("\tBalance:%0.3f\t", amount);
        printf("\n\n");
        }
        printf("Thank you for using our application.");
}
    
    if (type == 1 && (amount > 0.0 && amount <= 10000.0) && years == 2 && rate == 22){
        float periodic = amount/24.0;
        printf("Your loan schedule:\n");
        for (int i=1; i<=24; i++){
        printf("\tMonths:%d\t", i);
        printf("\tPrincipal:%0.3f\t", periodic);
        float interest = amount*(0.22/12);
        printf("\tInterest:%0.3f\t", interest);
        float m=periodic+interest;
        printf("\tFull payment:%0.3f\t", m);
        amount=amount-periodic;
        printf("\tBalance:%0.3f\t", amount);
        printf("\n\n");
        }
        printf("Thank you for using our application.");
}
    
    if (type == 1 && (amount > 0.0 && amount <= 10000.0) && years == 3 && rate == 24){
        float periodic = amount/36.0;
        printf("Your loan schedule:\n");
        for (int i=1; i<=36; i++){
        printf("\tMonths:%d\t", i);
        printf("\tPrincipal:%0.3f\t", periodic);
        float interest = amount*(0.24/12);
        printf("\tInterest:%0.3f\t", interest);
        float m=periodic+interest;
        printf("\tFull payment:%0.3f\t", m);
        amount=amount-periodic;
        printf("\tBalance:%0.3f\t", amount);
        printf("\n\n");
        }
        printf("Thank you for using our application.");
    }
        
    if (type == 2 && (amount > 0.0 && amount <= 5000.0) && years == 1 && rate == 18){
        float periodic = amount/12.0;
        printf("Your loan schedule:\n");
        for (int i=1; i<=12; i++){
        printf("\tMonths:%d\t", i);
        printf("\tPrincipal:%0.3f\t", periodic);
        float interest = amount*(0.18/12);
        printf("\tInterest:%0.3f\t", interest);
        float m=periodic+interest;
        printf("\tFull payment:%0.3f\t", m);
        amount=amount-periodic;
        printf("\tBalance:%0.3f\t", amount);
        printf("\n\n");
        }
        printf("Thank you for using our application.");
    }
       
    if (type == 2 && (amount > 0.0 && amount <= 5000.0) && years == 2 && rate == 20){
        float periodic = amount/24.0;
        printf("Your loan schedule:\n");
        for (int i=1; i<=24; i++){
        printf("\tMonths:%d\t", i);
        printf("\tPrincipal:%0.3f\t", periodic);
        float interest = amount*(0.20/12);
        printf("\tInterest:%0.3f\t", interest);
        float m=periodic+interest;
        printf("\tFull payment:%0.3f\t", m);
        amount=amount-periodic;
        printf("\tBalance:%0.3f\t", amount);
        printf("\n\n");
        }
        printf("Thank you for using our application.");
    }
        
    if (type == 2 && (amount > 0.0 && amount <= 5000.0) && years == 3 && rate == 22){
        float periodic = amount/36.0;
        printf("Your loan schedule:\n");
        for (int i=1; i<=36; i++){
        printf("\tMonths:%d\t", i);
        printf("\tPrincipal:%0.3f\t", periodic);
        float interest = amount*(0.22/12);
        printf("\tInterest:%0.3f\t", interest);
        float m=periodic+interest;
        printf("\tFull payment:%0.3f\t", m);
        amount=amount-periodic;
        printf("\tBalance:%0.3f\t", amount);
        printf("\n\n");
        }
        printf("Thank you for using our application.");
    }
        
    if (type == 3 && (amount > 0.0 && amount <= 50000.0) && years == 1 && rate == 22){
        float periodic = amount/12.0;
        printf("Your loan schedule:\n");
        for (int i=1; i<=12; i++){
        printf("\tMonths:%d\t", i);
        printf("\tPrincipal:%0.3f\t", periodic);
        float interest = amount*(0.22/12);
        printf("\tInterest:%0.3f\t", interest);
        float m=periodic+interest;
        printf("\tFull payment:%0.3f\t", m);
        amount=amount-periodic;
        printf("\tBalance:%0.3f\t", amount);
        printf("\n\n");
        }
        printf("Thank you for using our application.");
    }
        
    if (type == 3 && (amount > 0.0 && amount <= 50000.0) && years == 2 && rate == 24){
        float periodic = amount/24.0;
        printf("Your loan schedule:\n");
        for (int i=1; i<=24; i++){
        printf("\tMonths:%d\t", i);
        printf("\tPrincipal:%0.3f\t", periodic);
        float interest = amount*(0.24/12);
        printf("\tInterest:%0.3f\t", interest);
        float m=periodic+interest;
        printf("\tFull payment:%0.3f\t", m);
        amount=amount-periodic;
        printf("\tBalance:%0.3f\t", amount);
        printf("\n\n");
        }
        printf("Thank you for using our application.");
    }
        
    if (type == 3 && (amount > 0.0 && amount <= 50000.0) && years == 3 && rate == 26){
        float periodic = amount/36.0;
        printf("Your loan schedule:\n");
        for (int i=1; i<=36; i++){
        printf("\tMonths:%d\t", i);
        printf("\tPrincipal:%0.3f\t", periodic);
        float interest = amount*(0.26/12);
        printf("\tInterest:%0.3f\t", interest);
        float m=periodic+interest;
        printf("\tFull payment:%0.3f\t", m);
        amount=amount-periodic;
        printf("\tBalance:%0.3f\t", amount);
        printf("\n\n");
        }
        printf("Thank you for using our application.");
    }

    if (type == 4 && (amount > 0.0 && amount <= 100000.0) && years == 5 && rate == 25){
        float periodic = amount/60.0;
        printf("Your loan schedule:\n");
        for (int i=1; i<=60; i++){
        printf("\tMonths:%d\t", i);
        printf("\tPrincipal:%0.3f\t", periodic);
        float interest = amount*(0.25/12);
        printf("\tInterest:%0.3f\t", interest);
        float m=periodic+interest;
        printf("\tFull payment:%0.3f\t", m);
        amount=amount-periodic;
        printf("\tBalance:%0.3f\t", amount);
        printf("\n\n");
        }
        printf("Thank you for using our application.");
    }
    
    if (type == 4 && (amount > 0.0 && amount <= 100000.0) && years == 10 && rate == 26){
        float periodic = amount/120.0;
        printf("Your loan schedule:\n");
        for (int i=1; i<=120; i++){
        printf("\tMonths:%d\t", i);
        printf("\tPrincipal:%0.3f\t", periodic);
        float interest = amount*(0.26/12);
        printf("\tInterest:%0.3f\t", interest);
        float m=periodic+interest;
        printf("\tFull payment:%0.3f\t", m);
        amount=amount-periodic;
        printf("\tBalance:%0.3f\t", amount);
        printf("\n\n");
        }
        printf("Thank you for using our application.");
    }

    if (type == 4 && (amount > 0.0 && amount <= 100000.0) && years == 15 && rate == 27){
        float periodic = amount/180.0;
        printf("Your loan schedule:\n");
        for (int i=1; i<=180; i++){
        printf("\tMonths:%d\t", i);
        printf("\tPrincipal:%0.3f\t", periodic);
        float interest = amount*(0.27/12);
        printf("\tInterest:%0.3f\t", interest);
        float m=periodic+interest;
        printf("\tFull payment:%0.3f\t", m);
        amount=amount-periodic;
        printf("\tBalance:%0.3f\t", amount);
        printf("\n\n");
        }
        printf("Thank you for using our application.");
    }
 
    if (type == 4 && (amount > 0.0 && amount <= 100000.0) && years == 20 && rate == 28){
        float periodic = amount/240.0;
        printf("Your loan schedule:\n");
        for (int i=1; i<=240; i++){
        printf("\tMonths:%d\t", i);
        printf("\tPrincipal:%0.3f\t", periodic);
        float interest = amount*(0.28/12);
        printf("\tInterest:%0.3f\t", interest);
        float m=periodic+interest;
        printf("\tFull payment:%0.3f\t", m);
        amount=amount-periodic;
        printf("\tBalance:%0.3f\t", amount);
        printf("\n\n");
        }
        printf("Thank you for using our application.");
    }

    if (type == 5 && (amount > 0.0 && amount <= 1000000.0) && years == 1 && rate == 19){
        float periodic = amount/12.0;
        printf("Your loan schedule:\n");
        for (int i=1; i<=12; i++){
        printf("\tMonths:%d\t", i);
        printf("\tPrincipal:%0.3f\t", periodic);
        float interest = amount*(0.19/12);
        printf("\tInterest:%0.3f\t", interest);
        float m=periodic+interest;
        printf("\tFull payment:%0.3f\t", m);
        amount=amount-periodic;
        printf("\tBalance:%0.3f\t", amount);
        printf("\n\n");
        }
        printf("Thank you for using our application.");
    }
    
    if (type == 5 && (amount > 0.0 && amount <= 1000000.0) && years == 3 && rate == 22){
        float periodic = amount/36.0;
        printf("Your loan schedule:\n");
        for (int i=1; i<=36; i++){
        printf("\tMonths:%d\t", i);
        printf("\tPrincipal:%0.3f\t", periodic);
        float interest = amount*(0.22/12);
        printf("\tInterest:%0.3f\t", interest);
        float m=periodic+interest;
        printf("\tFull payment:%0.3f\t", m);
        amount=amount-periodic;
        printf("\tBalance:%0.3f\t", amount);
        printf("\n\n");
        }
        printf("Thank you for using our application.");
    }
        
    if (type == 5 && (amount > 0.0 && amount <= 1000000.0) && years == 5 && rate == 25){
        float periodic = amount/60.0;
        printf("Your loan schedule:\n");
        for (int i=1; i<=60; i++){
        printf("\tMonths:%d\t", i);
        printf("\tPrincipal:%0.3f\t", periodic);
        float interest = amount*(0.25/12);
        printf("\tInterest:%0.3f\t", interest);
        float m=periodic+interest;
        printf("\tFull payment:%0.3f\t", m);
        amount=amount-periodic;
        printf("\tBalance:%0.3f\t", amount);
        printf("\n\n");
        }
        printf("Thank you for using our application.");
    }
        
    if (type == 5 && (amount > 0.0 && amount <= 1000000.0) && years == 10 && rate == 28){
        float periodic = amount/120.0;
        printf("Your loan schedule:\n");
        for (int i=1; i<=120; i++){
        printf("\tMonths:%d\t", i);
        printf("\tPrincipal:%0.3f\t", periodic);
        float interest = amount*(0.28/12);
        printf("\tInterest:%0.3f\t", interest);
        float m=periodic+interest;
        printf("\tFull payment:%0.3f\t", m);
        amount=amount-periodic;
        printf("\tBalance:%0.3f\t", amount);
        printf("\n\n");
        }
        printf("Thank you for using our application.");
    }
}

