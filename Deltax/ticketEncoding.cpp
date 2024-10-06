#include<bits/stdc++.h>
using namespace std;

string generateNextTicket(const string &prevTicket){
    string nextTicket="";
    int length=prevTicket.length();
    for(int i=0; i<length;){
        char currentchar = prevTicket[i];
        int count=0;

        while(i<length && prevTicket[i]==currentchar){
            count++;
            i++;
        }
        nextTicket += to_string(count)+currentchar;
    }
    return nextTicket;
}

string getNthticketcode(int n){
    string ticketcode="A";
    for(int i=2; i<=n; i++){
        ticketcode = generateNextTicket(ticketcode);
    }
    return ticketcode;
}


int main(){
    int n;
    cin>>n;
    cout<<getNthticketcode(n)<<endl;
}