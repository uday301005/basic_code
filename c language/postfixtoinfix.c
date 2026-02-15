#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

// Stack structure
typedef struct {
    char *arr[MAX];
    int top;
} Stack;

// Function to initialize the stack
void initStack(Stack *s) {
    s->top = -1;
}

// Function to check if the stack is empty
int isEmpty(Stack *s) {
    return s->top == -1;
}

// Function to push an element onto the stack
void push(Stack *s, char *value) {
    if (s->top < MAX - 1) {
        s->arr[++(s->top)] = value;
    }
}

// Function to pop an element from the stack
char* pop(Stack *s) {
    if (!isEmpty(s)) {
        return s->arr[(s->top)--];
    }
    return NULL;
}

// Function to check if a character is an operator
int isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

// Function to convert postfix to infix
void postfixToInfix(char *postfix) {
    Stack s;
    initStack(&s);
    int n = strlen(postfix);

    for (int i = 0; i < n; i++) {
        if (isdigit(postfix[i]) || isalpha(postfix[i])) {
            // Operand
            char *op = (char *)malloc(2 * sizeof(char));
            op[0] = postfix[i];
            op[1] = '\0';
            push(&s, op);
        } else if (isOperator(postfix[i])) {
            // Operator
            char *op1 = pop(&s);
            char *op2 = pop(&s);

            char *exp = (char *)malloc((strlen(op1) + strlen(op2) + 4) * sizeof(char));
            snprintf(exp, strlen(op1) + strlen(op2) + 4, "(%s%c%s)", op2, postfix[i], op1);

            free(op1);
            free(op2);
            push(&s, exp);
        }
    }

    // The final expression
    printf("Infix Expression: %s\n", pop(&s));
}

int main() {
    char postfix[MAX];
    printf("Enter postfix expression: ");
    scanf("%s", postfix);
    postfixToInfix(postfix);
    return 0;
}
