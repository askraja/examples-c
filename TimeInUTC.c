#include <stdio.h>                                                              
#include <time.h>                                                               
                                                                                
int main(void)                                                                  
{                                                                               
   time_t ltime;                                                                
   time(&ltime);                                                                
   printf ("Coordinated Universal Time is %s\n",                                
            asctime(gmtime(&ltime)));                  
   return 0;
}
