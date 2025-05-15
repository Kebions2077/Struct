#include <stdio.h>
#include <string.h>
    struct users{
        char name[30];
        int age;
        long int phone;

    };
    struct users user[2];

    int main(void){
        int x,y;
        x=y=0;
        printf("---Creating An User---\n");
        for(x=0;x<2;x++){
            printf("Your name:\n");
                scanf("%s", user[x].name);
                    printf("Your Age:\n");
                        scanf("%i", &user[x].age);
                            printf("Your Phone Number:\n");
                                scanf("%li",& user[x].phone);
                                printf("---------------------------\n");
        }
        printf("------------Users----------\n");
        for(y=0;y<2;y++){
            printf("--------------------------------\n");
            printf("User %i\n", y);
            printf("Name:%s\n", user[y].name);
            printf("Age:%i\n", user[y].age);
            printf("Phone Number:%li\n", user[y].phone);
            printf("--------------------------------\n");
        }
        return 0;
    }