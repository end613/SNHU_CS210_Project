#include "ItemTracker.h"

void ItemTracker::Load() {
    ifstream file(inputFile);
    string item;
    while (file >> item) {
        ++itemFrequency[item];
    }
    file.close();
    Backup();
}

int ItemTracker::GetFrequency(const string& item) const {
    if (itemFrequency.find(item) != itemFrequency.end()) {
        return itemFrequency.at(item);
    }
    return 0;
}

void ItemTracker::PrintAll() const {
    for (const auto& entry : itemFrequency) {
        cout << entry.first << " " << entry.second << endl;
    }
}

void ItemTracker::PrintHistogram() const {
    for (const auto& entry : itemFrequency) {
        cout << entry.first << " ";
        for (int i = 0; i < entry.second; ++i) {
            cout << "*";
        }
        cout << endl;
    }
}

void ItemTracker::Backup() const {
    ofstream outFile(backupFile);
    for (const auto& entry : itemFrequency) {
        outFile << entry.first << " " << entry.second << endl;
    }
    outFile.close();
}