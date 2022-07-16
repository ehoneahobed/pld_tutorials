#include <stdio.h>
#include <string.h>

    /* Define the template of the structure */
    struct gameScore {
        char player_name[20];
        int score;
    };

int main(void){
    char q1[20], q2[20], q3[20], q4[20], q5[20];

    
    printf("Welcome to my Q&A game. Let's see how smart you are. Get started \n");


    /* declare a struct that will be used to store the scores of the player */
    struct gameScore player1;
    /* get player's name */
    printf("What's your name? \n");
    scanf("%s", player1.player_name);
    player1.score = 0;
    
    /* ask question and request an answer */
    printf("Q1: What is the capital City of Ghana? \n");
    scanf("%s", q1);
    printf("Q2: What is the capital City of Nigeria? \n");
    scanf("%s", q2);
    printf("Q3: What is the capital City of Kenya? \n");
    scanf("%s", q3);
    printf("Q4: What is the capital City of Rwanda? \n");
    scanf("%s", q4);
    printf("Q5: What is the capital City of Liberia? \n");
    scanf("%s", q5);
    
    printf("Here is the outcome of your gameplay \n\n");
    /* determine the scores and print the result out to the user */
    if (strcmp(q1, "Accra") == 0 || strcmp(q1, "accra") == 0 || strcmp(q1, "ACCRA") == 0){
        player1.score += 1;
    }
    else {
        printf("You got question 1 wrong. The right answer is Accra \n");
    }
    if (strcmp(q2, "Abuja") == 0 || strcmp(q2, "ABUJA") == 0 || strcmp(q2, "abuja") == 0){
        player1.score += 1;
    }
    else {
        printf("You got question 2 wrong. The right answer is Abuja  \n");
    }
    if (strcmp(q3, "Nairobi") == 0 || strcmp(q3, "nairobi") == 0 || strcmp(q3, "NAIROBI") == 0){
        player1.score += 1;
    }
    else {
        printf("You got question 3 wrong. The right answer is Nairobi  \n");
    }
    if (strcmp(q4, "Kigali") == 0 || strcmp(q4, "kigali") == 0 || strcmp(q4, "KIGALI") == 0){
        player1.score += 1;
    }
    else {
        printf("You got question 4 wrong. The right answer is Kigali  \n");
    }
    if (strcmp(q5, "Monrovia") == 0 || strcmp(q5, "MONROVIA") == 0 || strcmp(q5, "monrovia") == 0){
        player1.score += 1;
    }
    else {
        printf("You got question 5 wrong. The right answer is Monrovia \n");
    }
    
    /** Let's determine the performance and print out the score
     * Scores of 4 and 5 are excellent (msg)--> Congrats, you are a genius
     * Scores of 2 and 3 are good (msg) --> Well done, you can do better
     * Scores of 0 and 1 are poor (msg) --> Oh, what happened? Try again
     */

    printf("You scored %d out of 5 questions. \n", player1.score);
    if (player1.score == 4 || player1.score == 5){
        printf("Congrats %s, you are a genius \n", player1.player_name);
    }
    else if (player1.score == 2 || player1.score == 3)
    {
        printf("Well done %s, you can do better \n", player1.player_name);
    }
    else {
        printf("Oh %s! What happened? Try again \n", player1.player_name);
    }

}