void reverse(char *str) 
{ 
   if (*str) 
   { 
       reverse(str+1); 
       printf("%c", *str); 
   } 
} 