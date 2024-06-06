#include<iostream>
#include<vector>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[]){

    int i=0, j=0;
    int arr_indx= 0;
    while(i<n && j<m)
    {

        if(arr1[i] < arr2[j])
        {
            arr3[arr_indx] = arr1[i];
            i++;
            arr_indx++;
            
        }
        else
        {
            arr3[arr_indx] = arr2[j];
            j++;
            arr_indx++;
        }
    }

    // copy first array element
    while(i<n)
    {
        arr3[arr_indx] = arr1[i];
        arr_indx++;
        i++;
    }
    // copy second array element
    while(j<m)
    {
        arr3[arr_indx] = arr2[j];
        arr_indx++;
        j++;
    }

}


void printArray(int arr3[], int m)
{

    for(int i=0; i<m; i++)
    {
        cout << arr3[i] << " ";
    }
}



int main(){

    int arr1[5] = {1,4,3,5,6};
    int arr2[3] = {2,4,6};
    int arr3[8] = {0};

    merge(arr1, 5, arr2, 3, arr3);
    printArray(arr3, 8);
}