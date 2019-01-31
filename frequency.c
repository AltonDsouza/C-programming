//Count the frequency of each element of an array
#include <stdio.h>
int main(void){
    int arr[] = {25, 47, 25, 47, 47, 89};
    int dup[100];
    int size = sizeof(arr)/sizeof(int);
    int count;
    
    for(int i = 0; i<size; i++)
    {
        count = 1;
        for(int j = i+1; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                dup[j] = 0;//Visited
            }
        }
        if(dup[i]!=0)
        {
            dup[i] = count;
        }
    }
    for(int i = 0; i<size; i++)
    {
        if(dup[i]!=0)
        {
        printf("Occurence of %d is %d\n",arr[i],dup[i]);
        }
    }
}

