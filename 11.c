#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void func(char *str ,int len){

FILE*fp ;
fp = fopen(str , "w");
for(int i =0 ; i<len ;i++){

double gen = (double)rand()/RAND_MAX ;
fprintf(fp ,"%lf\n", gen )  ; 


}

fclose(fp);



}

int main(){



func("uni.dat" , 1000000);

}
