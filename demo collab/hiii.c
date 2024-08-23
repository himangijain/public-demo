#include<stdio.h>

float average(int a, int b, int c);

float average(int a, int b,int c ){
    return (a+b+c)/3;

}

int main(){
    int a=7,b=5,c=9;
printf("The average of a , b and c is %f", average (a,b,c));

    return 0;
}
