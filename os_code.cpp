#include <iostream>
#include <vector>
using namespace std;

class Program {
public:
    int id;
    double cpuUsage;
    double memoryUsage;

    Program(int i, double cpu, double mem) {
        id = i;
        cpuUsage = cpu;
        memoryUsage = mem;
    }
};

class ResourceManager {
private:
    vector<Program> programs;
    double totalCPU;
    double totalMemory;

public:
    ResourceManager(double cpu, double mem) {
        totalCPU = cpu;
        totalMemory = mem;
    }

    void addProgram(int id, double cpu, double mem) {
        programs.push_back(Program(id, cpu, mem));
    }

    void optimizeResources() {
        double totalUsedCPU = 0, totalUsedMem = 0;
        for (auto p : programs) {
            totalUsedCPU += p.cpuUsage;
            totalUsedMem += p.memoryUsage;
        }
        if (totalUsedCPU > totalCPU || totalUsedMem > totalMemory) {
            cout << "Optimizing resources...\n";
            for (auto &p : programs) {
                p.cpuUsage = (p.cpuUsage / totalUsedCPU) * totalCPU;
                p.memoryUsage = (p.memoryUsage / totalUsedMem) * totalMemory;
            }
        }
    }

    void displayStatus() {
        cout << "\n--- Current Allocation ---\n";
        for (auto p : programs) {
            cout << "Program " << p.id << ": CPU = " << p.cpuUsage 
                 << "%, Memory = " << p.memoryUsage << "MB\n";
        }
    }
};

int main() {
    double totalCPUusage, totalMemoryusage;
    int n;

    cout << "Enter total CPU capacity (%): ";
    cin >> totalCPUusage;
    cout << "Enter total Memory capacity (MB): ";
    cin >> totalMemoryusage;

    ResourceManager manager(totalCPUusage, totalMemoryusage);

    cout << "Enter number of programs: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        double cpu, mem;
        cout << "\nProgram " << i + 1 << " CPU usage (%): ";
        cin >> cpu;
        cout << "Program " << i + 1 << " Memory usage (MB): ";
        cin >> mem;
        manager.addProgram(i + 1, cpu, mem);
    }

    manager.optimizeResources();
    manager.displayStatus();

    return 0;
}
