#ifndef ITEMTRACKER_H
#define ITEMTRACKER_H

#include <iostream>
#include <fstream>
#include <map>
#include <string>
using namespace std;

class ItemTracker {
private:
    map<string, int> itemFrequency;
    string inputFile = "Produce.txt";
    string backupFile = "frequency.dat";

public:
    void Load();
    int GetFrequency(const string& item) const;
    void PrintAll() const;
    void PrintHistogram() const;
    void Backup() const;
};

#endif