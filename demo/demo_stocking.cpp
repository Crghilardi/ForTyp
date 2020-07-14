#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <string>

#include "read_txt.hpp"
#include "../src/tree.hpp"
#include "../src/stocking_values.hpp"
#include "../src/forest_type.hpp"

int main() {
	//Variables
    std::vector<Tree> tl;

	std::ifstream treeFile;
    //relative path from build dir to demo folder
	treeFile.open("../../demo/treelist_1160805020003.txt", std::ios::in);

	while (!treeFile.eof() && treeFile.is_open()) {
		tl.push_back(parse_trees(treeFile));
	}
	treeFile.close();  

    //to see stocking array
    // std::array<double, 211> ss_out;
    // ss_out = stocking_values(tl);

    // for (auto e : ss_out) {
    //  std::cout << e << std::endl;
    // };

    //to see forest type
    int ftype = forest_type(tl,false);
    std::string ftype_name = fortyp_name(ftype);
    int ftypegroup = fortypgroup(ftype);
    std::string ftypegroup_name =fortypgroup_name(ftypegroup);

    int bad_ftype = 111;
    std::string wr_fortype = fortyp_name(bad_ftype);

    std::cout << "Forest Type: "<< ftype << std::endl;
    std::cout << "Forest Type Name: "<< ftype_name << std::endl;
    std::cout << "Forest Type Group: "<< ftypegroup << std::endl;
    std::cout << "Forest Type Group Name: "<< ftypegroup_name << std::endl;

    std::cout << "Incorrect forest type:" << wr_fortype <<std::endl;

} //end main