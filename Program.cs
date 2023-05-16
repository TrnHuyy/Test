using System.IO;
using System;
using System.IO;

namespace CD
{
    public class Program
    {
        public static void Main(string[] args)
        {
            var drives = DriveInfo.GetDrives();
            //DriveInfo drive = new DriveInfo("C");

            foreach(var drive in drives)
            {
                Console.WriteLine($"{drive.Name}");
                Console.WriteLine($"{drive.DriveType}");
                Console.WriteLine($"{drive.VolumeLabel}");
                Console.WriteLine($"{drive.DriveFormat}");
                Console.WriteLine($"{drive.TotalSize}");
                Console.WriteLine($"{drive.TotalFreeSpace}");
            }
            
            
        }
    }
}