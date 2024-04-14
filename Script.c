#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i = 100;
    do{
        printf("\t\t\t\t DCAT \t\t\t\t\n");
        printf("\t\t\t\tProgramed by Alok Raj\n\n\n\n");
        printf("Choose any one of then.(1, 2) and q for quit\n");
        printf("1. Listen On given Port\n");
        printf("2. Connect on given port\n");
        printf("q. press q for quit.\n\n");
        printf(">");
        char choice;
        scanf("%c", &choice);

        int port = 0;

        if (choice == '1')
        {
            printf("Enter your Port Number.\n");
            printf(">");
            scanf("%d", &port);
            char arr[20];
            sprintf(arr,"nc -lvp %d",port);
            system(arr);
        }
        else if (choice == '2')
        {
            char ip[16], com[20];
            printf("Enter IP Address\n");
            printf(">");
            scanf("%15s",&ip);
            printf("Enter Port Number.\n");
            printf(">");
            scanf("%d",&port);
            sprintf(com, "nc %s %d",ip, port);
            system(com);
        }
        else if (choice == 'q')
        {
            printf("\n\tThankyou For Using This Script\n\n");
            goto end;
        }
        else if (choice == 'Q')
        {
            printf("\n\tThankyou For Using This Script\n\n");
            goto end;
        }
        else
        {
            printf("Enter a correct option\n");
        }
    } while (i == 100);
end:

    return 0;
}