#include "mx_cp.h"

int main(int argc, char **argv) {    
    if (argc == 3) {
        int src = open(argv[1], O_RDONLY), 
            dst = open(argv[2], O_RDWR | O_CREAT | O_EXCL, S_IRWXU); 
        char buff[64];
        int rd = read(src, buff,64);
        if (src > 0) {
            if (dst > 0) {
                while (rd == 64) {
                    write(dst,buff, rd);
                    rd = read(src, buff,64);
                }
                write(dst,buff, rd);
                close(src);
                close(dst);
            }
        }
        else
            mx_printerr("usage: ./mx_cp [source_file] [destination_file]\n");
    }
    else
        write(2, "usage: ./mx_cp [file_path] [destination file]\n", 46);
    return 0;
}


