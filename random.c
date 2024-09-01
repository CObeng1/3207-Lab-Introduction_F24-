// randchar()
// returns a random character from 'A-Z'. implement code into 
// main program.

char randchar() {
    // generate a random number between 0 - 25
    int random_number = rand() % 26;

    // converting to a character in range a - z
    return 'A' + random_number;
}

//initializing function to seed random num generator
void init_random() {
    strand(time(NULL));
}
