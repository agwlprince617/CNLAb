#include<stdio.h>
#include<stdlib.h>
int main(){
    int i=1,p,a,w,nac,ack;
    printf("Enter the window size\n");
    scanf("%d",&w);
    printf("Enter the packet size\n");
    scanf("%d",&a);
    printf("transmission begins packet size is %d\n",a);
    while(i<=a){ 
        printf("Sending packet from %d to %d\n",i,w+i-1);
        for(p=i;p<w+i;p++){
            printf("transmitting packet %d\n",p);
           nac=i+rand()%w;
        }
        if(nac==i){
            printf("ack=%d\n",w+i);
            i=i+w;
            continue;
        }
        printf("nac=%d\n",nac);
        printf("Sending packet %d\n",nac);
        printf("ack = %d\n",nac+1);
        printf("ack = %d\n",i+w);
        i=i+w;
    }
    printf("end of packet so ack %d is discraded\n",i);
    return 0;
}