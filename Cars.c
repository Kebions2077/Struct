#include <stdio.h>
#include <string.h>


#define number_cars 20
struct car_shop{
    char brand[30],color[30];
    int year;
    float price;
};
    struct car_shop car[number_cars];
    
     
void cars(void);
void read_value(void);
void read_brand(void);


void cars(void){
    int x;
    x=0;

     for(x=0;x<number_cars;x++){
        printf("Car %i\n",x);
             printf("Brand:\n");
             fflush(stdin);
             fgets(car[x].brand,30,stdin);
                printf("Year:\n");
                scanf("%i", & car[x].year);
                     printf("Price:\n");
                    scanf("%f", & car[x].price);
                        printf("Color:\n");
                        fflush(stdin);   
                         fgets(car[x].color,30,stdin);
                                                
    }
}
void read_value (void){
    float search_price;
    int y;
    y=0;
    printf("Enter the price you want to search in the database:\n");
        scanf("%f", & search_price);
        for (y=0;y<number_cars;y++){
            if(search_price == car[y].price){
                printf("Brand: %s\n",car[y].brand);
                printf("Year:%i\n", car[y].year);
                printf("Color:%s", car[y].color);
            }
        }
    }  
void read_brand(void){
    char brand_search[30];
    int v;
    int t[20];
    v=0;
    
    printf("Enter Brand to search:\n");
        fflush(stdin);
        fgets(brand_search,30,stdin);
        for(v=0;v<number_cars;v++){
            t[v]=strcmp(brand_search,car[v].brand);
        
        if(t==0){
            printf("Brand: %s\n",car[v].brand);
                printf("Year:%i\n", car[v].year);
                printf("Color:%s", car[v].color);
        }

        }



}   
    
int main(void){
    int op;
    printf("---Menu---\n");
    printf("1)Sort By Price\n");
    printf("2)Sort By Brand\n");
    printf("---------------------\n");
    printf("Select an option:\n");
        scanf("%i", & op);
        switch (op){
            case 1:
            printf("Sort by price:\n");
            cars();
            read_value();
            break;
            case 2: 
                printf("Sort by Brand\n");
                cars();
                read_value();
                break;
            default:
                printf("Invalid entry");    
        }
return 0;
}



