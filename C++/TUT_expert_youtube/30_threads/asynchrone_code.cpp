#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <vector>
#include <mutex>

// compile with: 'g++ asynchrone_code.cpp -o asynchrone -pthread'

/*
    std::this_thread::sleep_for() : the thread wait (we can include chrono inside sleep_for());
    th1.get_id(): get the id of thread;
    th1.join(): wait ;
    th1.joinable(): send a bool for said 'the thread is joinable or not';
    th1.swap(): reverse the execution between threads (th1.swap(th2));
    th1.detach(): separate object to thread;
*/

/*
    mtx.lock(): lock all code to unclock;
    mtx.unlock(): unlock code;
    std::lock_guard<std::mutex> lock{mtx}: lock all the function (simple, but if you want lock only one part, is not good)
*/

void doTask(std::string name, int delay)
{
    // show name with idx
    for(int i=0; i < 5; i++)
    {
        // without, data is create, modify and delete with same time of each thread
        std::this_thread::sleep_for(std::chrono::seconds(delay));
        std::cout << name << " : " << i << std::endl;
    }
}

void doTaskMutex(std::string name, std::mutex& mtx)
{
    // without mutex, threads are two in one function, so data memory is change at same time
    // thread wait the unlock of currently thread in function
    mtx.lock();

    // show name with idx
    for(int i=0; i < 5; i++)
        std::cout << name << " : " << i << std::endl;

    mtx.unlock();
}

int main()
{
    std::cout << "Initilisation of thread code" << std::endl;

    // use for lock function at one thread
    std::mutex mtx;

    // function use by thread with parameter
    // std::ref is use for not copy the parameter
    std::cout << "Not Mutex:" << std::endl;
    std::thread th1{doTask, "salut", 2};
    std::thread th2{doTask, "hola", 1};
    
    // wait end of thread
    std::cout << "Run of thread " << th1.get_id() << " and " << th2.get_id() << std::endl;
    th1.join();
    th2.join();

    std::cout << "\nMutex:" << std::endl;
    std::thread th3{doTaskMutex, "salut", std::ref(mtx)};
    std::thread th4{doTaskMutex, "hola", std::ref(mtx)};
    
    // wait end of thread
    std::cout << "Run of thread " << th3.get_id() << " and " << th4.get_id() << std::endl;
    th3.join();
    th4.join();

    std::cout << "\nVector of thread:" << std::endl;

    // create vector of thread
    std::vector<std::thread> thv;

    // just for insert in thread
    int dealy_array[2] = {2, 1};
    std::string name_array[4] = {"th1", "th2", "th3", "th4"};

    // push_back all informations of thread
	for (int i=0; i < 4; i++)
	{
        if (i > 2)
            thv.push_back(std::thread(doTaskMutex, name_array[i], std::ref(mtx))); // add functions to thread vector
        else
		    thv.push_back(std::thread(doTask, name_array[i], dealy_array[i])); // add functions to thread vector
	}

    // Run all thread and ait the end of each
    for(std::thread& th : thv)
    {
        th.join();
    }

    std::cout << "End of thread code" << std::endl;
    return 0;
}
