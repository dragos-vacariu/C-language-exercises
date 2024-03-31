#include<stdio.h>

char LowerCapitalLetter(char);

main() // a function with an unspecified return type will have int as return type by default
{
    char ch;
    ch = 'A';
    printf("The letter is: ");
    printf("%c\n", ch >= 'A' && ch <= 'Z' ? ch + 'a' - 'A':ch); //nasty code;
    //Equivalent to: if(ch >= 'A' && ch <= 'Z') {ch += (97-65;) } else {ch = ch;}
    //so if ch is a big letter, and it wants to be converted to a small letter ch must be added by 32
    //because in the ascii table the difference between an A and an a is 32, identical for other letter as well
    printf("Now the letter is: ");
    printf("%c\n", ch >= 'A' && ch <= 'Z' ? ch : ch + 'a' - 'A'); //nasty code;
    //Equivalent to: if(ch >= 'A' && ch <= 'Z') {ch = ch) } else {ch += (97-65);}
    printf("Enter a letter for conversion: ");
    scanf("%c", &ch);
    printf("The converted letter is: %c\n", LowerCapitalLetter(ch));
    //Keep the window opened;
    scanf("%c", &ch);
    return 0;
}

//Writing a function for the same thing
char LowerCapitalLetter(char a)
{
    if (a>=65 && a<=90)
    {
        a+=32;
    }
    else if (a>=97 && a<=122)
    {
        a-=32;
    }
    //Where 32 is just the difference between "capital A and lower a" in ASCII table;
}
