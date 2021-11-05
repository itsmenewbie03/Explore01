/*
Its me Salvador,1 Ligayao
04/11/21

05/11/21

added pseudo error handling
color coding

05/11/21 18:23 

removed colors for compatibility
removed unused import
*/
#include <stdio.h>
int main(){
    int query;
    float high,low,curtemp,fhigh,flow;
    printf("Enter Range of Minutes: ");
    scanf("%d", &query);
    if(query > 0){
        if(query <= 1440){
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
        } else{
            printf("Input exceeds the maximum number of minutes in a single day!\nYou entered %d which is greater than 1,440\nThis could be due to an invalid input!", query);
            return -1;
        }
    } else{
        printf("Invalid Input! Range must be greater than 0!");
        return -1;
    }
    return 0;
}