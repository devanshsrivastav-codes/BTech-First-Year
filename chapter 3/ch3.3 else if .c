#include <stdio.h>

int main(){
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);

    if(age > 60){
        printf("You can drive and you are a senior citizen");

    }
    else if(age > 40){
        printf("you can drive and you are elder");

    }
    else if(age > 17){
        printf("you can drive");

    }
    else{
        printf("you cannot drive");

    }
    return 0;
}
