#pragma once

#include <msclr\auto_gcroot.h>

namespace ConsoleApp
{
    using namespace System;

    class ProgramImpl
    {
        private: msclr::auto_gcroot<String^> message = String::Empty;

        public: ProgramImpl(String^ amessage);

        public: void Print();
    };
}
