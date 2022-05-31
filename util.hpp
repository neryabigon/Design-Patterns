
#include <iostream>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <stdexcept>
#include "data.hpp"
#include "activeObject.hpp"

#ifndef UTIL_HPP
#define UTIL_HPP
extern activeObject *ao1;
extern activeObject *ao2;
extern activeObject *ao3;
extern activeObject *object1;
extern activeObject *object2;
extern activeObject *object3;

void* caesarCipher(void*);
void* reverseCapitalization(void*);
void* sendResult(void*);
void *moveToNext(void*);
void *printData(void*);

#endif
