#include <stdio.h>
#include<stdlib.h>

#define MAX_STRING_LENGTH 25
#define MAX_STRING_NUMBER 51

int main (){


    char string_array [MAX_STRING_NUMBER][MAX_STRING_LENGTH] = {
        "apple", "banana", "cat", "dog", "elephant",
        "flower", "grass", "house", "ice cream", "juice",
        "kite", "lion", "monkey", "nest", "orange",
        "pencil", "queen", "rabbit", "sun", "tree",
        "umbrella", "violin", "water", "xylophone", "yak",
        "zebra", "ant", "boat", "car", "duck",
        "egg", "frog", "goat", "hat", "ink",
        "jar", "kangaroo", "lemon", "mouse", "notebook",
        "owl", "pear", "quilt", "rose", "strawberry",
        "turtle", "unicorn", "van", "whale", "xylophone"
    };


    FILE *Myfile;

    Myfile = fopen("Lists_of_words1", "w");

    for (int i = 0; i < 51; i++)
    {
        Myfile = fopen("Lists_of_words1", "a");
        fprintf(Myfile, string_array[i]);
        fprintf(Myfile, "\n");
    }
    


    fclose(Myfile);

    return 0;
}
