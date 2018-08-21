#ifndef MUTEX_LOCK
#define MUTEX_LOCK

#include<mutex>
#include<thread>

class MutexLockGraud final{
    public:
	explicit MutexLockGraud(std::mutex &mtx):_mtx(mtx){
	    _mtx.lock();
	}
	~MutexLockGraud(){
	    _mtx.unlock();
	}
    private:
	    std::mutex& _mtx;
};
#endif
