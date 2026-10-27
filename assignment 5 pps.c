#include <stdio.h>
#include <string.h>

int main()
{
char str1[100], str2[100];
int choice, result;

printf(" Enter first string:");
scanf("%s",str1);

printf(" Enter second string:");
scanf("%s",str2);

do
{ 
printf("\n\n---- STRING OPERATIONS MENU -----");
printf("\n1. Find Length of String");
printf("\n2. Copy String");
printf("\n3. Concatenate Strings");
printf("\n4. Compare Strings");
printf("\n5. Substring");
printf("\n6. Exit");

printf("\n\nEnter your choice:");
scanf("%d", &choice);

switch(choice)
{
    case 1:
       printf("\nLength of first string =%lu", strlen(str1));
       break;
    case 2:
       strcpy(str2, str1);
       printf("\nAfter copying, second string =%s", str2);
       break;
    case 3:
       strcat(str1, str2);
       printf("\nAfter concatenation =%s", str1);
       break;
    case 4:
       result = strcmp(str1, str2);
       
       if (result ==0)
           printf("\nBoth Strings are equal.");
           else if(result>0)
               printf("\nFirst String is greater than second string.");
           else
               printf("\nSecond string is greater than the first string.");
           break;
    case 5: 
       if (strstr(str1 ,str2)!=NULL)
           printf("\nFound.");
           else
              printf("\nNot Found.");
    case 6:
       printf("\nExiting Program...");
       break;
    default :
       printf("\nInvalid choice ! Please enter a valid choice.");
}       
}while(choice !=6);
}