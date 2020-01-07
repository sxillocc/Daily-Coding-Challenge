#include<iostream>
using namespace std;

bool isPalindrome(string s){
    int length = s.length();
    int l=length/2,j;
    //find center
        //for odd (ceil of n/2)
        if(length%2 != 0){
            j = l;
        }
        //for even (n/2)
        else{
            l = l-1;
            j = l+1;
        }

    //go equal distance from center on both direction
    //and compare characters
    int x = 1;
    while(l >= 0 && j < length && s[l] == s[j]){
        l--;
        j++;
    }

    //if length not exceed return false
    if(l >= 0 && j < length){
        return false;
    }

    //else return true
    return true;
}
int main(){
    cout<<isPalindrome("HelllleH")<<endl;
    cout<<isPalindrome("notPalindrome")<<endl;
    cout<<isPalindrome("yeahhaey")<<endl;
    cout<<isPalindrome("appleelppa")<<endl;
    cout<<isPalindrome("isi")<<endl;
    return 0;
}