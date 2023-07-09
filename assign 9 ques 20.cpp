#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LENGTH 100
int isOperator(char ch) 
{
    return ch == '+' || ch == '-' || ch == '*' || ch == '/';
}
int performOperation(int operand1, int operand2, char operator) {
	
    switch (operator) 
	{
        case '+':
            return operand1 + operand2;
        case '-':
            return operand1 - operand2;
        case '*':
            return operand1 * operand2;
        case '/':
            return operand1 / operand2;
        default:
            return 0;  
    }
}
int evaluateExpression(const char* expression) 
{
    int length = strlen(expression);
    int currentIndex = 0;
    int operandStack[MAX_LENGTH];
    char operatorStack[MAX_LENGTH];
    int operandIndex = -1;
    int operatorIndex = -1;

    for (int i = 0; i < length; i++) 
	{
        char currentChar = expression[i];
        if (currentChar == ' ') 
		{
            continue; 
        } else if (isdigit(currentChar)) 
		{
            int operand = 0;
            while (i < length && isdigit(expression[i])) 
			{
                operand = operand * 10 + (expression[i] - '0');
                i++;
            }
            i--;  
            operandStack[++operandIndex] = operand;
        } 
		else if (isOperator(currentChar)) 
		{
            while (operatorIndex >= 0 && operatorStack[operatorIndex] != '(' &&
                   ((currentChar == '*' || currentChar == '/') ||
                    (currentChar == '+' || currentChar == '-') &&
                        (operatorStack[operatorIndex] == '*' || operatorStack[operatorIndex] == '/'))) 
						{
                int operand2 = operandStack[operandIndex--];
                int operand1 = operandStack[operandIndex--];
                char operator = operatorStack[operatorIndex--];
                int result = performOperation(operand1, operand2, operator);
                operandStack[++operandIndex] = result;
            }
            operatorStack[++operatorIndex] = currentChar;
        } 
		else if (currentChar == '(') 
		{
            operatorStack[++operatorIndex] = currentChar;
        } 
		else if (currentChar == ')') 
		{
            while (operatorIndex >= 0 && operatorStack[operatorIndex] != '(') 
			{
                int operand2 = operandStack[operandIndex--];
                int operand1 = operandStack[operandIndex--];
                char operator = operatorStack[operatorIndex--];
                int result = performOperation(operand1, operand2, operator);
                operandStack[++operandIndex] = result;
            }
            operatorIndex--; 
        }
    }

    while (operatorIndex >= 0)
	 {
        int operand2 = operandStack[operandIndex--];
        int operand1 = operandStack[operandIndex--];
        char operator = operatorStack[operatorIndex--];
        int result = performOperation(operand1, operand2, operator);
        operandStack[++operandIndex] = result;
    }

    return operandStack[operandIndex];
}

int main()
 {
    char expression[MAX_LENGTH];

    printf("Enter an expression: ");
    fgets(expression, sizeof(expression), stdin);
    expression[strcspn(expression, "\n")] = '\0'; 

    int result = evaluateExpression(expression);

    printf("Result: %d\n", result);

    return 0;
}
