#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){



FILE* fp ;
fp = fopen("gau.dat" ,"r");
double numarry[1000000];
double sum = 0.0;
int sum_var =0.0 ;
for(int i =0 ;i<1000000 ;i++){

    fscanf(fp,"%lf",&numarry[i]);
}

for(int i =0 ;i<1000000 ;i++){

   sum = sum + numarry[i];
}

double mean = (sum/1000000);
printf("mean is %lf\n",mean);
for(int i =0 ;i<1000000;i++){
sum_var += (numarry[i]-mean )*(numarry[i]-mean);

}
double var =(sum_var/1000000);
printf("Variance is %lf\n",var);
fclose(fp);
return 0;










}