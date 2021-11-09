#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main(void) {
  char adress[1000];
  printf("Enter a IPv4 adress for validity check: ");
  fgets(adress,1000, stdin);

  adress[strlen(adress)-1]='\0';
  char * token = NULL;
  token = strtok (adress, "." );
  int count=0, x=0;
  while (token != NULL) 
  { 
    for (int i=0; i<(strlen(token));i++ )
    {

      if (isdigit(token[i]))
      {
        x=0;
      }
      else 
      {
        x++;
      }
     
    } 
    
  int number=atoi(token);
  if(number<0 || number>255)
    {
      x++;
    }
  token=strtok (NULL, ".");
  count++;
  }
  if(count==4 && x==0 )
  {
    printf("\nValid");
  }
  else 
  {
     printf("\nInvalid");
  }

    return 0;
  }
