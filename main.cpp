#include "queue.h"
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        std::cerr << "Not enough args provided" << std::endl;
        return 0;
    }
    std::string file_name = argv[1];
    std::ifstream infile(file_name);

    int a;
    int windows_available = -1;

    while (infile >> windows_available)
    {
        if (windows_available == -1)
        {
            windows_available = a;
        }
    }

    string windows_str;

    getline(infile,windows_str);

    windows_available = stoi(windows_str);

    int windows[windows_available];

    Queue<int> PeopleWaiting;

    bool run = true;
    int time = 0;


    while(run){

      for(int i = 0; i < windows_available; i++){

        if(windows[i] > 0){
          windows[i]--;
        }
      }


      getline(infile,windows_str);
      int currentTimeStamp = stoi(windows_str);

      if(currentTimeStamp == time){
        getline(infile,windows_str);
        int numStudents = stoi(windows_str);

        for(int i = 0; i < numStudents; i++){

          getline(infile,windows_str);
          PeopleWaiting.enqueue(stoi(windows_str));

          }
        }

      for(int i = 0; i < windows_available; i++){

          if(windows[i] == 0){

            windows[i] = PeopleWaiting.dequeue();


        }



      }

      for(int i = 0; i < windows_available; i++){

          if(windows[i]==0){

            continue;

        }
          run = false;

      }

    }














    // Queue<int> Clutch;
    //
    // Clutch.enqueue(1);
    // cout << Clutch.dequeue() << endl;
    //
    // for(int i=0;i<10;i++){
    //   Clutch.enqueue(i);
    //
    // }
    //
    // for(int i=0;i<10;i++){
    //   cout<< Clutch.dequeue() << endl;
    // }






}
