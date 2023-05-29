#include<iostream>
#include<vector>

template<typename T1, typename T2>
class Registrator
{
private:
	struct Reg
	{
		T1 first;
		T2 second;
	};
	Reg t;
	std::vector <Reg> checklist;
public:
	
	void add()
	{
		std::cout << "Enter the key value :";
		std::cin >> t.first;
		
		std::cout << "Enter a value :";
		std::cin >> t.second;
		
		checklist.push_back(t);
	};
	void remove()
	{
		std::cout << "Enter the key value :";
		std::cin >> t.first;
		bool fin = false;
		int i = 0;
		while (i < checklist.size())
		{
			if (checklist[i].first == t.first)
			{
				std::swap(checklist[i], checklist.back());
				checklist.pop_back();
				fin = true;
				i = 0;
			}
			else
				i++;
		}
		if (!fin)
			std::cout << "Not found" << std::endl;
	};
	void print()
	{
		for (int i=0;i<checklist.size();i++)
		{
			std::cout <<"first - "<< checklist[i].first<<"    second - "<<checklist[i].second<<std::endl;
		}
	};
	void find()
	{
		std::cout << "Enter the key value :";
		std::cin >> t.first;
		bool fin = false;
		for (int i = 0; i < checklist.size(); i++)
		{
			if (checklist[i].first == t.first)
			{
				std::cout << "first - " << checklist[i].first << "    second - " << checklist[i].second << std::endl;
				fin = true;
			}
			
		}
		if(!fin) 
			std::cout << "Not found" << std::endl;
			
	}
};

int main()
{	
	bool end = true;
	Registrator<int,int> reg;
	while (end)
	{
		int num = NULL;
		std::cout << "1-add\n2-remove\n3-print\n4-find\n5-end\n";
		std::cin >> num;
		switch (num)
		{
		case 1:
		{
			reg.add();
			break;
		}
		case 2:
		{
			reg.remove();
			break;
		}
		case 3:
		{
			reg.print();
			break;
		}
		case 4:
		{
			reg.find();
			break;
		}
		case 5:
		{
			end = false;
			break;
		}
		default:
		{
			std::cout << "Wrong\n";
			break;
		}
			
		}
	}
	
}
