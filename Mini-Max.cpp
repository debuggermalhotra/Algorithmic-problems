//Problem link: https://www.hackerrank.com/challenges/mini-max-sum/problem


//solution
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main(){
    long int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    long int arr[5]={a+b+c+d,a+c+d+e,b+c+d+e,a+b+d+e, a+b+c+e};
    long int min=arr[0];
    long int max=arr[0];

    for (int i=0; i<5;i++){
        if (arr[i]>max){
            max=arr[i];
        }
        if (arr[i]<min){
            min=arr[i];
        }

    }
    cout<<min<<" "<<max<<endl;
    return 0;
}
