bool isValid(char * s)
{char stack[10000];
int top = -1;
int i = 0;
while(s[i] != '\0')
    {
         if(s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            stack[++top] = s[i];
        }
        else
        {
            if(top == -1)
                return false;

            if((s[i] == ')' && stack[top] == '(') ||
               (s[i] == ']' && stack[top] == '[') ||
               (s[i] == '}' && stack[top] == '{'))
            {
                top--;
            }
            else
            {
                return false;
            }
        }
 i++;
    }return (top == -1);
}