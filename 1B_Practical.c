/*
Its me Salvador,1 Ligayao
04/11/21
*/
#include <stdio.h>

int main(){
    int query;
    float high,low,curtemp,fhigh,flow;
    printf("Enter Range of Minutes: ");
    scanf("%d", &query);
    printf("Enter the temperature reading at 1 minute: ");
    scanf("%f",&curtemp);
    low = curtemp;
    high = curtemp;
    for(int i = 1; i<query;i++){
        printf("Enter the temperature reading at %d minutes: ", i+1);
        scanf("\n%f", &curtemp);
        if(curtemp > high){
            high = curtemp;
        }
        if(curtemp < low){
            low = curtemp;
        }
    }
    fhigh = (high * 9 /5) + 32;
    flow = (low * 9 /5) + 32;
    printf("Highest Temperarure Reading: %.2fC(%.2fF)\n",high,fhigh);
    printf("Lowest Temperarure Reading: %.2fC(%.2fF)\n",low,flow);
    return 0;
}