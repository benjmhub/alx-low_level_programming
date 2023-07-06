100-main.c:15:21: error: passing argument 2 of ‘set_string’ makes integer from pointer without a cast [-Werror=int-conversion]
   15 |     set_string(&s1, s0);
      |                     ^~
      |                     |
      |                     char *
In file included from 100-main.c:1:
main.h:13:32: note: expected ‘char’ but argument is of type ‘char *’
   13 | void set_string(char **s, char to);
      |                           ~~~~~^~
cc1: all warnings being treated as errors
100-set_string.c:8:6: error: conflicting types for ‘set_string’
    8 | void set_string(char **s, char *to)
      |      ^~~~~~~~~~
In file included from 100-set_string.c:1:
main.h:13:6: note: previous declaration of ‘set_string’ was here
   13 | void set_string(char **s, char to);
      |      ^~~~~~~~~~
root@7ca467e70648:~/alx-low_level_programming/0x07-pointers_arrays_strings# vi 100-main.c
root@7ca467e70648:~/alx-low_level_programming/0x07-pointers_arrays_strings# vi 100-set_string.c
root@7ca467e70648:~/alx-low_level_programming/0x07-pointers_arrays_strings# 











