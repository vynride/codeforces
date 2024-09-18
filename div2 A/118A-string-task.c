#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main()
{
  char A[101];
  scanf("%s", A);
  
  int len = strlen(A);
  
  for (int i = 0; i < len; i++)
  {
    // consider a, e, i, o, u, y as vowels
    char temp = tolower(A[i]);
    if (temp == 'a' || temp == 'e' || temp == 'i' || temp == 'o' || temp == 'u' || temp == 'y')
    {
      continue;
    }
    
    else 
    {
      printf(".");
      printf("%c", temp);
    }
  }
  printf("\n");
  
  return 0;
}