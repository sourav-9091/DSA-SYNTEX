// ALL THE FOUR METHODS OF SCANF

//using "gets(charArray name)" //dynamic size therefore may be buffer overflow

#include <stdio.h>
int main()
{
   char str[20];
   gets(str);
   printf("%s", str);
   return 0;
}

//using "fget(char *str, int size, FILE* stream (stdin))"


#include <stdio.h>
#define MAX_LIMIT 20
int main()
{
   char str[MAX_LIMIT];
   fgets(str, MAX_LIMIT, stdin);
   printf("%s", str);
 
   return 0;
}

//Using "scanf("%[^\n]%*c", str)"

#include <stdio.h>
int main()
{
   char str[20];
   scanf("%[^\n]%*c", str);
   printf("%s", str);
 
   return 0;
}

// Using %[^\n]s inside scanf


#include <stdio.h>
 
int main() {
    char str[100];
      scanf("%[^\n]s",str);
      printf("%s",str);
    return 0;
}