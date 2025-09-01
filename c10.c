#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int x) {
    stack[++top] = x;
}

int pop() {
    return stack[top--];
}

int evaluatePrefix(char* exp) {
    int i;
    int n = strlen(exp);

    // Scan from right to left
    for (i = n - 1; i >= 0; i--) {
        char c = exp[i];

        if (isdigit(c)) {
            push(c - '0'); // convert char digit → int
        } else {
            int val1 = pop();
            int val2 = pop();

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
    char prefix[MAX];

    printf("Enter Prefix Expression: ");
    scanf("%s", prefix);

    printf("Prefix Evaluation Result = %d\n", evaluatePrefix(prefix));

    return 0;
}
