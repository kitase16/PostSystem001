#include <iostream>
#include <variant>
#include <string>
#include <cstdint>
#include <cfloat>
#include <vector>


enum class CommandA {None,Start,Hello,End,Bye,exit,Last,Select,Do,Result};
enum class CommandB {None,Number,Float,Text,Start,Exit,End,ForWord,Back,Left,Right,Centor,Stop,Restart,Select,Do,Result};
struct MAP {
	const double hx = 1.0;
	const double hz = 1.0;
	const double vy = 1.0;
};
typedef std::variant<CommandA, CommandB, std::intmax_t, std::float_t, std::string,MAP> Var;

struct System_Poster {
	typedef CommandA WithIn;
	typedef CommandB Command;
	std::vector<Var> Commands;
	Var Idx = -1;
	MAP Region;
};

int main() {
	System_Poster sp;
	Var now;
}