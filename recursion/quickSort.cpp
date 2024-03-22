#include>iostream>
usign namespace std;


int partionAndPivit(int )

void quicksort(int *arr , int s , int e){
    //base case
    if(s>=e){
    return;
    }
    //select pivit and arrange all element less than and greater that pivit on lhs and rhs of pivit then  do patrition 
    int partition  = partitionAndPivit(arr , s , e );

    //do the same case for lhs  and rhs of the pivited element.
    quicksort(arr , s , partition-1);
    quicksort(arr , partition+1 , e);

    

}

int main(){
    int arr[10] = {9,8,3,4,5,6,7,1,2,0};
    int size = 10;
    quickSort(arr, 0 , size-1);
    for(int i = 0 ; i<10  ; i++){
        cout<<arr[i]<<endl;
    }cout<<endl;
}