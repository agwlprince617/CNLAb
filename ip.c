#include<stdio.h>

int main(){
    int a[4],i;
    char dot;
    for(i=0;i<4;i++){
        scanf("%d",&a[i]);
        if(a[i]<0 || a[i]>255){
            printf("Invalid IP Address");
            break;
        }
        scanf("%c",&dot);
        if(i==4) break;
    }

    if(a[0]>=0 && a[0]<128){
        printf("IP address belongs to Class A\n");
        printf("Network id is %d\n",a[0]);
        printf("Host Id is %d.%d.%d\n",a[1],a[2],a[3]);
    }

    if(a[0]>=128 && a[0]<192){
        printf("IP address belongs to Class B\n");
        printf("Network id is %d.%d\n",a[0],a[1]);
        printf("Host Id is %d.%d\n",a[2],a[3]);
    }

    if(a[0]>=192 && a[0]<224){
        printf("IP address belongs to Class C\n");
        printf("Network id is %d.%d.%d\n",a[0],a[1],a[2]);
        printf("Host Id is %d\n",a[3]);
    }

    
    if(a[0]>=224 && a[0]<240){
         printf("IP address belongs to Class D\n");
    }

    
    if(a[0]>=240 && a[0]<256){
         printf("IP address belongs to Class E\n");
    }

    return 0;
}