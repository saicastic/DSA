#include<iostream>

using namespace std;

int main(){

    //i. for loop

    for (int i = 0; i < 10; i++)
    {
        /* code */
    }

    //ii. while loop

    int i;

    while (i<10)
    {
     
        /* code */

        i++; // increment
    }


    //iii. do while loop

    int k;

    do
    {
        
    } while (k< 10);


    // iv. infinite loops

    while (true)
    {
        /* code */
    }

    for ( ; ; )
    {
        /* code */
    }

    //v. range based "for" loop

    int arr[]={1,2,3,4};

    for(int num : arr)
    {
        cout << num << " ";
    }
    
    
    //NOTE : 
    // i. there are few loop control statements which modifies the flow to execution of the loop
    //    a. break      ->    ( skips whole loop )
    //    b. continue   ->    ( skips the current iteration )
    //    c. goto       ->    ( the goto statement allows you to jumb to a labeled part of the code. generally discouraged because it can make code hard to follow )
    
    
    return 0;
}