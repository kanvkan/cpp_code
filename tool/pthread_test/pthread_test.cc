#include<iostream>
#include<thread>
#include<mutex>
#include"../mutex_lock/mutex_lock.h"

std::mutex mtx;
int count = 0;
void count_f(){
    while (count < 100){
        MutexLockGraud lock(mtx);
        count++;
        std::thread::id t_id = std::this_thread::get_id();
        std::cout<<t_id<<": "<<count<<std::endl;
    }
}
int main(){


    std::thread t1(count_f);
    std::thread t2(count_f);

    t1.join();
    t2.join();
}
