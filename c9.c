#include <stdio.h>
#include <ctype.h>
#include <math.h>
#define MAX 100
double stack[MAX];
int top = -1;
void push(int x) {
    stack[++top] = x;
}
int pop() {
    return stack[top--];
}
int evaluatePostfix(char* exp) {
    int i;
    for (i = 0; exp[i] != '\0'; i++) {
        char c = exp[i];

        if (isdigit(c)) {
            push(c - '0'); // convert char digit → int
        } else {
            int val2 = pop();
            int val1 = pop();

            switch (c) {
                case '+': push(val1 + val2); break;
                case '-': push(val1 - val2); break;
                case '*': push(val1 * val2); break;
                case '/': push(val1 / val2); break;
                case '^': push((int)pow(val1, val2)); break;
            }
        }
    }
    return pop();
}

int main() {
    char postfix[MAX];
    printf("Enter Postfix Expression: ");
    scanf("%s", postfix);
    printf("Postfix Evaluation Result = %d\n", evaluatePostfix(postfix));
    return 0;
}
