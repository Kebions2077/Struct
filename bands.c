#include <stdio.h>
#include <string.h>

void info(void);
void rank(void);
void search_gen(void); 
void search_band(void);

struct bands {
    char name[30];
    char gender[30];
    int position;
    int members;
};

struct bands band[5];

void info(void){
    for(int x=0; x<5; x++){
        printf("Enter Rank Position 1-5:\n");
        scanf("%i", &band[x].position);
        printf("Enter Band Name:\n");
        scanf("%s", band[x].name);
        printf("Gender:Rock,Jazz,Prog,Classical\n");
        scanf("%s", band[x].gender);
        printf("Number of band members:\n");
        scanf("%i", &band[x].members);
    }
}

void rank(void){
    // Sort bands by position first
    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
            if(band[i].position > band[j].position){
                struct bands temp = band[i];
                band[i] = band[j];
                band[j] = temp;
            }
        }
    }
    
    // Display sorted bands
    for(int z=0; z<5; z++){
        printf("Position %d:\n", band[z].position);
        printf("Name: %s\n", band[z].name);
        printf("Gender: %s\n", band[z].gender);
        printf("Number of Members: %i\n", band[z].members);
        printf("------------------------------------\n");
    }
}

void search_gen(void){
    char search[30];
    printf("Enter gender to search (Rock,Jazz,Prog,Classical): ");
    scanf("%s", search);
    
    int found = 0;
    for(int e=0; e<5; e++){
        if(strcmp(band[e].gender, search) == 0){
            printf("Band found:\n");
            printf("Name: %s\n", band[e].name);
            printf("Position: %d\n", band[e].position);
            printf("Members: %d\n", band[e].members);
            printf("------------------------------------\n");
            found = 1;
        }
    }
    if(!found){
        printf("No bands found with gender: %s\n", search);
    }
}

void search_band(void){
    char search[30];
    printf("Enter the band name you want to search:\n");
    scanf(" %[^\n]", search); // Read entire line including spaces
    
    int found = 0;
    for(int i=0; i<5; i++){
        if(strcmp(band[i].name, search) == 0){
            printf("Band found:\n");
            printf("Name: %s\n", band[i].name);
            printf("Gender: %s\n", band[i].gender);
            printf("Position: %d\n", band[i].position);
            printf("Members: %d\n", band[i].members);
            printf("------------------------------------\n");
            found = 1;
            break;
        }
    }
    if(!found){
        printf("Band '%s' not found in the list.\n", search);
    }
}

int main(void){
    info();

    printf("|-------------Band List:----------------|\n");
    printf("----------------------------------------\n");
    for(int y=0; y<5; y++){
        printf("Band %d:\n", y+1);
        printf("Name: %s\n", band[y].name);
        printf("Gender: %s\n", band[y].gender);
        printf("Number of members: %i\n", band[y].members);
        printf("------------------------------------\n");
    }

    int op;
    do {
        printf("\n-----Music_Data-----\n");
        printf("1) Rank\n");
        printf("2) Gender Search\n");
        printf("3) Band Search\n");
        printf("4) Exit\n");
        printf("Enter option: ");
        scanf("%i", &op);
        
        switch(op){
            case 1:
                rank();
                break;
            case 2:
                search_gen();
                break;
            case 3:
                search_band();
                break;
            case 4:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid option. Please try again.\n");
        }
    } while(op != 4);
    
    return 0;
}