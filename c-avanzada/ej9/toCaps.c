#include <stdio.h>
#include <ctype.h>

char* toCaps(char* string){
    char *str = "";
    while(*string != '\0'){
        printf("\n%c",*string);
        if(islower(*string)){
            *str = *string + ('A' - 'a');
            printf("\n%c",tolower(*string));
        }
        else{
            *str = *string;
            printf("Else:\n%c",*string);
        }
        
        string ++;
        str ++;
    }
    return str;
}


int main(){
    char *word = "Hola";
    printf("%s", word);
    printf("%s", toCaps(word));
    return 0;
}