#include <stdlib.h> 
#include <stdio.h> 

void win(){ 
    system("/bin/sh"); 

} 

void vuln(){
    char buf[0x69]; 
    gets(buf); 


} 

int main(){ 
    puts("Winning isn't everything, it's the only thing"); 
    vuln(); 
    return 0; 
} 
