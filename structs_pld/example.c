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
    struct address giftAddress;
    struct address chimbotoAddress;

    /* assigning values to a struct */
    strcpy(giftAddress.firstName, "Gift");
    strcpy(giftAddress.streetName, "Mayo street");
    giftAddress.longitude = 2.76;
    giftAddress.latitude = 1.54;

    /* assigning values to a struct */
    strcpy(chimbotoAddress.firstName, "Chimboto");
    strcpy(chimbotoAddress.streetName, "Nina street");
    chimbotoAddress.longitude = 5.24;
    chimbotoAddress.latitude = 7.28;

    /* display contact details of a user when firstname is provided */
    printf("Who are you looking for? \n");
    char name[20];
    scanf("%s", name);

    printf("Here is the contact you requested for: \n\n");
    
    /* check if name exists in phone and display its contact details */
    if (strcmp(giftAddress.firstName, name) == 0){
        /* display contact details of Gift */
        printf("Name: %s\n", giftAddress.firstName);
        printf("Street Name: %s\n", giftAddress.streetName);
        printf("Longitude: %f\n", giftAddress.longitude);
        printf("Latitude: %f\n", giftAddress.longitude);
    }
    else if (strcmp(chimbotoAddress.firstName, name) == 0){
        printf("Name: %s\n", chimbotoAddress.firstName);
        printf("Street Name: %s\n", chimbotoAddress.streetName);
        printf("Longitude: %f\n", chimbotoAddress.longitude);
        printf("Latitude: %f\n", chimbotoAddress.longitude);
    }
    else {
        printf("This contact doesn't exist \n");
    }

}