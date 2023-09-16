#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <sstream>

using namespace std;

struct Person {
    string type;
    string name;
};

int main()
{
    int N;
    string event;
    queue<Person> studentQueue;
    queue<Person> workerQueue;

    cin >> N;
    cin.ignore();
    for (int i = 0; i < N; i++)
    {
        getline(cin, event);
        istringstream ss(event);
        string word;
        ss >> word;

        if (word == "LLEGA")
        {
            string type, name;
            ss >> type >> name;
            if (type == "ALUMNO")
            {
                studentQueue.push({type, name});
            }
            else if (type == "TRABAJADOR")
            {
                workerQueue.push({type, name});
            }
        }
        else if (word == "ATIENDE")
        {
            if (!workerQueue.empty())
            {
                cout << workerQueue.front().name << endl;
                workerQueue.pop();
            }
            else if (!studentQueue.empty())
            {
                cout << studentQueue.front().name << endl;
                studentQueue.pop();
            }
        }
    }

    return 0;
}
