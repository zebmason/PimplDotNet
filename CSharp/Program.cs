using System;

namespace ConsoleApp
{
    class Program
    {
        private string message = string.Empty;

        public Program(string amessage)
        {
            message = amessage;
        }

        public void Print()
        {
            Console.WriteLine(message);
        }

        static void Main(string[] args)
        {
            // This is noddy code
            var noddy = new Program("Hello World!");
            noddy.Print();
        }
    }
}
