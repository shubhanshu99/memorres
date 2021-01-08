#include <iostream>
#include <Windows.h>
using namespace std;


int main()
{
    int counter = 20;
	int i;
	cout<<"enter time: ";
	cin >>i ;
    Sleep(1000);
    while(i>=0)
{  
    while (counter >= 0)
    {
       
        Sleep(1000);
        counter-= 2;
    if(counter>0)
    {   
     cout<<"\rTime remaining: "<<i-1<<"min "<<counter<<"sec"<<" remaining"<<flush;

    	
	}
	else if(counter==0){
	cout<<"\rTime remaining: "<<i-1<<"min"<<" remaining"<<flush;
    	counter=20;
    	i--;
		
	}  
    }
    
}
return 0;
}
