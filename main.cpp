#include <iostream>
#include <string>
using namespace std;

int main() {

    string sentence;
    cout<<"Enter Plain Text"<< "\n";
    getline(cin,sentence);
    cout<<"Enter number sequences"<< "\n";
    int key[5];
    for(int x=0;x<5;x++){
        cin>>key[x];
    }
    char a[5][5]={0};
    int num=65;
    for(int x=0;x<5;x++){
        for(int y=0;y<5;y++){
            if (num ==74) num++;
            a[x][y]=char(num);
            num++;

        }
    }

    for(int c=0;c<sentence.length();c++){
        int colume,row;
        char sentencechar;

        if(sentence[c]=='J') sentencechar='I';
        else sentencechar=sentence[c];

        for(int x=0;x<5;x++){
            for(int y=0;y<5;y++){

                if(toupper(sentencechar)== a[x][y])
                {row=x;
                    colume=y;}
            }
        }
        if(sentencechar==' ') cout<<' ';
        else cout<<key[row]<<key[colume];

    }
    cout<<endl;

    return 0;


}