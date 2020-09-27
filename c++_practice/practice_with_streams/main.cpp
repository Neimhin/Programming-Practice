
#include <iostream>
#include <fstream>

int main(int argc, char* argv[]){
    std::ofstream outfile;
    
    outfile.open("file created by ofstream", std::ios::out | std::ios::trunc);

    outfile << "Hello new file!\n";
    
    outfile.close();
    return 0;
}
