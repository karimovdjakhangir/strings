#include <stdio.h>
//#include "amount.h"

void menu();
void types();
void sum();
void maturity();
void interest();

int type, years, rate;
unsigned long amount;
char again, option;

int main()
{
    menu();
    return 0;
}

void menu()
{

    printf("\n\t Hello! Thank you for using our services offered 24/7. \n");
    printf("\n\t Please press 'y' to proceed to design your loan repayment schedule\n\n\t ");
    scanf("%s", &option);
    types();
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
}

void sum()
{

    if (type == 1)
    {
        printf("\n\t Please enter amount up to $10000: ");
        scanf("%ld", &amount);
        if ((amount > 0) && (amount <= 10000))
        {
            maturity();
        }
        if ((amount == 0) || (amount > 10000))
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
        scanf("%ld", &amount);
        if ((amount > 0) && (amount <= 5000))
        {
            maturity();
        }
        if ((amount == 0) || (amount > 5000))
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
        scanf("%ld", &amount);
        if ((amount > 0) && (amount <= 50000))
        {
            maturity();
        }
        if ((amount == 0) || (amount > 50000))
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
        scanf("%ld", &amount);
        if ((amount > 0) && (amount <= 100000))
        {
            maturity();
        }
        if ((amount == 0) || (amount > 100000))
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
        scanf("%ld", &amount);
        if ((amount > 0) && (amount <= 1000000))
        {
            maturity();
        }
        if ((amount == 0) || (amount > 1000000))
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
    if (type == 1 && (amount > 0 && amount <= 10000) && years == 1)
    {
        rate = 20;
        printf("\n\tYou have selected loan with annual interest rate of %d percent.", rate);
        printf("\n\tPress 'y' to proceed with calculation or 'n to go to main menu\n");
        scanf("%s", &again);
            if (again == 'y')
            {
                //calculate();
            }
            if (again == 'n')
            {
                types();}
    }
    if (type == 1 && (amount > 0 && amount <= 10000) && years == 2)
    {
        rate = 23;
        printf("\n\tYou have selected loan with annual interest rate of %d percent.", rate);
        printf("\n\tPress 'y' to proceed with calculation or 'n to go to main menu\n");
        scanf("%s", &again);
            if (again == 'y')
            {
                //calculate();
            }
            if (again == 'n')
            {
                types();
    }}
    if (type == 1 && (amount > 0 && amount <= 10000) && years == 3)
    {
        rate = 26;
        printf("\n\tYou have selected loan with annual interest rate of %d percent.", rate);
        printf("\n\tPress 'y' to proceed with calculation or 'n to go to main menu\n");
        scanf("%s", &again);
            if (again == 'y')
            {
                //calculate();
            }
            if (again == 'n')
            {
                types();
    }}
    if (type == 2 && (amount > 0 && amount <= 5000) && years == 1)
    {
        rate = 24;
        printf("\n\tYou have selected loan with annual interest rate of %d percent.", rate);
        printf("\n\tPress 'y' to proceed with calculation or 'n to go to main menu\n");
        scanf("%s", &again);
            if (again == 'y')
            {
                //calculate();
            }
            if (again == 'n')
            {
                types();
    }}
    if (type == 2 && (amount > 0 && amount <= 5000) && years == 2)
    {
        rate = 25;
        printf("\n\tYou have selected loan with annual interest rate of %d percent.", rate);
        printf("\n\tPress 'y' to proceed with calculation or 'n to go to main menu\n");
        scanf("%s", &again);
            if (again == 'y')
            {
                //calculate();
            }
            if (again == 'n')
            {
                types();
    }}
    if (type == 2 && (amount > 0 && amount <= 5000) && years == 3)
    {
        rate = 26;
        printf("\n\tYou have selected loan with annual interest rate of %d percent.", rate);
        printf("\n\tPress 'y' to proceed with calculation or 'n to go to main menu\n");
        scanf("%s", &again);
            if (again == 'y')
            {
                //calculate();
            }
            if (again == 'n')
            {
                types();
    }}
    if (type == 3 && (amount > 0 && amount <= 50000) && years == 1)
    {
        rate = 22;
        printf("\n\tYou have selected loan with annual interest rate of %d percent.", rate);
        printf("\n\tPress 'y' to proceed with calculation or 'n to go to main menu\n");
        scanf("%s", &again);
            if (again == 'y')
            {
                //calculate();
            }
            if (again == 'n')
            {
                types();
    }}
    if (type == 3 && (amount > 0 && amount <= 50000) && years == 2)
    {
        rate = 24;
        printf("\n\tYou have selected loan with annual interest rate of %d percent.", rate);
        printf("\n\tPress 'y' to proceed with calculation or 'n to go to main menu\n");
        scanf("%s", &again);
            if (again == 'y')
            {
                //calculate();
            }
            if (again == 'n')
            {
                types();
    }}
    if (type == 3 && (amount > 0 && amount <= 50000) && years == 3)
    {
        rate = 26;
        printf("\n\tYou have selected loan with annual interest rate of %d percent.", rate);
        printf("\n\tPress 'y' to proceed with calculation or 'n to go to main menu\n");
        scanf("%s", &again);
            if (again == 'y')
            {
                //calculate();
            }
            if (again == 'n')
            {
                types();
    }}
    if (type == 4 && (amount > 0 && amount <= 100000) && years == 5)
    {
        rate = 24;
        printf("\n\tYou have selected loan with annual interest rate of %d percent.", rate);
        printf("\n\tPress 'y' to proceed with calculation or 'n to go to main menu\n");
        scanf("%s", &again);
            if (again == 'y')
            {
                //calculate();
            }
            if (again == 'n')
            {
                types();
    }}
    if (type == 4 && (amount > 0 && amount <= 100000) && years == 10)
    {
        rate = 26;
        printf("\n\tYou have selected loan with annual interest rate of %d percent.", rate);
        printf("\n\tPress 'y' to proceed with calculation or 'n to go to main menu\n");
        scanf("%s", &again);
            if (again == 'y')
            {
                //calculate();
            }
            if (again == 'n')
            {
                types();
    }}
    if (type == 4 && (amount > 0 && amount <= 100000) && years == 15)
    {
        rate = 28;
        printf("\n\tYou have selected loan with annual interest rate of %d percent.", rate);
        printf("\n\tPress 'y' to proceed with calculation or 'n to go to main menu\n");
        scanf("%s", &again);
            if (again == 'y')
            {
                //calculate();
            }
            if (again == 'n')
            {
                types();
    }}
    if (type == 4 && (amount > 0 && amount <= 100000) && years == 20)
    {
        rate = 30;
        printf("\n\tYou have selected loan with annual interest rate of %d percent.", rate);
        printf("\n\tPress 'y' to proceed with calculation or 'n to go to main menu\n");
        scanf("%s", &again);
            if (again == 'y')
            {
                //calculate();
            }
            if (again == 'n')
            {
                types();
    }}
    if (type == 5 && (amount > 0 && amount <= 1000000) && years == 1)
    {
        rate = 19;
        printf("\n\tYou have selected loan with annual interest rate of %d percent.", rate);
        printf("\n\tPress 'y' to proceed with calculation or 'n to go to main menu\n");
        scanf("%s", &again);
            if (again == 'y')
            {
                //calculate();
            }
            if (again == 'n')
            {
                types();
    }}
    if (type == 5 && (amount > 0 && amount <= 1000000) && years == 3)
    {
        rate = 22;
        printf("\n\tYou have selected loan with annual interest rate of %d percent.", rate);
        printf("\n\tPress 'y' to proceed with calculation or 'n to go to main menu\n");
        scanf("%s", &again);
            if (again == 'y')
            {
                //calculate();
            }
            if (again == 'n')
            {
                types();
    }}
    if (type == 5 && (amount > 0 && amount <= 1000000) && years == 5)
    {
        rate = 25;
        printf("\n\tYou have selected loan with annual interest rate of %d percent.", rate);
        printf("\n\tPress 'y' to proceed with calculation or 'n to go to main menu\n");
        scanf("%s", &again);
            if (again == 'y')
            {
                //calculate();
            }
            if (again == 'n')
            {
                types();
    }}
    if (type == 5 && (amount > 0 && amount <= 1000000) && years == 10)
    {
        rate = 28;
        printf("\n\tYou have selected loan with annual interest rate of %d percent.", rate);
        printf("\n\tPress 'y' to proceed with calculation or 'n to go to main menu\n");
        scanf("%s", &again);
            if (again == 'y')
            {
                //calculate();
            }
            if (again == 'n')
            {
                types();
              
    }
    
}
    }
