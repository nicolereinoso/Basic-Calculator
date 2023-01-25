// Imported Libraries
#include <stdio.h>

// Sum Function: Sums up two numbers, gives back the result.
float sum(float num1,float num2)
{
    float result;

    result = num1 + num2;

    return result;
}

// Substraction: Subtracts from one number from the other, gives back the result.
float sub(float num1, float num2)
{
    float result;

    result = num1 - num2;

    return result;
}

// Multiplication Function: Multiplies 2 numbers, gives back the result.
float mult(float num1, float num2)
{
    float result;

    result = num1 * num2;

    return result;
    
}


// Division Function: Has a Condition
float div(float num1, float num2)
{
    float result;

    // Condition: Cannot Divide by 0! Undefined
    if(num2 <= 0)
    {
        printf("Cannot divide by 0!\n");
        exit(-1); // Error catching
    }
    
    result = num1 / num2;
    return result;

}

int main(void)
{
    
    char operator; // Gives the operation '+', '-', '/', '*'
    float num1, num2, result; // Numbers entered by user

    // User Input
    printf("Enter First Number:");
    scanf("%f", &num1);

    printf("Choose Operator ( + , - , * , / ) :");
    scanf("%c", &operator);

    printf("Enter Second Number:");
    scanf("%f", &num2);



    // Operations
    switch(operator)
    {
        case '+': result = sum(num1,num2);
        break;

        case '-': result = sub(num1,num2);
        break;

        case '*': result = mult(num1,num2);
        break;

        case '/': result = div(num1,num2);
        break;

        default: printf("Not an operation!");
    }

    printf("Result: %.2f", result);

    return 0;
}