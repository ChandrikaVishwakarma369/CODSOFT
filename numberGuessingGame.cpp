#include<iostream>
#include<time.h>
using namespace std;
int main()
{   
    //Declaration and Initialization of variables
    int num, input , attempts=0;
    srand(time(NULL));
    num = rand()%101;
    
    //Enter the number from the user
    cout << " Enter Any Number From The Range Between 0 To 100 " << endl;
    
    while(1)
    {
        attempts = attempts + 1;

        //Enter the number from the user
        cout << " Enter Number : " << endl;
        cin >> input;

        //num variable computes from the computer and input variable from the user , when both values are equal then print the satatement which is exist in the block of if(num==input)
        if( num == input )
        {
            cout << " Congrats! , You Guessed The Right Number " << endl;
            cout << " Total Attempts : " << attempts;
            break;
        }
        else if( input < num )
        {
            cout << " Number Is Too Low" << endl;
        }
        else if( input > num )
        {
            cout << " Number Is Too High" << endl;
        }
    }

    return 0;
}