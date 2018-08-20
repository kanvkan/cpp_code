#include<iostream>
#include<thread>


void count(){
    int count = 0;
    while (count < 100){
        std::cout<<count<<std::endl;
        count++;
    }
}
int main(){
    std::thread t1(count);
    std::thread t2(count);
    t1.join();
    t2.join();
    std::cout<<"hello world"<<std::endl;
}