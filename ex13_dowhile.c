#include <stdio.h>
int main(void){

    int num;
    //cnt,sum,min,maxはその変数の取りうる値を考慮し、初期値を設定
    int cnt=0,sum=0,min=100,max=0;
    double avr=0.0;

   do{   
        printf("? ");
        scanf("%d",&num);

        if(num<0 || num > 100){
            break;
        }

        if(num<min){    //numの値とminの値を比較
            min = num;  //minの値を更新
        }
        if(num>max){    //numの値とmaxの値を比較
            max = num;  //maxの値を更新
        }
        sum += num;
        cnt++; 

    } while(num>-1 && num < 101);

    avr = (double)sum/cnt;  //小数点まで出したいので、明示的に型変換(キャスト)
    printf("データ数:%d 最小値:%d 最大値:%d 平均値:%g\n", cnt,min, max, avr);
    
}