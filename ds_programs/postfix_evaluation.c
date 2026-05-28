#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX 20

int s[MAX], top = 0;

void push(int element);
int pop();

void main() {
    char postfix[MAX], ch;
    int i, op1, op2, res;

    printf("\n\t\tProgram to Evaluate Postfix Expression.");
    printf("\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n Enter the postfix expression : \n ");
    scanf("%s", &postfix);

    for (i = 0; i < strlen(postfix); i++) {
        ch = postfix[i];
        if (isdigit(ch))
            push(ch - '0');
        else {
            op2 = pop();
            op1 = pop();
            switch (ch) {
                case '+': res = op1 + op2; break;
                case '-': res = op1 - op2; break;
                case '*': res = op1 * op2; break;
                case '/': res = op1 / op2; break;
                case '^': res = pow(op1, op2); break;
                default:  printf(" Invalid Character \n");
            }
            push(res);
        }
    }
    printf("Result of above expression is : %d \n", pop());
}

void push(int element) {
    ++top;
    s[top] = element;
}

int pop() {
    int element;
    element = s[top];
    --top;
    return (element);
}
