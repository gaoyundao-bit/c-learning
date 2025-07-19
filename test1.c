 #include <stdio.h>
int main()
{
    char suit = 'H';
    switch(suit) 
    {
        case 'C':
            puts("梅花(Clubs)");
            break;
        case 'D':
            puts("方块(Diamonds)");
            break;
        case 'H':
            puts("红心(Hearts)");
            break;
        default:
            puts("黑桃(Spades)");
    }
    return 0;
}