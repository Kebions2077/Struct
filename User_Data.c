#include <stdio.h>
#include <string.h>
    struct Adress{
        char house_type [20];
        int address;
        long int postal_code;
        char Province[30];
        char country[30];
        
    };
    struct Data{
        char name[30];
        char gender[20];
        long int phone_number;
        
    };
    struct Birth_Date{
        int month;
        int day;
        int year;
    };
    struct User_data {
        struct Adress location;
        struct Data identification;
        struct Birth_Date age;
    };
        struct User_data DATA;

        int main(void){
            printf("Enter Your Name:\n");
                fgets (DATA.name,30,stdin);
                    printf("Gender:\n");
                        fgets(DATA.gender,20,stdin);
                            printf("Phone Number:\n");
                                scanf("%li", & DATA.phone_number);
                
                                printf("Enter Your Birth date:\n");
                        printf("Month:");
                            scanf("%i",& DATA.month);
                                printf("Day:");
                                    scanf("%i", & DATA.day);
                                        printf("Year:");
                                            scanf("%i", & DATA.year); 
            printf("Enter Your House Type: House,Apartment:\n");
                 fgets (DATA.house_type,20,stdin); 
                    printf("House Adress:");
                        scanf("%i", & DATA.address);
                            printf("Postal Code:");
                                scanf("%li", & DATA.postal_code);
                                    printf("Enter The Province:");
                                        fgets(DATA.Province,30,stdin);
                                            printf("Country:");
                                                fgets(DATA.country,30,stdin);
        printf("---------------------------UserData---------------------------\n");
        printf("Name:%s\n",DATA.name);
        printf("Gender:%s\n",DATA.gender);
        printf("Phone:%li\n",DATA.phone_number);
        printf("House Type:%s\n",DATA.house_type);
        printf("Address:%i",DATA.address);
        printf("Postal Code:%li",DATA.postal_code);
        printf("Province:%s",DATA.Province);
        printf("Country:%s",DATA.country);
        printf("Birth Date: %i/%i/%i",DATA.month,DATA.day,DATA.year);
        printf("----------------------------------------------------\n");
        return 0;               
        }