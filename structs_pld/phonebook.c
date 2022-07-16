#include <stdio.h>
#include <string.h>

/* defining the template of address struct */
struct address {
    char firstName[20];
    char streetName[20];
    float longitude;
    float latitude;
};

int main(void){
    /* declaring a struct */
    struct address contact[2];

    /* assigning values to a struct */
    strcpy(contact[0].firstName, "Gift");
    strcpy(contact[0].streetName, "Mayo street");
    contact[0].longitude = 2.76;
    contact[0].latitude = 1.54;

    /* assigning values to a struct */
    strcpy(contact[1].firstName, "Chimboto");
    strcpy(contact[1].streetName, "Nina street");
    contact[1].longitude = 5.24;
    contact[1].latitude = 7.28;

    /* display contact details of a user when firstname is provided */
    printf("Who are you looking for? \n");
    char name[20];
    scanf("%s", name);

    printf("Here is the contact you requested for: \n\n");
    
    /* check if name exists in phone and display its contact details */
    if (strcmp(contact[0].firstName, name) == 0){
        /* display contact details of Gift */
        printf("Name: %s\n", contact[0].firstName);
        printf("Street Name: %s\n", contact[0].streetName);
        printf("Longitude: %f\n", contact[0].longitude);
        printf("Latitude: %f\n", contact[0].longitude);
    }
    else if (strcmp(contact[1].firstName, name) == 0){
        printf("Name: %s\n", contact[1].firstName);
        printf("Street Name: %s\n", contact[1].streetName);
        printf("Longitude: %f\n", contact[1].longitude);
        printf("Latitude: %f\n", contact[1].longitude);
    }
    else {
        printf("This contact doesn't exist \n");
    }
}