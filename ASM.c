#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include "asm.h"

char			hex_to_char(char *hex)
{
	char		c;

	c = 0;
	c += (hex[3] > '9') ? hex[3] - 87 : hex[3] - 48;
	c += (hex[2] > '9') ? 16 * (hex[2] - 87) : 16 * (hex[2] - 48);
	return (c);
}

void writetofile(int fd, char *filedata){
    char 
    write(fd, )
    if (filedata)
        ft_putchar_fd(hex_to_char());
}

void justWrite(char *filedata){
    int fd;

    fd = open("test.cor", O_WRONLY | O_CREAT | O_TRUNC,
			S_IRWXU | S_IRWXG | S_IRWXO);
    writetofile(fd);
    close(fd);
}

int main(int argi, char **argc){

    int     file;
    int     kickout;
    char    *line;
    char    **comp;

    line = NULL;
    comp = NULL;
    kickout = 2;
    if (argi != 2)
        return 0;
    else {
        file = open(argc[1], O_RDONLY);
            kickout = get_next_line(file, &line);
            comp = ft_strsplit(line, '\n');
            for (int i = 0; comp[i] != NULL; i++)
                ft_putendl(comp[i]);
        if (kickout == -1){
            ft_putendl("error");
            return 0;
        }
    }
    close(file);
    return 0;
}