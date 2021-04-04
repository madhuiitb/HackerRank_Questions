/*You are working on a ticketing system. A ticket costs $10.
The office is running a discount campaign: each group of 5 people is getting a discount, which is determined by the age of the youngest person in the group.
You need to create a program that takes the ages of all 5 people as input and outputs the total price of the tickets.

Sample Input:
55
28
15
38
63

Sample Output:
42.5

The youngest age is 15, so the group gets a 15% discount from the total price, which is $50 - 15% = $42.5



*/


#include <iostream>
using namespace std;

int main() {
    int ages[5];

    for (int i = 0; i < 5; ++i) {
        cin >> ages[i];
    }
    //your code goes here
    int min = ages[0];

    for(int i=1; i<5;i++){
        if(min>ages[i]){
            min =ages[i];
        }
            
    }
   // cout<<min<<endl;

    float result = (50*min)/100.0;

    cout<<50-result<<endl;
    
    
    return 0;
}
