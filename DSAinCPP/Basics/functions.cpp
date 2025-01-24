#include<iostream>

using namespace std;

int sum(int a, int b){
    return a + b;
}

int main(){
    
    int res;
    res = sum(1,2);

    cout<<res; // Removed endl to prevent extra newline in output.txt

    return 0;
}