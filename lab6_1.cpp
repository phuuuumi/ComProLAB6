#include<iostream>
using namespace std;

int main(){
    int num, count_odd = 0, count_even = 0;
    while(true){
        cout << "Enter an integer: ";
        cin >> num;
        if(num == 0){
            cout << "#Even numbers = " << count_even << endl;
            cout << "#Odd numbers = " << count_odd << endl;
            break;
        }
        
        if(num % 2 == 0){
            count_even++;
        }else{
            count_odd++;
        }
        
        
    }
    return 0;
}
