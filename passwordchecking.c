#include <stdio.h>
#include <string.h>
int main() 
{
    char my_uname[] = "Harshita";
    char my_pswd[] = "Harry";
    char uname[50];
    char pswd[50];
    printf("Enter username: ");
    scanf("%s", &uname);
    if (strcmp(my_uname,uname) == 0)
    {
        for (int attempt = 0; attempt < 3; attempt++) 
        {
            printf("Enter password: ");
            scanf("%s", &pswd);
            if (strcmp(my_pswd, pswd) == 0) 
            {
                printf("Access granted.\n");
                return 0;
            } 
            else 
            {
                printf("Incorrect password.\n");
                if (attempt < 2) 
                {
                    printf("You have %d attempt(s) left.\n", 2 - attempt);
                }
            }
        }
        printf("Access denied. Too many incorrect attempts.\n");
    }
    else 
    {
        printf("Incorrect username. Access denied.\n");
    }

    return 0;
}