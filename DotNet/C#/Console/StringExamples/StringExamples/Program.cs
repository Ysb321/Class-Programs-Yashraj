using System;

namespace Program
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string name = "Hello Name";
            Console.WriteLine("Length of string: " + name.Length); // getting length of string
            Console.WriteLine("LowerCase of string: " + name.ToLower());
            Console.WriteLine("UpperCase of String: " + name.ToUpper());

            Status obj = new Status();

            string status = "Hell ow";
            string requestType = "Web";

            // Using Trim() to remove spaces and ToLower() for case-insensitive comparison
            if (obj.GetMessage().ToLower().Trim() == status.ToLower().Trim() &&
                obj.RequestType().ToLower().Trim() == requestType.ToLower().Trim())
            {
                Console.WriteLine("Message is Same.");
            }
            else
            {
                Console.WriteLine("Message is Different.");
            }

            if (obj.GetMessage().ToLower().Trim() == status.ToLower().Trim() ||
                obj.RequestType().ToLower().Trim() == requestType.ToLower().Trim())
            {
                Console.WriteLine("Message is Same.");
            }
            else
            {
                Console.WriteLine("Message is Different.");
            }

            int number = 5;
            number += 6;
            Console.WriteLine("Addition: " + number);
            number -= 4;
            Console.WriteLine("Subtraction: " + number);
            number++;
            Console.WriteLine("Increment by one: " + number);
            number--;
            Console.WriteLine("Decrement by one: " + number);
            Console.ReadLine();
        }
    }

    public class Status // default access specifier is internal
    {
        public string GetMessage()
        {
            return "Hellow";
        }

        public string RequestType()
        {
            return "web";
        }
    }
}