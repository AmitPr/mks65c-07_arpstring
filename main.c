#include <stdio.h>
#include <string.h>

float average(int *arr, int size){
    int i = 0;
    float total = 0;
    for(i=0; i<size; ++i){
        total+=arr[i];
    }
    return total/size;
}

void arrcpy(char *a1, char *a2, int size){
    int i = 0;
    for(i=0; i<size+1; ++i){
        a2[i]=a1[i];
    }
}

int len1(char *str){
    int size = 0;
    for(size = 0; str[size]!='\0';++size){}
    return size;
}

int len2(char *str){
    // Is this allowed? :)
    return strlen(str);
}

int main(){
    int array[8] = {-3,-1,0,4,5,7,4,2};
    printf("Average: %f\n",average(array,8));
    char orig[] = "Hello World";
    printf("String: %s, Length: %d\n",orig,len1(orig));
    char copy[12];
    arrcpy(orig,copy,11);
    printf("Orig: %s, Copy: %s\n",orig, copy);
    char src[30];
    char dst[30];
    strcpy(src,"systems is cool");
    strcpy(dst,src);
    printf("Src: %s, Dst: %s\n",src, dst);
    printf("strcat: %s\n", strcat(src, "... or is it?"));
    printf("strcmp(orig,src): %d\n",strcmp(orig,src));
    printf("strchr(src,'i'): %s\n",strchr(src,'i'));
    return 0;
}