#include<iostream>
using namespace std;

int main(){
    int a,b,c;

    abc:  //Ahiya kai b naam api sakiye but ":" hovo joiye ena pachi
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;

    if(a==9){
        goto abc; //ahiya avi ritna me specify karyu ke agar a 9 hase to pachu repaeact thase
    }

    return 0;
}

// Aa program tyare kaam ma ave jyare apde kai vastu repeat karav hoy vagar koi loop ae, aa fastly access kare, loop ma akhu run thay. to pachi problem pade ema thats why goto. Goto continue jevu che if uk.  Jovo cho????? Ok and meet???????? Ok kbr padi? Ok