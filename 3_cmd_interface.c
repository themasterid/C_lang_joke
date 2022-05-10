/*
Print the image output on the screen according to the command line parameters.
Example:
./program.bin --help
-a  -- print animal
-h  -- print human
-c  -- print car
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  if(argc<2 || !strcmp(argv[1], "--help")) {
    printf("%s --help\n", argv[0]);
    printf("-a  -- print animal\n");
    printf("-h  -- print human\n");
    printf("-c  -- print car\n");
    exit(1);
  }

  if (!strcmp(argv[1], "-a")) {
      printf("                          $$$$$$\n");
      printf("                        $$.......$$$\n");
      printf("                     $$$..........$$$\n");
      printf("                   $$$.............$$$\n");
      printf("     $* $*       $$................$$$\n");
      printf("     $.$..$      $$..................$$\n");
      printf("     +$.$$$    $$...................$$\n");
      printf("   +*......$$    $$..................$$\n");
      printf("  $............$$   $$................$$\n");
      printf(" $..О...........$$$$................$$\n");
      printf("$................$$$:...............$$\n");
      printf("$$................$$$$............$$\n");
      printf("  *$$$................$$..........$$\n");
      printf("      $................$$...........$$\n");
      printf("     $.....$$............$.........$$\n");
      printf("      $..$....$$..........;$......$$\n");
      printf("    $$$$$......$........;$......$$\n");
      printf("        $................;$.....$$\n");
      printf("       $$.....................$$\n");
      printf("       $$$..................$$\n");
      printf("    $$$$$$$$$$$$$$$$$\n");
  }

  if (!strcmp(argv[1], "-h")) {
      printf("                  _____    ____\n");
      printf("               .#########.#######..\n");
      printf("            .#######################.\n");
      printf("          .############################.\n");
      printf("         .################################.\n");
      printf("        .#########,##,#####################.\n");
      printf("       .#########-#,'########## ############.\n");
      printf("      .######'#-##' # ##'### #. `####:#######.\n");
      printf("      #####:'# #'###,##' # # +#. `###:':######\n");
      printf("     .####,'###,##  ###  # # #`#. -####`######.\n");
      printf("    ####+.' ,'#  ##' #   # # #`#`.`#####::####\n");
      printf("    ####'    #  '##'  #   #_'# #.## `#######;##\n");
      printf("    #:##'      '       #   # ``..__# `#######:#\n");
      printf("    #:##'  .#######s.   #.  .s######.\\`#####:##\n");
      printf("    #:##   .\"______\"\"'    '\"\"_____\"\". `.#####:#\n");
      printf("   .#:##   ><'(##)'> )    ( <'(##)`><   `####;#\n");
      printf("   ##:##  , , -==-\' \'.    .` `-==- . \\  ######'\n");
      printf("   #|-'| / /      ,  :    : ,       \\ ` :####:'\n");
      printf("   :#  |: '  '   /  .     .  .  `    `  |`####\n");
      printf("   #|  :|   /   '  '       `  \\   . ,   :  #:#\n");
      printf("   #L. | | ,  /   `.-._ _.-.'   .  \\ \\  : ) J##\n");
      printf("  ###\\ `  /  '                   \\  : : |  /##\n");
      printf("   ## #|.:: '       _    _        ` | | |'####\n");
      printf("   #####|\\  |  (.-'.__`-'__.`-.)   :| ' ######\n");
      printf("   ######\\:      `-...___..-' '     :: /######\n");
      printf("   #######\\``.                   ,'|  /#######\n");
      printf("  .# ######\\  \\       ___       / /' /#######\n");
      printf("  # #'#####|\\  \\    -     -    /  ,'|### #. #.\n");
      printf("  `#  #####| '-.`             ' ,-'  |### #  #\n");
      printf("      #' `#|    '._         ,.-'     #`#`#.\n");
      printf("           |       .'------' :       |#   #\n");
      printf("           |       :         :       |\n");
      printf("           |       :         :       |\n");
      printf("                   :         :          dp\n");
  }

  if (!strcmp(argv[1], "-c")) {
      printf("        _______\n");
      printf("       //  ||\\ \\ \n");
      printf(" _____//___||_\\ \\___ \n");
      printf(" )  _          _    \\ \n");
      printf(" |_/ \\________/ \\___|\n");
      printf("___\\_/________\\_/______\n"); 
  }

  return 0;
}

