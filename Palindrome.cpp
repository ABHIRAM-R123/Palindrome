#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool checkpal(string x){
    string a="";
    for(int i=x.size()-1; i>=0; i--){
        a+=x[i];
    }
    if(a==x){
        cout<<"PALINDROME";
    }
    else{
            cout<<"NOT";
    }
}
int main(){
    cout<<"Enter a word"<<endl;
    string s;
    cin>>s;
    checkpal(s);
}