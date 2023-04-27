#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    printf("Enter the number of arguments: %d\n", argc);
    for(int i = 0; i < argc; i++){
        printf("Argument %d : %s\n", i, argv[i]);
    }
    if(argc>1 && strcmp(argv[1], "-v")==0){
        printf("mode enabled\n");
    }
    return 0;
}
