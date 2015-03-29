#include "CvGameCoreDLLPCH.h"
#include "CvModUtils.h"

void CvPromotionEntry::ApplyPromotionMods()
{
	ModHandicapTypes handicap = GetHandicapType();
	if(strcmp(GetType(), "PROMOTION_SECOND_FOUNDATION_ATTACK_SUPPRESS_HIGH") == 0)
	{
		if (handicap == eDeity)
		{
			m_iOpenRangedAttackMod = -65;
			m_iRoughRangedAttackMod = -65;
			m_iAttackMod = -65;
			m_iCityAttackPercent = -65;
			m_iMovesChange = -1;
		}
		else if (handicap == eImmortal)
		{
			m_iOpenRangedAttackMod = -55;
			m_iRoughRangedAttackMod = -55;
			m_iAttackMod = -55;
			m_iCityAttackPercent = -55;
			m_iMovesChange = -1;
		}
		else if (handicap == eEmperor)
		{
			m_iOpenRangedAttackMod = -40;
			m_iRoughRangedAttackMod = -40;
			m_iAttackMod = -40;
			m_iCityAttackPercent = -40;
			m_iMovesChange = -1;
		}
		else if (handicap == eKing)
		{
			m_iOpenRangedAttackMod = -30;
			m_iRoughRangedAttackMod = -30;
			m_iAttackMod = -30;
			m_iCityAttackPercent = -30;
			m_iMovesChange = -1;
		}
		else
		{
			m_iOpenRangedAttackMod = -25;
			m_iRoughRangedAttackMod = -25;
			m_iAttackMod = -25;
			m_iCityAttackPercent = -25;
			m_iMovesChange = -1;
		}
	}
	else if(strcmp(GetType(), "PROMOTION_SECOND_FOUNDATION_ATTACK_SUPPRESS_MEDIUM") == 0)
	{
		if (handicap == eDeity)
		{
			m_iOpenRangedAttackMod = -45;
			m_iRoughRangedAttackMod = -45;
			m_iAttackMod = -45;
			m_iCityAttackPercent = -45;
			m_iMovesChange = -1;
		}
		else if (handicap == eImmortal)
		{
			m_iOpenRangedAttackMod = -35;
			m_iRoughRangedAttackMod = -35;
			m_iAttackMod = -35;
			m_iCityAttackPercent = -35;
			m_iMovesChange = -1;
		}
		else if (handicap == eEmperor)
		{
			m_iOpenRangedAttackMod = -25;
			m_iRoughRangedAttackMod = -25;
			m_iAttackMod = -25;
			m_iCityAttackPercent = -25;
			m_iMovesChange = -1;
		}
		else if (handicap == eKing)
		{
			m_iOpenRangedAttackMod = -20;
			m_iRoughRangedAttackMod = -20;
			m_iAttackMod = -20;
			m_iCityAttackPercent = -20;
			m_iMovesChange = -1;
		}
		else
		{
			m_iOpenRangedAttackMod = -15;
			m_iRoughRangedAttackMod = -15;
			m_iAttackMod = -15;
			m_iCityAttackPercent = -15;
			m_iMovesChange = -1;
		}
	}
	else if(strcmp(GetType(), "PROMOTION_SECOND_FOUNDATION_ATTACK_SUPPRESS_LOW") == 0)
	{
		if (handicap == eDeity)
		{
			m_iOpenRangedAttackMod = -30;
			m_iRoughRangedAttackMod = -30;
			m_iAttackMod = -30;
			m_iCityAttackPercent = -30;
			m_iMovesChange = -1;
		}
		else if (handicap == eImmortal)
		{
			m_iOpenRangedAttackMod = -20;
			m_iRoughRangedAttackMod = -20;
			m_iAttackMod = -20;
			m_iCityAttackPercent = -20;
			m_iMovesChange = -1;
		}
		else if (handicap == eEmperor)
		{
			m_iOpenRangedAttackMod = -15;
			m_iRoughRangedAttackMod = -15;
			m_iAttackMod = -15;
			m_iCityAttackPercent = -15;
			m_iMovesChange = -1;
		}
		else if (handicap == eKing)
		{
			m_iOpenRangedAttackMod = -10;
			m_iRoughRangedAttackMod = -10;
			m_iAttackMod = -10;
			m_iCityAttackPercent = -10;
			m_iMovesChange = 0;
		}
		else
		{
			m_iOpenRangedAttackMod = -10;
			m_iRoughRangedAttackMod = -10;
			m_iAttackMod = -10;
			m_iCityAttackPercent = -10;
			m_iMovesChange = 0;
		}
	}

	else if(strcmp(GetType(), "PROMOTION_SECOND_FOUNDATION_DEFENSE_HIGH") == 0)
	{
		if (handicap == eDeity)
		{
			m_iDefenseMod = 40;
			m_iRangedDefenseMod = 40;
			m_iOpenRangedAttackMod = 20;
			m_iRoughRangedAttackMod = 20;
			m_iAttackMod = 20;
		}
		else if (handicap == eImmortal)
		{
			m_iDefenseMod = 30;
			m_iRangedDefenseMod = 30;
			m_iOpenRangedAttackMod = 15;
			m_iRoughRangedAttackMod = 15;
			m_iAttackMod = 15;
		}
		else if (handicap == eEmperor)
		{
			m_iDefenseMod = 25;
			m_iRangedDefenseMod = 25;
			m_iOpenRangedAttackMod = 10;
			m_iRoughRangedAttackMod = 10;
			m_iAttackMod = 10;
		}
		else
		{
			m_iDefenseMod = 20;
			m_iRangedDefenseMod = 20;
			m_iOpenRangedAttackMod = 10;
			m_iRoughRangedAttackMod = 10;
			m_iAttackMod = 10;
		}
	}

	else if(strcmp(GetType(), "PROMOTION_SECOND_FOUNDATION_DEFENSE_MEDIUM") == 0)
	{
		if (handicap == eDeity)
		{
			m_iDefenseMod = 25;
			m_iRangedDefenseMod = 25;
			m_iOpenRangedAttackMod = 15;
			m_iRoughRangedAttackMod = 15;
			m_iAttackMod = 15;
		}
		else if (handicap == eImmortal)
		{
			m_iDefenseMod = 20;
			m_iRangedDefenseMod = 20;
			m_iOpenRangedAttackMod = 10;
			m_iRoughRangedAttackMod = 10;
			m_iAttackMod = 10;
		}
		else if (handicap == eEmperor)
		{
			m_iDefenseMod = 15;
			m_iRangedDefenseMod = 15;
			m_iOpenRangedAttackMod = 10;
			m_iRoughRangedAttackMod = 10;
			m_iAttackMod = 5;
		}
		else
		{
			m_iDefenseMod = 15;
			m_iRangedDefenseMod = 15;
			m_iOpenRangedAttackMod = 5;
			m_iRoughRangedAttackMod = 5;
			m_iAttackMod = 5;
		}
	}

	else if(strcmp(GetType(), "PROMOTION_SECOND_FOUNDATION_DEFENSE_LOW") == 0)
	{
		if (handicap == eDeity)
		{
			m_iDefenseMod = 15;
			m_iRangedDefenseMod = 15;
			m_iOpenRangedAttackMod = 10;
			m_iRoughRangedAttackMod = 10;
			m_iAttackMod = 10;
		}
		else if (handicap == eImmortal)
		{
			m_iDefenseMod = 10;
			m_iRangedDefenseMod = 10;
			m_iOpenRangedAttackMod = 5;
			m_iRoughRangedAttackMod = 5;
			m_iAttackMod = 5;
		}
		else if (handicap == eEmperor)
		{
			m_iDefenseMod = 10;
			m_iRangedDefenseMod = 10;
			m_iOpenRangedAttackMod = 5;
			m_iRoughRangedAttackMod = 5;
			m_iAttackMod = 5;
		}
		else
		{
			m_iDefenseMod = 10;
			m_iRangedDefenseMod = 10;
			m_iOpenRangedAttackMod = 5;
			m_iRoughRangedAttackMod = 5;
			m_iAttackMod = 5;
		}
	}

	else if(strcmp(GetType(), "PROMOTION_FOUNDATION_ADVANCED_SHIELD") == 0)
	{
		if (handicap == eDeity)
		{
			m_iDefenseMod = 50;
			m_iRangedDefenseMod = 50;
		}
		else if (handicap == eImmortal)
		{
			m_iDefenseMod = 40;
			m_iRangedDefenseMod = 40;
		}
		else if (handicap == eEmperor)
		{
			m_iDefenseMod = 30;
			m_iRangedDefenseMod = 30;
		}
		else
		{
			m_iDefenseMod = 25;
			m_iRangedDefenseMod = 25;
		}
	}

	else if(strcmp(GetType(), "PROMOTION_FOUNDATION_MENTALIC_SHIELD") == 0)
	{
		if (handicap == eDeity)
		{
			m_iDefenseMod = 60;
			m_iRangedDefenseMod = 60;
		}
		else if (handicap == eImmortal)
		{
			m_iDefenseMod = 50;
			m_iRangedDefenseMod = 50;
		}
		else if (handicap == eEmperor)
		{
			m_iDefenseMod = 40;
			m_iRangedDefenseMod = 40;
		}
		else
		{
			m_iDefenseMod = 30;
			m_iRangedDefenseMod = 30;
		}
	}

	else if(strcmp(GetType(), "PROMOTION_FOUNDATION_VISIBILITY") == 0)
	{
		if (handicap == eDeity)
		{
			m_iVisibilityChange = 2;
		}
		else if (handicap == eImmortal)
		{
			m_iVisibilityChange = 1;
		}
		else if (handicap == eEmperor)
		{
			m_iVisibilityChange = 1;
		}
		else
		{
			m_iVisibilityChange = 0;
		}
	}

}