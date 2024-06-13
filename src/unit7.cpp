#include <unit7.h>
#include <fstream>
#include <iostream>
#include <cstring>

using namespace std;

struct Data {
    int n;
    float f;
    char* name;
};

void writeFile(const char text[]) {
    ofstream outFile("./files/testFile.txt", ios::app);

    if (outFile.is_open()) {
        outFile << text;
        outFile.close();
    }
}

void readFile() {
    ifstream inFile("./files/testFile.txt");

    if (inFile.is_open()) {
        string line;
        while (getline(inFile, line)) {
            cout << line << endl;
        };
        inFile.close();
    }
}

void reverseReadFile() {
    ifstream inFile("./files/testFile.txt", ios::binary | ios::ate);

    if (inFile.is_open()) {
        streampos end = inFile.tellg() - (streampos)1;
        cout << "position of g: " << inFile.tellg() << endl;
        char c;
        for (int i = end; i >= -1; i--) {
            inFile.seekg(i);
            inFile.get(c);
            cout << c;
        }

        inFile.close();
    }
}

void writeFileBin() {
    ofstream outFile("./files/testFile.bin", ios::binary);

    if (outFile.is_open()) {
        Data d[3];

        char name1[] = "joaquín";
        char name2[] = "Angelino 123 123";
        char name3[] = "Corona";
        char* names[] = { name1, name2 ,name3 };
        for (int i = 0; i < 3; i++)
        {
            Data aux = { (int)i, (float)i, names[i] };
            outFile.write(reinterpret_cast<char*>(&aux.n), sizeof(aux.n));
            outFile.write(reinterpret_cast<char*>(&aux.f), sizeof(aux.f));
            size_t nameLength = strlen(aux.name) + 1;
            outFile.write(reinterpret_cast<char*>(&nameLength), sizeof(nameLength));
            outFile.write(aux.name, nameLength);
        }
        outFile.close();
    }
}

void readFileBin() {
    ifstream inFile("./files/testFile.bin", ios::binary);

    Data aux;
    int count = 0;
    if (inFile.is_open()) {
        while (true) {
            cout << "Reading " << count << endl;
            if (!inFile.read(reinterpret_cast<char*>(&aux.n), sizeof(aux.n))) { break; };
            if (!inFile.read(reinterpret_cast<char*>(&aux.f), sizeof(aux.f))) { break; };
            size_t nameLength;
            if (!inFile.read(reinterpret_cast<char*>(&nameLength), sizeof(nameLength))) { break; };
            aux.name = new char[nameLength];
            if (!inFile.read(aux.name, nameLength)) { break; };

            cout << "object[" << count << "].f = " << aux.f << endl;
            cout << "object[" << count << "].n = " << aux.n << endl;
            cout << "object[" << count << "].name = " << aux.name << endl;
            count++;
            delete aux.name;
        }
    }
}