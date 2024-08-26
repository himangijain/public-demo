#include<stdio.h>
float c2f(float c );

float c2f(float c ){
    return ((9*c)/5.0)+32;

}

int main(){
    float c =86;
printf("Celcius to Fahrenheit for %f is %.d",c2f(c));

    return 0;
}
