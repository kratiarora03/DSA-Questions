#include <iostream>

using namespace std;

bool palindrome(char ch[], int n ){
    int i = 0;
    int j = n-1;

    while(i>=j){
        if(ch[i]== ch[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
        }
        return true;
}

int findLength(char ch[], int size) {
    int length = 0;
    for (int i = 0; i < size; i++) {
        if (ch[i] == '\0') {
            break;
        } else {
            length++;
        }
    }
    return length;
}

int main(){
    char ch[100];
    cin >> ch;
    int len = findLength(ch,100);
     
 
     bool check = palindrome(ch,100);
     if(check){
        cout << "valid palindrome" << endl;
     } else {
        cout << "invalid palindrome" << endl;
     }


}