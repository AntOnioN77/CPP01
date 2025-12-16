
#include <sstream>
#include <fstream>
#include <iostream>

std::string compose_filename(char* original)
{
	std::string filename(original);
	filename.append(".replace");

	return filename;
}

static std::string f_to_string(char* original)
{
	std::ifstream file(original);
	if(!file)
	{
		std::cout <<"Fail open " <<original <<std::endl;
		return "";
	}

	std::ostringstream input;
	input << file.rdbuf();

	std::string content = input.str();
	return (content);

}

static void str_to_file(const std::string& content, const std::string& filename)
{
	std::ofstream output(filename.c_str());
	if(!output)
	{
		std::cout <<"fail create " <<filename <<std::endl;
		return; 
	}
	output << content;
}

static void ft_replace(std::string& src, const std::string& occ, const std::string& subs)
{
	size_t position = 0;

	if(occ.empty())
		return;
	
	while(std::string::npos != (position = src.find(occ, position))) 
	{
		src.erase(position, occ.length());
		src.insert(position, subs);
		position += subs.length(); 
	}
}

int main(int argc, char **argv)
{

	if (argc != 4)
	{
		std::cout <<"Use: ./SED <file> <s1> <s2>" <<std::endl;
		return 1;
	}

	std::string content = f_to_string(argv[1]);

	ft_replace(content, argv[2], argv[3]);

	std::string filename = compose_filename(argv[1]);
	str_to_file(content, filename);
}

