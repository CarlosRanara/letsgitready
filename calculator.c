#include <stdio.h>

void getTwoNum(float *num1, float *num2)
{
        printf("Number 1: ");
        scanf("%f", num1);
        printf("Number 2: ");

        scanf("%f", num2);

}
void calAdd()
{
        float num1, num2, total;

        getTwoNum(&num1, &num2);

        total = num1 + num2;

        printf("Answer: %.2f\n", total);

}

void calSub()
{
        float num1, num2, total;

        getTwoNum(&num1, &num2);

        total = num1 - num2;

        printf("Answer: %.2f\n", total);

}

void calMulti()
{
        float num1, num2, total;

        getTwoNum(&num1, &num2);

        total = num1 * num2;

        printf("Answer: %.2f\n", total);

}

void calDiv()
{
        float num1, num2, total;

        do {

                getTwoNum(&num1, &num2);

        }while(num2 == 0);

        total = num1 / num2;

        printf("Answer: %.2f\n", total);

}
void selectOperation()
{
        char operation;

        do {

                printf("Select Operation ( + , - , * , /): ");
                scanf(" %c", &operation);

        } while (operation != '+' && operation != '-' && operation != '*' && operation != '/');

        switch (operation) {

                case 43:
                        calAdd();
                        break;
                case 45:
                        calSub();
                        break;
                case 42:
                        calMulti();
                        break;
                case 47:
                        calDiv();
                        break;
        }
}


int main()
{
        char run;
        printf("Start? (y/n): ");
// funny
        scanf(" %c", &run);
        while (run == 'y' || run == 'Y') {
                selectOperation();
                printf("Do you want to calulate again? (y/n): ");
                scanf(" %c", &run);
        }
        return 0;
}
