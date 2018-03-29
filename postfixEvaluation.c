#include <stdio.h>
#define SIZE 50

int s[SIZE];
int top = -1;

push(int a)
{
  s[++top] = a;
}

int pop()
{
  return (s[top--]);
}

int main()
{
  char a[50], ch;
  int i = 0, op1, op2;
  printf("\n\t\tPOSTFIX EVALUATION \n\nRead the Postfix Expression :");
  scanf("%s", a);
  while ((ch = a[i++]) != '\0')
  {
    if (isdigit(ch))
      push(ch - '0');
    else
    {
      op2 = pop();
      op1 = pop();
      switch (ch)
      {
      case '+':
        push(op1 + op2);
        break;
      case '-':
        push(op1 - op2);
        break;
      case '*':
        push(op1 * op2);
        break;
      case '/':
        push(op1 / op2);
        break;
      }
    }
  }
  printf("\n Result after Evaluation: %d\n", s[top]);
}
