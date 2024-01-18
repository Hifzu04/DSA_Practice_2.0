/* Along the road side , there is sequence of flats having N area
each plot has diff area. you want to buy k acres of land.Find the adress of total no of 
possible sequence of areas which  adds up to reach k.

Sample Input : 
plots area = [1 3 2 1 4 1 3 2 1 1 2] 
K = 8
Sample Output 
2, 5
4, 6 
5, 9        */

//Brute  :generate all the sub array O(N^3)
//Brute force => 2 loop  O(N)
#include<iostream>
#include<array>
using namespace std;
int main(){
    int arr[11] = {1, 3, 2, 1, 4, 1, 3, 2, 1, 1, 2 };
    int total_area = 8;
    for(int i =0; i<11; i++){
        int j = i;
        int sum =0;
        while(sum<=total_area){
            sum +=arr[j];
            j++;
            if(sum==total_area){
                cout<<i<<" "<<j-1<<endl;
            }
        }
        
    } 

}
