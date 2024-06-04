#include <iostream>


using namespace std;

int main(){
    
    
    long n;
    cin >> n;
    
    string s;
    while(n != 1){
        s += to_string(n) + " "; 
        if (n % 2 == 0){
            n = n / 2;
            
        }
        else{
            n = n * 3 + 1;
            
        }
    }
    cout << s + "1";
    return 0;
}
