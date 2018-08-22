#include<iostream>
#include<thread>
#include<mutex>
#include<unistd.h>
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

void f(){
    int c = 100;
    while(c >  0){
	std::cout<<c<<std::endl;
	c--;
    }
}
int main(){


    std::thread t1(f);
    std::thread t2(f);
    std::cout<<"main end"<<std::endl;
    //t1.detach();
    //t2.detach();
    ////t1.join();
//    t2.join();
}
