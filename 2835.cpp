#include <bits/stdc++.h>

using namespace std;

int main(){

    int num, box, cont = 0;
    vector<int> boxes;

    cin >> num;

    while(num--){

        cin >> box;
        boxes.push_back(box);

    }

    sort(boxes.begin(), boxes.end());

    if(boxes[0] > 8){

        cout << "N" << endl;
        cont++;
        
    }

    else{

        for(int i = 1 ; i < boxes.size() ; i++){

            if(boxes[i] - boxes[i-1] > 8) {
                cout << "N" << endl;
                cont++;
                break;
            }

        }

    }


    if(cont == 0) cout << "S" << endl;


}