#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAXS 15000
#define true 1
#define false 0

int main(){
    char digit, number[MAXS] = { 0 }; // initialize number length == 0
    while(true){
        scanf("%c %s", &digit, number); getchar();
        if(digit == '0' && strcmp("0", number) == 0)    break;
        int numLen = strlen(number), ch = false;
        // if I see a character == digit, keep going.
        // if I see a character != digit, depending on var ch, I'll print it. 
        // if I see a character == '0' and till this moment I didn't printed any other
        // character (i.e 0's at the left of the string) just keep going.
        for(int i = 0; i < numLen; i++){
            if( (number[i] == digit) || (number[i] == '0' && !ch) ){
                continue;
            }else{
                if(!ch) ch = true;
                printf("%c", number[i]);
            }
        }
        if(!ch)
            printf("0");

        printf("\n");
    }

    return 0;
}