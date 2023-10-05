#include <bits/stdc++.h>
using namespace std;

int main(){

    int N, left = 0, diamonds = 0;
    string line;

    cin >> N;
    getchar();

    while(N--){

        getline(cin, line); diamonds = 0; left = 0;

        for(int i = 0; i < line.size(); i++){

            if(line[i] == '<'){
                left++;
            }

            else if(line[i] == '>'){
                if(left != 0){
                    left--;
                    diamonds++;
                }
            }

        }

        cout << diamonds << endl;

    }

    return 0;
}