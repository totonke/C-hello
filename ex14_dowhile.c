#include <stdio.h>

int main(void){

    int num;
    
    do{ 
        printf("? ");
        scanf("%d",&num);
        
        if( num<0 || num>255){
            break;
        }
        
        int kurai = 128;            //各位を格納する変数 （128スタート)
        
        for(int i=8; i>0; i--){     //8桁あるので8回繰り返す
        
            if( num/kurai == 1){    //numを各位で割り、商が1になるか
                printf("1");        //各位の値を表示
            }else{
                printf("0");
            }
            num = num % kurai;  //数値を各位で割った余りをnumに格納
            kurai = kurai / 2;  //位を一つ下げる ex)128→64にする
        }

        printf("\n");

    }while(num>-1 && num<256);

}

