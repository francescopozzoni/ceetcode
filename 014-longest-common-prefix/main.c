#include <stdio.h>
#include <stdlib.h>

char* longestCommonPrefix(char** strs, int strsSize) {

    if(strsSize == 1) return strs[0];
    
    int resSize = 200;

    char* ctrl1 = strs[0];
    int i = 1;
    while(i < strsSize) {

        char* ctrl2 = strs[i];
        int idx = 0;
        while(ctrl1[idx] != '\0' && ctrl2[idx] != '\0' && ctrl1[idx] == ctrl2[idx]) {
            idx++;
        }

        if(idx < resSize) resSize = idx;
        i++;
    }

    char* res = (char*) malloc((resSize+1)*sizeof(char));

    for(int j = 0; j < resSize; j++) res[j] = strs[0][j];
    res[resSize] = '\0'; 

    return res;
}

int main()
{
    //char* s[] = {"flower", "", "floght"};
    char* s[] = {""};

    printf("%s\n", longestCommonPrefix(s, sizeof(s)/sizeof(s[0])));

    return 0;
}