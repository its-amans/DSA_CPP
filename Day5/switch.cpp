//Using nested switch cse 
//we can design by switch ladder also

#include <iostream>
using namespace std;
int main(){
    int amount;
    int note100=0,note50=0,note20=0,note1=0;
    cout<<"Enter the amount:";
    cin>>amount;
    switch(amount>=100){
        case 1:
            note100=amount/100;
            amount-=note100*100;
        case 0:
            switch(amount>=50){
                case 1:
                    note50=amount/50;
                    amount-=note50*50;
                case 0:
                    switch(amount>=20){
                        case 1: 
                            note20=amount/20;
                            amount-=note20*20;
                        case 0:
                            switch(amount>=1){
                                case 1:
                                    note1=amount/1;
                                    amount-=note1*1;
                            }
                    }

            }
    }

    cout<<"100 note is :"<<note100<<endl;
    cout<<"50 note is :"<<note50<<endl;
    cout<<"20 note is :"<<note20<<endl;
    cout<<"1 note is :"<<note1<<endl;
}