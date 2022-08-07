#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int a,b=2,n,counter=0,sum=0,flag=1;
    //the program ask to input maximum limit
    cout<<"Enter the value to n:";
    cin>>n;
    //store the maximum in the max variable
    while(counter<n){
        for(a=2; a<=b-1; a++){
            if(b%a==0){
                flag=0;
                break;
            
            }
        }

        //when the 'a' is prime then add to sum
        if(flag){
            sum+=b;
            counter++;
        }
        b++;
        flag=1;
    }
    cout<<"sum of first "<<n<<" prime numbers:"<<sum;
    getch();
    return 0;
}