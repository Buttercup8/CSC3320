#include <stdio.h>

#include <stdlib.h>

#include <string.h>

int main()
{

//Declare the necessary variables.
int score=0, uppercase_count=0, lowercase_count=0, numbers_count=0;
char ch;

//Prompt the user to enter a password.
printf("Enter a password :");

//While loop calculates the length, the count of lowercase,

while ((ch = getchar()) != '\n')
{

//Count the lower case characters.
if(ch>='a' && ch<='z')
{
lowercase_count++;
}
//Count the number of upper case characters.
if(ch>='A' && ch<='Z')
{
uppercase_count++;
}

//Count the number of integers.
if(ch>='0' && ch<='9')
{
numbers_count++;
}
}

if(lowercase_count==0)
{
score+=20;
}

if(uppercase_count==0)
{
score+=20;
}

if(numbers_count==0)
{
score+=20;
}

//Display the score.
printf("\nScore = %d\n",(-score));

//Check whether the password is safe or unsafe.
if(score>30)
{
printf("The password is unsafe! Please reset.\n");
}

else
{
printf("The password is safe.\n");
}

return 0;

}
