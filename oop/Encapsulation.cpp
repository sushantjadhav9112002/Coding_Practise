#include<bits/stdc++.h>
using namespace std;

class student{
    private:

    int roll_no;
    string name;
    int acc_no;

    public:

    int getroll_no(){
        return roll_no;
    }

    void set_roll(int n){
        this->roll_no=n;
    }

    string getName(){
        return name;
    }

    void setname(string s){
        this->name=s;
    }

};


int main(){
    student boy;
    boy.set_roll(27);
    boy.setname("sushant");

    cout<<"name : "<<boy.getName()<<endl;
    cout<<"roll_no is : "<<boy.getroll_no();

    return 0;
}