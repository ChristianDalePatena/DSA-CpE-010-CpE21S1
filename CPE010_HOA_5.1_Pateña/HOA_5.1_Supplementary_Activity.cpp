
#include <iostream>
#include <string>
using namespace std;


class Job {
public:
    int jobID;
    string userName;
    int numPages;
    Job* next;

  
    Job(int id, string name, int pages) {
        jobID = id;
        userName = name;
        numPages = pages;
        next = nullptr;
    }


    void displayJob() {
        cout << "Job ID: " << jobID << ", User: " << userName << ", Pages: " << numPages << endl;
    }
};


class Printer {
private:
    Job* head;
    Job* tail;

public:
    Printer() {
        head = nullptr;
        tail = nullptr;
    }

    
    void addJob(int id, string user, int pages) {
        Job* newJob = new Job(id, user, pages);
        if (head == nullptr) { 
            head = newJob;
            tail = newJob;
        } else {
            tail->next = newJob;
            tail = newJob;
        }
        cout << "Job added to queue!: ";
        newJob->displayJob();
    }


    void processJobs() {
        cout << "\nProcessing all the jobs \n";
        while (head != nullptr) {
            Job* currentJob = head;
            head = head->next;

            cout << "Processing the ";
            currentJob->displayJob();

            delete currentJob;
        }
        tail = nullptr;
        cout << "All of the jobs has been processed!" << endl;
    }

  
    ~Printer() {
        while (head != nullptr) {
            Job* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    Printer printer;

    
    printer.addJob(1, "Zander", 10);
    printer.addJob(2, "Ella", 5);
    printer.addJob(3, "Alpha", 15);
    printer.addJob(4, "Sigma", 3);

    // Processing all jobs in the queue
    printer.processJobs();

    return 0;
}
