#include <iostream>
using namespace std;

int main()
{  
    int n1=0, n2=1, n3, i, number;    
    cout << "Masukan panjang deret :";    
    cin>>number;  
    
    cout << n1 <<" " << n2 <<" "; // printing 0 and 1
    for(i=0;i<number;i++) //loop starts    
    /* syntax for for loop
        for(initialization; condition; updation)
           
        {   
         loop body ( c++ code)
        }
    */
         
    {    
    n3=n1+n2;    
    cout << n3<<" ";    
    n1=n2;
    n2=n3;
    }   
        
   return 0;
}  
