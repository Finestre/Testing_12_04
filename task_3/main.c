#include<stdio.h>

typedef struct Person {
    char name[21];
    char surname[21];
    int height;
}Person;

int main(){
    int n = 0;
    scanf("%d", &n);

    if(n < 0) {
        printf("n/a");
        return 1;
    }

    Person array[n];

    for(int i = 0; i < n; i++) {
        scanf("%s", array[i].name);
        scanf("%s", array[i].surname);
        scanf("%d", &array[i].height);
    }

    int h = 0;
    scanf("%d", &h);

    if(h < 0) {
        printf("n/a");
        return 1;
    }

    int nothing = 0;

    for(int i = 0; i < n; i++) {
        if(array[i].height >= h) {
            printf("%s %s", array[i].name, array[i].surname);
            nothing++;
        }
        if(nothing > 0 && i != n-1) {
            printf(", ");
        }
    }

    if(nothing == 0) {
        printf("Nothing");
    }


    return 0;
}