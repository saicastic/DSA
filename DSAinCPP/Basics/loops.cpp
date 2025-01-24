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
    
    
    
    
    return 0;
}