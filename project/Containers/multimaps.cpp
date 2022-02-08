#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <utility>
#include <map>

using namespace std;

int main() {
    ifstream in("illiad.txt");
    multimap<string,pair<int,int>> wordPositions;
    int lineNumber =0, wordInLine =0;
    string line = "";
    while(!in.eof()) {
        lineNumber++;
        getline(in, line);
        istringstream iss(line);
        string word = "";
        while (!iss.eof()) {
            wordInLine++;
            iss >> word;
            string tmpWord = word;
            for(string::size_type i = 0;i < tmpWord.size();i++) {
                if(!isalpha(tmpWord[i])){
                   // cout << i << " is not character " << tmpWord[i] << ":" << endl;
                    word.erase(i, 1);
                    i=0;
                    tmpWord = word;
                }
            }

            wordPositions.insert(make_pair(word, make_pair(lineNumber, wordInLine)));
        }
        wordInLine = 0;
    }

    cout << "Read in " << lineNumber - 1 << " lines of text" << endl;

    for(auto it = wordPositions.cbegin(), it2 = it; it != wordPositions.cend(); it = it2) {
        unsigned int count = wordPositions.count(it->first);
        cout << "\"" << it->first << "\" occurs " << count << " times, and is on: \n";

        for(; it2 != wordPositions.cend() && it2->first == it->first;++it2){
            auto [line, word] = it2->second;
            cout << "\tline " << line << ", position " << word << "\n";
        }
    }
    in.close();
    return 0;
}
