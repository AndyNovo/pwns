#include <stdio.h> 
#include <stdlib.h> 



int main(){ 
   int overwrite_me; 
   int overwrite_me_too; 

   char buf[0x100]; 
   puts("Obi Wan has trained you well...");  
   overwrite_me = 0x1337; 
   overwrite_me_too = 0x69696969;  
   fgets(buf, 0x118, stdin); 
   
   if (overwrite_me == 0x69696969 && overwrite_me_too == 0x1337){ 
       puts("My powers have doubled since the last time we met"); 
       system("/bin/sh"); 
   }  
   else{ 
       puts("But you are not a Jedi yet!"); 
   } 


} 
