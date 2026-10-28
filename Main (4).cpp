#include <iostream>
using namespace std;

int main() 
{
    int numbers[20]={0,5,10,15,20,25,30,35,40,45,50,55,60,65,70,75,80,85,90,95};
    int target;

    cout<<"enter a number to search for: ";
    cin>>target;

    int left=0;
    int right=19;
    int foundIndex=-1;

    while(left<=right){
        int mid=left+ (right -left)/2;

        if(numbers[mid]==target){
            foundIndex=mid;
            break;
        } else if (numbers[mid]<target){
            left=mid+1;
        } else{
            right=mid-1;
        }
    }

    if(foundIndex!=-1){
        cout<<"Element found at index "<<foundIndex<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }

    return 0;
}