#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i;

    char s[]="Hello";
    for(i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            printf("%c ",s[j]);

        }
        printf("\n");
    }
    for(i=4;i>=0;i--){
        for(int j=0;j<=i;j++){
            printf("%c ",s[j]);

        }
        printf("\n");
    }

    
    return 0;
}
