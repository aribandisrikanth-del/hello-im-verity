#include <iostream>
using namespace std;

int main() 
{
    int num[10]={8,5,43,6,7,8,199,9,5,10};

    for(int i=0;i<7;i++){
        for(int j=0;j<7-i;j++){
            if (num[j]<=num[j+1]){
                int temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }

    for(int i=0;i<10;i++){
        cout<<num[i]<<" ";
    }

    return 0;
}