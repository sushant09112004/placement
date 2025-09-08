#include<iostream>
using namespace std;
#include <unordered_map>

char firstnonReapeating(string s){
    unordered_map <char, int> count;

    for (char c: s){
        count[c]++;
    }
    for (char c: s){
        if (count[c] == 1){
            return c;
        }
    }
    return 'h';
}
int main (){
    string s = "geeksforgeeks";
    cout<<firstnonReapeating(s);
       return 0; 
}