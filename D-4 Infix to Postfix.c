#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#define SIZE 50

char s[SIZE];
int top = -1;

int push(char elem)
{
    s[++top] = elem;
    return 0;
}

char pop()
{
    return (s[top--]);
}

int pr(char elem)
{
    switch(elem)
    {
        case '#': return 0;
        case '(': return 1;
        case '+':
        case '-': return 2;
        case '*':
        case '/': return 3;
    }
    return 0;
}

void main()
{
    char infx[50], pofx[50], ch, elem;
    int i = 0, k = 0;
    clrscr();
    printf("\nEnter Infix Expression: ");
    scanf("%s", infx);
    push('#');
    while((ch = infx[i++]) != '\0')
    {
        if(ch == '(')
            push(ch);
        else if(isalnum(ch))
            pofx[k++] = ch;
        else if(ch == ')')
        {
            while(s[top] != '(')
                pofx[k++] = pop();
            elem = pop();
        }
        else
        {
            while(pr(s[top]) >= pr(ch))
                pofx[k++] = pop();
            push(ch);
        }
    }
    while(s[top] != '#')
        pofx[k++] = pop();
    pofx[k] = '\0';
    printf("\n\nGiven Infix Expression: %s \nPostfix Expression: %s \n", infx, pofx);
    getch();
}
