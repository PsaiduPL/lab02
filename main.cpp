#include<iostream>
#include<cstdlib>
#include<ctime>



int main(){
    srand(time(NULL));
    std::cout<<"print siema"<<std::endl;
    for(int i = 0;i<10;i++){
        std::cout<<rand()%100<<std::endl;
    }
}