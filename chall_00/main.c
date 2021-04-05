#include <stdio.h> 
#include <stdlib.h> 


int main(){
    char buf[0x100]; 
    int overwrite_me; 
    overwrite_me = 0x1337; 
    puts("Now tell me what you want what you really really want!!!!!"); 
    gets(buf); 
    if (overwrite_me == 0x69420){ 
        system("/bin/sh"); 
    } 
    else{ 
        system("Ill tell you what i want what i really really want; ls"); 
    } 
    return 0; 
} 
