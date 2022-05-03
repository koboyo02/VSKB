#ifndef   FN_OUTPUT
#define   FN_OUTPUT
#include <unistd.h>

void my_print(const char *str)
{
    unsigned int i = 0;
    while('\0' != str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

void clear_out(void)
{
    write(STDOUT_FILENO, "\033[H\033[2J\033[3J", 12);
}

void show_banner(void)
{
   my_print("\033[1;31m");
    my_print("                                                     __   ___. \n");    
    my_print("                                        ___  _______|  | _\\_ |__ \n"); 
    my_print("                                        \\ \\/ /  ___/  |/  /|  __ \\ \n");
    my_print("                                         \\   /\\___ \\|    <| \\_\\ \\ \n");
    my_print("                                          \\_//____  >__|_ \\|___  / \n");
    my_print("                                                  \\/     \\/    \\/ \n\n");
    my_print("\033[0;37m");
}

void show_pegi_banner(void)
{
    my_print("\n\n");
    my_print("      &GBBBBBBBBBBBBBBBBBBBBBBBB####\n");
    my_print("      #PPGGGPYYY5GPPPGGGPYYY5PGGGGG#\n");
    my_print("      #PGPPY~   !GGGGGJ^.    .^JGGP#\n");
    my_print("      #G5..     !GGGG7    ~^    ?GP#\n");
    my_print("      #PP??7    !GGGG:   ^GG:   ^GP#\n");
    my_print("      #PGGG5    !GGGG7   :55.   ?GP#\n");
    my_print("      #PGGG5    !GGGGG7        ?GGP#\n");
    my_print("      #PGGG5    !GGGG?.   ~^   :JGP#\n");
    my_print("      #PGGG5    !GGGP.   ~GG^   :PP#\n");
    my_print("      #PGGG5    !GGG5    ~GG^   .PP#\n");
    my_print("      #PGGG5    !GGGG~    ::    !GP#\n");
    my_print("      #PGGG5....7GGGGP7:.    .^?PGP#\n");
    my_print("      #PPPPPPPPPPPPPPPGPP5555PPGPPP#\n");
    my_print("      &BBBBBBBBBBBBBBBBBBBBBBBBBBBB&\n\n");
}

void show_wasted_banner(void)
{
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&&&@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&555555&@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&5YYYY5&@
// @G55555B@@G55555B@@G5555P#G5555555555PG@BP5555555555P##G55555G#######&BP5555555555P&&P5555555YYYY5&@
// @BYYYYYP@&5YYYYYP@@5YYYYPBYYYYYYYYYYYYY#5YYYYYYYYYYYYP5YYYYYYYYYYYYY5#5YYYYYYYYYYYYBGYYYYYYYYYYYY5&@
// @&5YYYY5&#YYYY5Y5&#YYYYYB#PPPPPG#5YYYY5#5YYYY5#BPPPPPGP5YYYYY5PPPPPPG#5YYYY5#GYYYYYBGYYYYYG#5YYYY5&@
// @@PYYYYYBGYYYYYYYBGYYYY5&@BGGGGGG5YYYY5#5YYYY5GGGGGGB&@GYYYYYB@GGGGGG#5YYYY5BPYYYYYBGYYYYYB@5YYYY5&@
// @@BYYYYYP5YY55YYYP5YYYYP@BYYYYYYYYYYYY5#PYYYYYYYYYYYYG@GYYYYYB@5YYYY5#5YYYYYYYYYYYYBGYYYYYB&5YYYY5&@
// @@&5YYYYYYYYPBYYYYYYYYYB@BYYYYYP#5YYYY5&&BGGGGBPYYYYYG@GYYYYYB@5YYYY5#5YYYY5GGGGGGG#GYYYYYB@5YYYY5&@
// @@@GYYYYYYYYG@5YYYYYYY5&@BYYYYYP#5YYYY5#PPPPPP#GYYYYYG@GYYYYYGB5YYYY5#5YYYY5#GPPPPPBGYYYYYGB5YYYY5&@
// @@@#YYYYYYYY#@GYYYYYYYP@@BYYYYYYYYYYYYY#5YYYYYYYYYYYYG@GYYYYYYYYYYYY5#5YYYYYYYYYYYYBGYYYYYYYYYYYY5&@
// @@@&PPPPPPPG@@#PPPPPPP#@@&GPPPPPPPPPPPP&#PPPPPPPPPPPG&@&GPPPPPPPPPPPB@BPPPPPPPPPPPG&&GPPPPPPPPPPPP&@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

    my_print("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");    
    my_print("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&&&@@\n");
    my_print("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@555555&@\n");
    my_print("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@5YYYY5&@\n");
    my_print("@G55555B@@G55555B@@G5555P#G5555555555PG@BP5555555555P##G55555G#######&BP5555555555P&&P5555555YYYY5&@\n");
    my_print("@BYYYYYP@&5YYYYYP@@5YYYYPBYYYYYYYYYYYYY#5YYYYYYYYYYYYP5YYYYYYYYYYYYY5#5YYYYYYYYYYYYBGYYYYYYYYYY5&@\n");
    my_print("@&5YYYY5&#YYYY5Y5&#YYYYYB#PPPPPG#5YYYY5#5YYYY5#BPPPPPGP5YYYYY5PPPPPPG#5YYYY5#GYYYYYBGYYYYYG#5YYYY5&@\n");
    my_print("@@PYYYYYBGYYYYYYYBGYYYY5&@BGGGGGG5YYYY5#5YYYY5GGGGGGB&@GYYYYYB@GGGGGG#5YYYY5BPYYYYYBGYYYYYB@5YYYY5&@\n");
    my_print("@@BYYYYYP5YY55YYYP5YYYYP@BYYYYYYYYYYYY5#PYYYYYYYYYYYYG@GYYYYYB@5YYYY5#5YYYYYYYYYYYYBGYYYYYB&5YYYY5&@\n");
    my_print("@@&5YYYYYYYYPBYYYYYYYYYB@BYYYYYP#5YYYY5&&BGGGGBPYYYYYG@GYYYYYB@5YYYY5#5YYYY5GGGGGGG#GYYYYYB@5YYYY5&@\n");
    my_print("@@@@GYYYYYYYYG@5YYYYYYY5&@BYYYYYP#5YYYY5#PPPPPP#GYYYYYG@GYYYYYGB5YYYY5#5YYYY5#GPPPPPBGYYYYYGB5YYYY5&@\n");
    my_print("@@@@#YYYYYYYY#@GYYYYYYYP@@BYYYYYYYYYYYYY#5YYYYYYYYYYYYG@GYYYYYYYYYYYY5#5YYYYYYYYYYYYBGYYYYYYYYYYY5&@\n");
    my_print("@@@@&PPPPPPPG@@#PPPPPPP#@@&GPPPPPPPPPPPP&#PPPPPPPPPPPG&@&GPPPPPPPPPPPB@BPPPPPPPPPPPG&&GPPPPPPPPPPP&@\n");
    my_print("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    my_print("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n");
    

}


void my_print_n(int n) {
    if (-2147483648 == n) {
        return;
    }

    if (0 > n) {
        my_print("-");
        my_print_n(n / 10);
        n = -n;
    }

    if (10 <= n) {
        my_print_n(n / 10);
    }

    char x = (n % 10) + 48; // + 48 because '0' is 48 in ascii
    write(1, &x, 1); 
}

void show_intro(void)
{
    show_pegi_banner();
    sleep(2);
    clear_out();
    show_banner();
    sleep(2);
    clear_out();
}

#endif