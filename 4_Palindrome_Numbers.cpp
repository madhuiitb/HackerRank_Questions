/*
Palindrome Numbers


A palindromic number is a number (such as 626) that remains the same when its digits are reversed.
Write a function that returns true if a given number is a palindrome, and false, if it is not.
Complete the given function, so that the code in main works and results in the expected output.

Sample Input:
13431

Sample Output:
13431 is a palindrome 
*/


#include <iostream>
using namespace std;

bool isPalindrome(int x) {

    //complete the function

    int remainder =0;
    int result =0;
    int n=x;

    while(n>0){
        remainder = n%10;
        result = (result *10) + remainder;
        n=n/10;
    }
   // cout<<result<<endl;
    if(result==x)
        return true;

    return false;
    
}

int main() {
    int n;
    cin >>n;
    
    if(isPalindrome(n)) {
        cout <<n<<" is a palindrome";
    }
    else {
        cout << n<<" is NOT a palindrome";
    }
    return 0;
}
