#include <string.h>
#include <unistd.h>

void mx_write_knock_knock(){
    write(1,"Follow the white rabbit.\n",strlen("Follow the white rabbit.\n"));
    write(1,"Knock, knock, Neo.\n",strlen("Knock, knock, Neo.\n"));

}
