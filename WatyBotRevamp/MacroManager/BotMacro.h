#pragma once
#include "MacroManager.h"

namespace Macro
{
	class BotMacro : public AbstractMacro
	{
	public:
		BotMacro(int nKey,unsigned int uDelay,unsigned int uCoolDown,std::function<bool()> fCondition) : AbstractMacro(uDelay,nKey,0,uCoolDown)
		{
			this->m_fCondition = fCondition;
		}
		~BotMacro()
		{

		}

		bool CheckCondition()
		{
			return this->CheckTime() && this->fMacroStatus && m_fCondition();
		}
		void ProcessMacro()
		{
			//SendKey(this->nValue);
			this->UpdateTime();
		}
	private:
		std::function<bool()> m_fCondition;
	};
}