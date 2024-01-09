#include "../inc/uls.h"

int get_max_time(t_file** files) {
    t_file *file = *files;
    int max_lenght = 0;
    while(file) {
        int len = mx_strlen(file->lm_time);
        if(len > max_lenght) {
            max_lenght = len;
        }
        file = file->next;
    }
    return max_lenght;
}

