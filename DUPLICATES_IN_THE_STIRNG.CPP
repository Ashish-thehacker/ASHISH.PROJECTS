#include<iostream>
using namespace std;
#define NO_OF_CHARS 256
class gfg
{
    public:
    /*fIlls  count array with frequency of characters*/
    void fillCharCounts(char *str, int * count){
        int i;
        for(i=0; *(str + i);i++)
        count[*(str + i)]++;

    }
    //code to print the duplicates element present in the string 

    void printDups(char * str)
    // Create an array of size 256 and fill 
    // count of every character in it
    int *count = (int *)calloc(NO_OF_CHARS, sizeof(int));
    fillCharCounts(str, count);
    int i =0;
    for(i=0;i<NO_OF_CHARS;i++){
        if(count[i]>1)
        cout<<i<<"count = "<<count[i];
        free(count);

    }
};
int main(){
    gfg a;
    char str[] = "test string";
    a.printDups(str);
    //getchar();
    return 0;
}