#include <fcntl.h>
#include "asm.h"

int main(int argi, char **argc){

    int     file;
    int     kickout;
    char    *line;
    char    *comp;

    line = NULL;
    comp = NULL;
    kickout = 1;
    if (argi != 2)
        return 0;
    else {
        file = open(argc[1], O_RDONLY);
        while (kickout){
            kickout = get_next_line(file, &line);
            //comp = ft
        }
    }
    close(file);
    return 0;
}