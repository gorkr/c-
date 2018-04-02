//lineWord.c make a line word.
#include<stdio.h>
#define IN 1
#define OUT 0

int main(){
    int c,state;
    c=0;
    state = IN;
    while((c=getchar())!=EOF){
        if(c==' '|| c=='\n'|| c=='\t'){
            if(state){
                putchar('\n');
            }
            state = OUT;       
        }else{
            putchar(c);
            state = IN;
        }
    }
    return 0;
}
