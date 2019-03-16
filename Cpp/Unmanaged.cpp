#include "stdafx.h"

#include "Unmanaged.h"

namespace ConsoleApp
{
    ProgramImpl::ProgramImpl(System::String^ amessage)
    {
        message = amessage;
    }

    void ProgramImpl::Print()
    {
        Console::WriteLine(message.get());
    }
}
