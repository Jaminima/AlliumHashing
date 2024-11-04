using System;
using GarlicoinHashWrapper;

namespace AlliumHashingTest
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello, World!");

            string input = "700000005d385ba114d079971b29a9418fd0549e7d68a95c7f168621a314201000000000578586d149fd07b22f3a8a347c516de7052f034d2b76ff68e0d6ecff9b77a45489e3fd511732011df0731000";
            
            byte[] inputBytes = new byte[input.Length / 2];
            for (int i = 0; i < inputBytes.Length; i++)
            {
                inputBytes[i] = Convert.ToByte(input.Substring(i * 2, 2), 16);
            }

            byte[] result = HashFunctions.SumAllium(inputBytes);

            Console.WriteLine(BitConverter.ToString(result));
        }
    }
}
