#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
using namespace std;
void Fibo(int n){
    int frist=0;
    int second=1;
    int result;
    for(int i=1;i<=n;i++){
        if(i==1){
            cout<<"0"<<endl;
        }
        else if(i==2){
            cout<<"1"<<endl;
        }
    else{
         result=frist+second;
        frist=second;
        second=result;
        cout<<result<<endl;
    }


    }
    return ;

}

int main(){
    int n;
    cin>>n;
    Fibo(n);

}

