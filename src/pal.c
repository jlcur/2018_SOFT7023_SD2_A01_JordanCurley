
//--------------------------------------------------
// INCLUDE SECTION
//--------------------------------------------------
#include <math.h>
#include "pal.h"

//--------------------------------------------------
// gen_num
//--------------------------------------------------
int gen_num(int lb, int ub) {
    //1. We create the output variable with an initial value.
    int res = 0;

    //2. We assign num to a random value in the desired range
    res = (rand() % (ub - lb)) + lb;

    //3. We return the output variable
    return res;
}

//--------------------------------------------------
// my_getchar
//--------------------------------------------------
char my_get_char() {
    //1. We create the output variable with the value the user has input by keyboard
    char res = getchar();

    //2. We discard any extra character the user has input by keyboard
    boolean finish = False;
    char dummy_char = ' ';

    while (finish == False) {
        dummy_char = getchar();
        if (dummy_char == '\n')
            finish = True;
    }

    //3. We return the output variable
    return res;
}

//--------------------------------------------------
// initialise_array
//--------------------------------------------------
void initialise_array(int a[6], int num) {

    int number;
    int index = 5;

    do {
        number = num % 10;
        a[index] = number;
        num = num / 10;
        index--;
    } while (num > 0);


}

//--------------------------------------------------
// is_pal
//--------------------------------------------------
boolean is_pal(int a[6]) {
    boolean b = True;

    return b;
}

//--------------------------------------------------
// ask_for_command
//--------------------------------------------------
char ask_for_command() {
    char res = ' ';

    printf("\nNEW MOVEMENT: Enter one of the commands below: ");
    printf("\nValid commands: a     d     w     x \n");
    scanf(" %c" ,res);
    return res;
}

//--------------------------------------------------
// process_movement
//--------------------------------------------------
void process_movement(int a[6], int** p_p, int* p_nm, char c){

}

//--------------------------------------------------
// print_status
//--------------------------------------------------
void print_status(int a[6], int* p, int nm) {

    char c[6] = {' ', ' ', ' ', ' ', ' ', ' '};
    c[*p] = '^';
    printf("----- Game Status -----");
    printf("\nNumber = { %d %d %d %d %d %d }" ,a[0], a[1], a[2], a[3], a[4], a[5]);
    printf("\n           %c %c %c %c %c %c  ", c[0], c[1], c[2], c[3], c[4], c[5]);
    printf("\nNumber of moves = %d" ,nm);
    printf("\n-----------------------");

}

//--------------------------------------------------
// user_game_palindrome
//--------------------------------------------------
void user_game_palindrome(int pal_num) {



    int nm = 0;

    // Declare and initialise the array
    int a[6];
    initialise_array(a, pal_num);

    int startElem = gen_num(0,6); // Generate the random starting position
    int* p = &a[startElem]; // Assign the pointer to the starting element
    

    print_status(a, p, nm);

    do {


    } while (is_pal(a) != True);
}

