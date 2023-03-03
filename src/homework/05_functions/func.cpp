//add include statements
#include "func.h"

//add function code here

double get_gc_content(const std::string & dna)
{
    int count = 0;

    for(int i = 0; i < dna.size(); i++)
    {
        if(dna[i] == 'G' || dna[i] == 'C')
        {
            count ++;
        }
    }
    
    double total_dna = dna.size();
    double gc_content = count / total_dna;
    return gc_content;
}


std::string reverse_string(std::string dna)
{
    std::string dna_reversed;
    for(int i = dna.size(); i > 0; i--)
    {
        dna_reversed += dna.at(i-1);
    }
    return dna_reversed;
}



std::string get_dna_complent(std::string dna)
{
    std::string reversed_string = reverse_string(dna);
    for(int i = 0; i < reversed_string.size(); i++)
    {
        switch(reversed_string[i])
        {
            case 'A':
                reversed_string[i] = 'T';
                break;
            case 'T':
                reversed_string[i] = 'A';
                break;
            case 'G':
                reversed_string[i] = 'C';
                break;
            case 'C':
                reversed_string[i] = 'G';
                break;

        }
    }
    
    std::string reverse_complement = reversed_string;
    return reverse_complement;

}

void display_menu()
{
    std::cout<<"\n\nMAIN MENU\n\n1 - Calculate GC Content\n";
	std::cout<<"2 - Find DNA complent\n3 - Exit\n";
}

