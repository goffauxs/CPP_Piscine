#include <string>
#include <iostream>
#include <fstream>

void replace(char **argv)
{
	std::string filename(argv[1]);
	std::string s1(argv[2]);
	std::string s2(argv[3]);

	std::ifstream ifs(filename);
	if (ifs.good())
	{
		if (ifs.peek() == std::ifstream::traits_type::eof())
			std::cout << "Error: File is empty" << std::endl;
		else
		{
			std::ofstream ofs(filename.append(".replace").data());
			while (ifs.good() && ofs.good())
			{
				std::string line;
				std::size_t found;
				std::getline(ifs, line);
				found = line.find(s1, 0);
				while (found != std::string::npos)
				{
					line.erase(found, s1.length());
					line.insert(found, s2);
					found = line.find(s1, found);
				}
				ofs << line;
				if (ifs.eof())
					break;
				ofs << std::endl;
			}
			ifs.close();
			ofs.close();
		}
	}
	else
		std::cout << "Error: " << strerror(errno) << std::endl;
}

int main(int argc, char **argv)
{
	if (argc == 4)
		replace(argv);
	else
		std::cout << "Error: Usage: ./replace <filename> <string 1> <string 2>" << std::endl;
}