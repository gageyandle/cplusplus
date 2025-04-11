#include <iostream>
#include <string>
#include <cctype>

using namespace std;

const int ALPHABET_SIZE = 26;

//count letter frequencies
void countLetterFrequencies(const string& input, int frequencies[]) {
    for (char c : input) {
        if (isalpha(c)) {
            frequencies[tolower(c) - 'a']++;
        }
    }
}

//find the most frequent letter
char findMostFrequentLetter(const int frequencies[]) {
    int maxFreq = 0;
    char mostFrequent = 'a';
    
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (frequencies[i] > maxFreq) {
            maxFreq = frequencies[i];
            mostFrequent = 'a' + i;
        }
    }
    
    return mostFrequent;
}

//perform selection sort on frequencies
void selectionSort(int frequencies[], char letters[]) {
    for (int i = 0; i < ALPHABET_SIZE - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < ALPHABET_SIZE; j++) {
            if (frequencies[j] > frequencies[maxIndex]) {
                maxIndex = j;
            }
        }
        if (maxIndex != i) {
            swap(frequencies[i], frequencies[maxIndex]);
            swap(letters[i], letters[maxIndex]);
        }
    }
}

int main() {
    string input;
    int frequencies[ALPHABET_SIZE] = {0};
    char letters[ALPHABET_SIZE];

    //initialize letters array
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        letters[i] = 'a' + i;
    }

    cout << "Enter a string: ";
    getline(cin, input);

    //count letter frequencies
    countLetterFrequencies(input, frequencies);

    //display frequency of each letter
    cout << "\nLetter frequencies:" << endl;
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (frequencies[i] > 0) {
            cout << char('a' + i) << ": " << frequencies[i] << endl;
        }
    }

    //display the most frequent letter
    char mostFrequent = findMostFrequentLetter(frequencies);
    cout << "\nMost frequent letter: " << mostFrequent << " appears " << frequencies[mostFrequent - 'a'] << " times." << endl;

    //frequencies using selection sort
    selectionSort(frequencies, letters);

    //display frequencies
    cout << "\nSorted frequencies:" << endl;
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (frequencies[i] > 0) {
            cout << letters[i] << ": " << frequencies[i] << endl;
        }
    }

    return 0;
}
