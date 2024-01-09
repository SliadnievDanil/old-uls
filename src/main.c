#include "../inc/uls.h"

int main(int argc, char **argv) {
    t_flag *flags = get_flags(argc, argv);
    bool c = check_dir(argv, argc);
    if (flags->l == 1 && flags->R != 1) {
        printl(flags, argc, argv);
    } else if(flags->R == 1) {
        output_R_dir(argc, argv, flags);
    } else if(c == 0) {
        uls_flagless(flags);
    } else if(c == 1) {
         scan_directory(argc, argv, flags);
    }
    return flags->error;
}

