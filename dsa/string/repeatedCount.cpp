//  #include <iostream>
//  #include <string>
//  #include <vector>
//  using namespace std;
// int main()
// {
//     vector<string> vec;
//     vector<string>vec2;
//     for (int i = 0; i < 10; i++)
//     {
//         string input;
//         cin>>input;
//         vec.push_back(input);
//     }
//     int count = 1;
    
//     for (int i = 0; i < 9; i++)
//     {
//         if (vec[i] == vec[i + 1])
//         {
//             count++;
            
//         }
//         else{
//             string cnt = to_string(count);
//             vec2.push_back(vec[i]);
//             vec2.push_back(cnt);
//             count=1;
//         }

//     }
//     for(int i=0 ; i<10; i++){
//         cout<<vec2[i]<<" ";
//     }
// }


#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<string> vec;
    vector<string> vec2;

    for (int i = 0; i < 10; i++) {
        string input;
        cin >> input;
        vec.push_back(input);
    }

    int count = 1;

    for (int i = 0; i < 9; i++) {
        if (vec[i] == vec[i + 1]) {
            count++;
        } else {
            string cnt = to_string(count);
            vec2.push_back(vec[i]);
            vec2.push_back(cnt);
            count = 1;
        }
    }

    // Handle the last element separately
    string cnt = to_string(count);
    vec2.push_back(vec.back());
    vec2.push_back(cnt);

    // Output vec2
    for (int i = 0; i < vec2.size(); i++) {
        cout << vec2[i] << " ";
    }

    return 0;
}
            