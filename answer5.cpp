#include<iostream>
#include<math.h>
using namespace std;

float findCircum(int radius){
    return 2*M_PI*radius;
}

int main() {
    cout<<findCircum(10)<<endl;
}