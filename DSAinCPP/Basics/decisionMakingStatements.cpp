#include<iostream>

int main(){

    // if statement
    if (true)
    {
        /* code */
    }



    // if else statement
    if (true)
    {
        /* code */
    }
    else
    {
        /* code */
    }


   // else if ladder
    if (true)
    {
        /* code */
    }
    else if (true)
    {
        /* code */
    }
    else
    {
        /* code */
    }
    

    //ternary operator -> (condition) ? true : false ;

    // switch

    int x;

    switch (x)
    {
    case 10:
        
        break;

    case 20:

        break;
    
    default:
        break;
    }

    
    // NOTE : 
    // i . if any one of the condition in if (or) else if block satisfies, the conditions below that condition will not be executed

    // ii . the key difference between if else and switch is that in if else conditions the flow of execution goes from top to bottom but in switch the flow goes directly to the condition which is true and if it has break it will come out of the switch condition

    // iii. fall through : if we dont put break all the conditions below the true case will execute if it the condition is true or not and also default 
    
    
    return 0;
}