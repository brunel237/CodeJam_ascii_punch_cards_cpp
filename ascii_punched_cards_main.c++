#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

void alterMinPlus(int limit){
    for (int i=0; i<limit; i++){
        cout<<" - +";
    }
}

void alterPlusMin(){
    cout<<"+ - +";
}

void alterSlashDot(){
    cout<<"| . |";
}

void alterDotSlash(int limit){
    for (int i=0; i<limit; i++){
        cout<<" . |";
    }
}

void firstBoxDotPlus(){
     cout<<". . +";
}

void firstBoxDotSlash(){
     cout<<". . |";
}

void IncreaseColumnBy(int limit){
    firstBoxDotPlus();
    alterMinPlus(limit);
    cout<<endl;
    firstBoxDotSlash();
    alterDotSlash(limit);
    cout<<endl;
    alterPlusMin();
    alterMinPlus(limit);
    
}

void IncreaseRowOfColumn(int numColumn){
    alterSlashDot();
    alterDotSlash(numColumn);
    cout<<endl;
    alterPlusMin();
    alterMinPlus(numColumn);
}


void Test(int row, int column){
    if (row == 1) IncreaseColumnBy(column-1);
    else {
        IncreaseColumnBy(column-1);
        while (row>1){
            cout<<endl;
            IncreaseRowOfColumn(column-1);
            row--;
        }
    }

}

typedef struct input
{
    int r,c;
}input;



int main(){
    int T;

    cin>>T;
    int R, C;
    vector <input> record;

    for (int i=0; i< T; i++){
        cin>>R>>C;
        input t;
        t.r = R;
        t.c = C;
        record.push_back(t);
    }

    for (int i=0; i< record.size(); i++){
        cout<<"Case #"<<i+1<<endl;
        Test(record.at(i).r, record.at(i).c);
        cout<<endl;
    }
    
    return 0;
}