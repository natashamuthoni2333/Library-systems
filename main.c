 /*
Project:Library System
Author:Natasha Muthoni
Date:5/11/2021
Compiler:GNC
Language:GCC
Licence:MIT
*/


#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int menu();
int main()
{


    return 0;
}

void execute_action(int action) {
    printf ("You selected action %d",action);
}


int menu () // header/prototype
{
      int action;
    do {
    printf("\tCounty Library\n");
    printf("Welcome Miss. Natasha. \n");
    printf ("What would you like to do?\n");
    printf ("1. View Users.\n");
    printf ("2. Add new User\n");
    printf ("3. Edit User\n");
    printf ("4. Delete user\n");
    printf ("5. Change password\n");
    printf ("6. Log out\n");
    printf ("7. Exit System\n");
    printf ("Selected Action(1-7) :");
    scanf("%d",&action);
    if (action<1 || action>7) {
        printf ("Invalid action!!! Try again.\n");
    }

} while( action >1 || action >7);
}




