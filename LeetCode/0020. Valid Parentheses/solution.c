#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#define MAX 10000

char *Stack;
int Top = -1;

int push(char value);
int pop();
void display();

bool isValid(char *s) {
    Stack = (char *)malloc(strlen(s) * sizeof(s));
    Top = -1;
    for (int count = 0; count < strlen(s); count++) {
        if (s[count] == '(' || s[count] == '{' || s[count] == '[')
            push(s[count]);
        else if (Top == -1)
            return false;
        else {
            if (s[count] == ')' && Stack[Top] == '(')
                pop();
            else if (s[count] == '}' && Stack[Top] == '{')
                pop();
            else if (s[count] == ']' && Stack[Top] == '[')
                pop();
            else
                return false;
        }
    }
    free(Stack);
    return Top == -1;
}

int push(const char value) {
    if (Top == MAX - 1) {
        printf("Stack is overflowing");
        return -1;
    }
    Stack[++Top] = value;
    printf("%c has been added to the stack!", value);
    return 0;
}

int pop() {
    if (Top == -1) {
        printf("Stack is underflow");
        return -1;
    }
    const int value = Stack[Top--];
    printf("%c has been popped from the stack!", value);
    return 0;
}

void display() {
    if (Top == -1) {
        printf("Stack is empty!");
        return;
    }
    printf("Elements in the stack are\n");
    for (int i = 0; i <= Top; i++) {
        printf("%c\n", Stack[i]);
    }
    return;
}