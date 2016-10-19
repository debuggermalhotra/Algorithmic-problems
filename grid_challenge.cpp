//Problem: https://www.hackerrank.com/challenges/grid-challenge

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 
string lexographical_sort(vector<string> &rows) {
    int n = rows.size();
    for(int i=0; i < n; i++) 
    {
        sort(rows[i].begin(), rows[i].end());
    }
    for(int j=0; j < n; j++) 
    {
        for(int i=0; i < n - 1; i++) 
        {
            if(rows[i][j] > rows[i+1][j]) 
                {
                return "NO";
        }
        }
    }
    return "YES";
}
 
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T,n;
    cin>>T;
    while(T--) {
        cin>>n;
        vector<string> rows(n);
        for(int i=0;i<n;i++) 
        {
            cin >> rows[i];
        }
        cout << lexographical_sort(rows) << endl;
    }
    return 0;
}
