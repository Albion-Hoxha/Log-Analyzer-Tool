#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    string filename;
    cout << "Enter log file name: ";
    cin >> filename;

    ifstream file(filename);

    if (!file) {
        cout << "File not found\n";
        return 1;
    }

    string line;
    int errorCount = 0;
    int infoCount = 0;
    int warningCount = 0;

    while (getline(file, line)) {

        if (line.find("ERROR") != string::npos)
            errorCount++;

        if (line.find("INFO") != string::npos)
            infoCount++;

        if (line.find("WARNING") != string::npos)
            warningCount++;
    }

    cout << "\nResults:\n";
    cout << "Errors: " << errorCount << endl;
    cout << "Info: " << infoCount << endl;
    cout << "Warnings: " << warningCount << endl;

    file.close();
}