#include <iostream>
#include <vector>

using namespace std;

void printMemVec( vector <int> v){
    printf("Vector - Each int is worth %lu bytes\n", sizeof(v[0]));
    for(int i = 0; i < v.size(); i++) {

        printf("Value :%i at Memory Location: %p\n", v[i], & v + i);
    }

}

void incVecBy10(vector <int> &v){ // error added ansother para int size
    for(int i = 0; i < v.size(); i++) { 
        v[i] += 10; // error v += 10
    }
 }

int main(){
   const int SIZE = 5;
   vector <int> vec(SIZE);

   for(int i = 0; i < SIZE; i++){
        vec[i] = 100 + i;
   }

   printf("Before Increment -----------\n");
    printMemVec(vec);
    incVecBy10(vec);

    printf("After Increment -----------\n");
    printMemVec(vec);

    //remove last element of vec

    printf("After Pop ------------ \n");
    vec.pop_back();
    printMemVec(vec);

    //append 101 and 102 at the end of vec

    printf("After Push------------ \n");
    vec.push_back(6);
    printMemVec(vec);

    return 0;

}