/*************************************************************************
	> File Name: main.c
	> Author: 
	> Mail: 
	> Created Time: Wed Mar 20 18:04:47 2019
 ************************************************************************/

#include <mylib.h>
#include <net/ip.h>
#include <net/tcp.h>
#include <mem/memory.h>
#include <test_func.h>

int main() {
    HelloFunc();
    ip_function();
    tcp_function();
    mem_function();
    test_func();
    return 1;
}
