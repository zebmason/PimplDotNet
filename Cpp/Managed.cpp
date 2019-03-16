#include "stdafx.h"

#include "Managed.h"
#include "Unmanaged.h"

namespace ConsoleApp
{
    MANAGED_DESTRUCTOR(Program)

    Program::Program(String^ amessage)
        : _impl(new ProgramImpl(amessage))
    {
    }

    void Program::Print()
    {
        _impl->Print();
    }
}

int main(array<System::String^> ^args)
{
    // This is noddy code
    auto noddy = gcnew ConsoleApp::Program("Hello World!");
    noddy->Print();

    return 0;
}
