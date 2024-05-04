#include<iostream>
#include<string>
using namespace std;

int main(){
    string word[100];
    cout<<"This is a typing game: "<<endl;
    for(int i=0; i<100; i++){
        word[0]="This a sentence 1.";
        word[1]="This a sentence 2.";
        word[2]="This a sentence 3.";
        word[3]="This a sentence 4.";
        word[4]="This a sentence 5.";
        word[5]="This a sentence 6.";
    }

    for(int i=0; i<100; i++){
        cout<<word[i]<<endl;
        i++;
    }

    return 0;
}