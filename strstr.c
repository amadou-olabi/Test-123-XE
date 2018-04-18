#include <stdio.h>
#include <string.h>
int main()
{
   const char haystack[20] = "154446";
   const char needle[10] = "15446";
   char *ret;
   ret = strstr(haystack, needle);
   if(ret)
   printf("The substring is: %s\n", ret);
   else
    printf("Substring Does Not Exist in the Main String !!!!\n");

   return(0);
}
