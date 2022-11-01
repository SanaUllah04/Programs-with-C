#include<stdio.h>
int main(){
int a = 0;
int b = 1;
int N = 10;
int sum;
printf("%d\n%d\n",a,b);
for (int i=2 ; i <= N ; i++ ){
sum = a+b;
a=b;
b=sum;
printf("%d\n",sum);}

}