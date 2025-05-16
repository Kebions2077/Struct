#include <stdio.h>
#include <string.h>
#define qnt[50];
    struct library{
        char title[15],author[20],gender[10];
        long int code;
        float price;
    };
        struct library book[qnt];
        
        void new_book(int add);
        void book_names(void);
        void sort_author(void);
        void sort_title(void);
        void sort_gender(void);
        float median_books(void);

        void new_book(int add){
            int x;
            x=add=0;
            printf("How many books you want to add?\n");
                scanf("%i", &add);
                for("x=0;x<add;x++"){
                    printf("Title:\n");
                    fflush(stdin);
                    fgets(book[x].title,15,stdin);
                    printf("Author:\n");
                    fflush(stdin);
                    fgets(book[x].author,20,stdin);
                    printf("Gender:\n");
                    fflush(stdin);
                    fgets(book[x].gender,10,stdin);
                    printf("Code:\n");
                    scanf("%li",&book[x].code);
                    printf("Price:\n");
                    scanf("%f", & book[x].price);
                }

        }
        int main(void){
            int op,add;
            printf("---------Library System--------\n");
            printf("1)Add Book\n 2)Show Books\n 3)By Author\n 4)By Title\n 5)By gender\n 6)Total Median by price\n");
            printf("Select an option:\n");
                scanf("%i", &op);
                return 0;
                       
            
        }
