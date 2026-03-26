#include<iostream>
#include<string>
using namespace std;
string Reverse_String(string s){
    int start=0;
    int end=s.size()-1;
    while(start<end){
        swap(s[start],s[end]);
        start++;
        end--;
    }
    return s;
}
int main(){
    string str="Hello";
    cout<<"Original String:"<<" "<<str<<endl;
    cout<<"Reverse String:"<<" "<<Reverse_String(str)<<endl;


}