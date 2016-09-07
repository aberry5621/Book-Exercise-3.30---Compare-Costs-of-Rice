//
//  main.cpp
//  Book Exercise 3.30 - Compare Costs of Rice
//
//  Created by ax on 9/7/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // Title
    cout << "Compare Costs of Rice \n";
    
    // D
    double pkg1_wt = 0.0;
    double pkg1_cost = 0.0;
    double pkg2_wt = 0.0;
    double pkg2_cost = 0.0;
    double ppw_pkg1 = 0.0;
    double ppw_pkg2 = 0.0;
    
    // I
    cout << "Enter the weight and price for package 1: ";
    cin >> pkg1_wt >> pkg1_cost;
    
    cout << "Enter the weight and price for package 2: ";
    cin >> pkg2_wt >> pkg2_cost;
    
    // P
    // divige cost by weight for cost per weight
    ppw_pkg1 = pkg1_cost / pkg1_wt;
    ppw_pkg2 = pkg2_cost / pkg2_wt;
    
    // O
    if (ppw_pkg1 < ppw_pkg2) {
        cout  << "Package 1 has a better price." << endl;
    } else if (ppw_pkg1 > ppw_pkg2) {
        cout  << "Package 2 has a better price." << endl;
    } else if (ppw_pkg1 == ppw_pkg2) {
        cout  << "Two packages have the sarne price." << endl;
    } else {
        cout << "You're the next contestant on The Price is Right! Just kidding, something went wrong. Try again." << endl;
    }
    
    return 0;
    
}