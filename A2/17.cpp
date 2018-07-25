#include<iostream>
using namespace std;


int main()
{
    unsigned int cases,
                candy_types,
                minimum_candies,
                temp,
                i,
                result;

    cin >> cases;

    while(cases--){
        cin >> candy_types >> minimum_candies;
        result = 0;
        for (i = 0; i < candy_types; ++i) {
            cin >> temp;
            result += temp / minimum_candies;
        }
        cout << result << endl;
    }

    return 0;
}
