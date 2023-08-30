#include <stdio.h> //standard_input_output.header_file;
#include <string.h> //sting.header_file;

int main(void) { //main_start;
    char S[1000000]; //Sentence;
    scanf("%[^\n]s", S); //input_Sentence;
    int SC=1; //Sentence_Count;
    int SS = strlen(S); //Sentence_Strlen;
    if (S[0] == ' '){
        SC--;
        if (SS == 1){ printf("0"); return 0; }
    } //if_Sentence_only_one_space;
    for (int i = 0; i < SS-1; i++) { 
        if (S[i] == ' ') { SC++; } 
    } //Sentence_Count;
    printf("%d", SC); //print_Sentence_Count;

    return 0; //return_0;
} //main_end;
