#include<iostream>
#include<thread>
#include"../mutex_lock/mutex_lock.h"


void count(int c){
    int count = 0;
    while (count < c){
        std::cout<<count<<std::endl;
        count++;
    }
}
int main(){
    std::thread t1(count, 1);
    std::thread t2(count, 1);
    std::thread::id t_id = std::this_thread::get_id();
    std::cout<<t_id<<std::endl;
    t1.join();
    t2.join();
    std::cout<<"hello world"<<std::endl;
}
