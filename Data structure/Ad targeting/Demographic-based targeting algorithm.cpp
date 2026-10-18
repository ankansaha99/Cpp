#include <iostream>
#include <vector>
#include <string>

using namespace std;

// User class representing user data
class User {
public:
    string name;
    int age;
    string gender;
};

// Ad class representing ad data
class Ad {
public:
    string name;
    string product;
    string target_gender;
    int target_age_min;
    int target_age_max;
};

// Function to target ads to users based on demographic data
void target_ads(vector<User>& users, vector<Ad>& ads) {
    for (auto ad : ads) {
        for (auto user : users) {
            if (ad.target_gender == user.gender &&
                user.age >= ad.target_age_min &&
                user.age <= ad.target_age_max) {
                cout << "Targeting ad " << ad.name << " to user " << user.name << endl;
            }
        }
    }
}

int main() {
    // Create some sample user data
    vector<User> users = {
        {"Alice", 25, "Female"},
        {"Bob", 35, "Male"},
        {"Charlie", 45, "Male"},
        {"Diana", 30, "Female"},
        {"Emma", 20, "Female"},
    };

    // Create some sample ad data
    vector<Ad> ads = {
        {"Ad1", "Product1", "Female", 18, 30},
        {"Ad2", "Product2", "Male", 25, 40},
        {"Ad3", "Product3", "Male", 40, 50},
        {"Ad4", "Product4", "Female", 20, 25},
    };

    // Target ads to users based on demographic data
    target_ads(users, ads);

    return 0;
}

