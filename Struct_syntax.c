#include <stdio.h>
#include <string.h>
    int main(void){
        struct userdata{
            long int social_num;
            long int phone;
            char name[30];
            int age;
        };
        
        struct userdata data;
        
        printf("Enter UserName:\n");
            fgets(data.name,30,stdin);
                printf("Enter User's Social Number:\n");
                    scanf("%li", & data.social_num);
                        printf("Enter User's Phone Number:\n");
                            scanf("%li", & data.phone);
                                printf("Enter User's Age:\n");
                                    scanf("%i", & data.age);
        printf("-----USERDATA-----\n");
        printf("Name:%s\n", data.name);
        printf("Social Number:%li\n", data.social_num);
        printf("Phone Number:%li\n", data.phone);
        printf("Age:%i\n", data.age);
        printf("-------------------------\n");

            return 0 ;                       
        }
    