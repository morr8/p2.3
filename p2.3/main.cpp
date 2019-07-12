/*
 • Business P2.3
 A video club wants to reward its best members with a discount based on the member’s number of movie rentals and the number of new members referred by the member. The discount is in percent and is equal to the sum of the rentals and the referrals, but it cannot exceed 75 percent. (Hint: The min function in the <algorithm> header.) Write a program to calculate the value of the discount.
 
 Here is a sample run:
 
 Enter the number of movie rentals: 56
 Enter the number of members referred to the video club: 3
 The discount is equal to:     59.00 percent.
 */

#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int main()
{
    cout << "Enter the number of movie rentals: ";
    float movie_rentals;
    cin >> movie_rentals;
    
    cout << "Enter the number of members referred to the video club: ";
    float referrals;
    cin >> referrals;
    
    float highest_discount = 75;
    float discount = movie_rentals + referrals;
    
    cout << "The discount is equal to: " << fixed << setprecision(2) << min(highest_discount, discount) << " percent." << endl;
    
    
}
