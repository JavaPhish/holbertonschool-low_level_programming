#include<stdio.h>
/*
 *Return 0 
*/
int main(void)
{
printf("%s%d%s", "Size of a char: ", sizeof(char), " byte(s)\n");
printf("%s%d%s", "Size of an int: ", sizeof(int), " byte(s)\n");
printf("%s%d%s", "Size of a long int: ", sizeof(long), " byte(s)\n");
printf("%s%d%s", "Size of a long long int: ", sizeof(long long), " byte(s)\n");
printf("%s%d%s", "Size of a float: ", sizeof(float), " byte(s)\n");
return (0);
}
