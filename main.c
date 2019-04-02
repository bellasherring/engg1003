#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char encrypt(char *word); //function prototype that will eventually encrypt something

int main()
{
    char encoded;
    char word[20]="HELLO"; //initialises string as break
    printf("%s\n", word); //prints the string before its encoded
    
    //scanf for key here so user can choose encryption shifting value?
    
    //encoding function 
    encoded=encrypt(word);
    
    return 0;
}

char encrypt(char *word) //function definition which doesnt do anything yet bc idk how
{
    char i=0;
    int key=11; //11 is the max to add, before characters are used instead of letters
    while(word[i] > 20)
    {
        word[i]=word[i]+key;
        printf("%c", word[i]);
        i++;
    }
}