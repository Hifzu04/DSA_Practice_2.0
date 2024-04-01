#include<iostream>
#include<vector>
using namespace std;

void keypad(int index, string number , string* mapping , vector<string>& finalAnswer, string individualAnswer){
    //base case 
    if(index>=number.length()){
        finalAnswer.push_back(individualAnswer);
        return;
    }
     
    //convert each digit of string number into int number
    int num = number[index] - '0';
    //takeout correcponding value to number. ie for 2 => abc
    string value = mapping[num];

    for(int i=0; i<value.length() ; i++){
        individualAnswer.push_back(value[i]);
        keypad(index+1, number ,  mapping , finalAnswer,individualAnswer);

        //backtracking
        individualAnswer.pop_back();

    }



}


int main(){
    int index = 0;
    //dial a number to get all the possible corresponding chars. 
    string number = "23";
    //cin>>number;
    string mapping[10] = {" ", " ", "abc" ,"def" , "ghi" , "jkl" "mno" ,"pqrs" , "tuv" , "wxyz"};
    vector<string>finalAnswer;
    string individualAns;
    keypad(index,number,mapping,finalAnswer,individualAns);
    for(auto element: finalAnswer){
        cout<<element<<" ";
        
    }
    

}