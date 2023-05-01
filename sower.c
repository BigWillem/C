/* 
    program that makes a directory tree for the exercises and theory of the book "C a modern approach"

    made by Willem Friederich 
    
    compile this file in the folder you want the tree in, then simply run the .exe 
    will NOT remove existing files, so can also be used to expand on an incomplete tree 

*/


#include <stdio.h>
#include <string.h>
#include <process.h>


int main(void)
{
    int i,j,k; 
    system("mkdir exercises"); 
    for(i = 1 ; i <28 ; i++)
    {   
        char buffer[20]; 
        sprintf(buffer, "mkdir exercises\\c%d", i);
        system(buffer);
        char bufferex[30];
        sprintf(bufferex, "mkdir exercises\\c%d\\exercises",i); 
        system(bufferex); 
        char bufferpr[29];
        sprintf(bufferpr, "mkdir exercises\\c%d\\projects",i);
        system(bufferpr);
    }

    system("mkdir exercises.exe"); 
    for(i = 1 ; i <28 ; i++)
    {   
        char buffer[24]; 
        sprintf(buffer, "mkdir exercises.exe\\c%d", i);
        system(buffer);
        char bufferex[34];
        sprintf(bufferex, "mkdir exercises.exe\\c%d\\exercises",i); 
        system(bufferex); 
        char bufferpr[33];
        sprintf(bufferpr, "mkdir exercises.exe\\c%d\\projects",i);
        system(bufferpr);
    }
    
    system("mkdir theory"); 
    for (i = 1 ; i <28; i++)
    {
        char bufferth[17]; 
        sprintf(bufferth, "mkdir theory\\c%d",i); 
        system(bufferth);
    }
     
    system("mkdir theory.exe"); 
    for (i = 1 ; i <28; i++)
    {
        char bufferth[21]; 
        sprintf(bufferth, "mkdir theory.exe\\c%d",i); 
        system(bufferth); 
    }

     
     

    return 0; 
}