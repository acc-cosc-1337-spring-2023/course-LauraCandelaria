#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "func.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("get gc content")
{
	std::string dna1 = "AGCTATAG";
	std::string dna2 = "CGCTATAG";
	REQUIRE(get_gc_content(dna1) == 0.375);
	REQUIRE(get_gc_content(dna2) == 0.5);
}

TEST_CASE("dna complement")
{
	std::string dna1 = "AAAACCCGGT";
	std::string dna2 = "CCCGGAAAAT";
	REQUIRE(get_dna_complent(dna1) == "ACCGGGTTTT");
	REQUIRE(get_dna_complent(dna2) == "ATTTTCCGGG");
}
