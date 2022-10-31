#ifndef GRAMMA_ANALYZER_H_
#define GRAMMA_ANALYZER_H_

#include <string>
#include "../LexicalAnalysis/two_tuple.h"
#include "../LexicalAnalysis/lexical_analyzer.h"
#include "../SemanticAnalysis/identifer_table.h"
#include "../SemanticAnalysis/middle_code_table.h"
#include "../SemanticAnalysis/temp_var_table.h"

using std::string;

using namespace std;

namespace gcp {

	class GrammaAnalyzer
	{
	private:
		struct identifier {
			std::string name = "";
			std::string value = "";
			std::string type = "";
		};

		gcp::LexicalAnalyzer LA;
		gcp::twoTuple m_current_input;

		public:
			GrammaAnalyzer();
			~GrammaAnalyzer();
			bool WriteToFile(string);
			bool match(string);
			bool P();
			bool I(string);
			bool D();
			bool Ip(string);
			bool S();
			bool Dp();
			bool A();
			bool C();
			bool L();
			IdentiferTable::identifier E();
			IdentiferTable::identifier F();
			bool N();
			IdentiferTable::identifier G();
			IdentiferTable::identifier Ep(IdentiferTable::identifier tempId);
			IdentiferTable::identifier Y();
			IdentiferTable::identifier Gp(IdentiferTable::identifier tempId);
			bool H();
			bool M();

			gcp::IdentiferTable m_identifer_table;
			gcp::MiddleCodeTable m_middle_code_table;
			gcp::TempVarTable m_temp_var_table;


	};
}
#endif // !GRAMMA_ANALYZER_H_
