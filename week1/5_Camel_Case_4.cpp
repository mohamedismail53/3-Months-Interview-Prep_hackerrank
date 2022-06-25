#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string t;
    while(getline(cin, t)) {
        char op, typ;
        op = t[0], typ = t[2];
        string s = t.substr(4);
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        if(op=='S') {
            if(typ=='M') {
                for(int )
            }
            else if(typ=='C') {
                
            }
            else {
                
            }
        }   
        else {
            if(typ=='M') {
                
            }
            else if(typ=='C') {
                
            }
            else {
                
            }
        }    
    }
    return 0;
}
