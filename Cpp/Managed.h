#pragma once

#include "stdafx.h"

#define MANAGED_HEADER(_CLASSNAME)   \
    public: _CLASSNAME##Impl* _impl; \
    private: virtual ~_CLASSNAME();

#define MANAGED_DESTRUCTOR(_CLASSNAME) \
    _CLASSNAME::~_CLASSNAME()          \
    {                                  \
        delete _impl;                  \
        _impl = nullptr;               \
    }

namespace ConsoleApp
{
    using namespace System;
    class ProgramImpl;

    ref class Program
    {
        MANAGED_HEADER(Program)

        public: Program(String^ amessage);

        public: void Print();
    };
}

int main(array<System::String^>^ args);
