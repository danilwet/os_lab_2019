#include "revert_string.h"
#include <string.h>

void RevertString(char *str)
{
    char temp;
    int c;

    c= strlen(str)/2;

    
	for(int i = 0; i < c; i++) {
    temp=str[i];
    str[i]=str[strlen(str)-i-1];
    str[strlen(str)-i-1]=temp;
    
    }
}