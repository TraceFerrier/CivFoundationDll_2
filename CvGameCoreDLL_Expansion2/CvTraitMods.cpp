#include "CvGameCoreDLLPCH.h"
#include "CvModUtils.h"

void CvTraitEntry::ApplyTraitMods()
{
	ModHandicapTypes handicap = GetHandicapType();
	int eCivilianUnitCombat = GC.getInfoTypeForString("UNITCOMBAT_CIVILIAN");
	int eMeleeUnitCombat = GC.getInfoTypeForString("UNITCOMBAT_MELEE");
	int eMountedUnitCombat = GC.getInfoTypeForString("UNITCOMBAT_MOUNTED");
	int eArcherUnitCombat = GC.getInfoTypeForString("UNITCOMBAT_ARCHER");
	int eGunUnitCombat = GC.getInfoTypeForString("UNITCOMBAT_GUN");
	int eArmorUnitCombat = GC.getInfoTypeForString("UNITCOMBAT_ARMOR");
	int eSiegeUnitCombat = GC.getInfoTypeForString("UNITCOMBAT_SIEGE");
	int eBomberUnitCombat = GC.getInfoTypeForString("UNITCOMBAT_BOMBER");

	if(strcmp(GetType(), "TRAIT_MASTERS_OF_TECHNOLOGY") == 0)
	{
		if (handicap == eDeity)
		{
			m_iGreatScientistRateModifier = 35;
			m_iTradeRouteResourceModifier = 35;
			m_iLandTradeRouteRangeBonus = 6;
			m_iTradeReligionModifier = 35;
			m_iPopulationUnhappinessModifier = -35;
			m_iWonderProductionModifier = 35;
			m_iExtraFoundedCityTerritoryClaimRange = 7;
			m_iCityStateFriendshipModifier = 35;
		}
		else if (handicap == eImmortal)
		{
			m_iGreatScientistRateModifier = 25;
			m_iTradeRouteResourceModifier = 25;
			m_iLandTradeRouteRangeBonus = 5;
			m_iTradeReligionModifier = 25;
			m_iPopulationUnhappinessModifier = -25;
			m_iWonderProductionModifier = 25;
			m_iExtraFoundedCityTerritoryClaimRange = 5;
			m_iCityStateFriendshipModifier = 25;
		}
		else if (handicap == eEmperor)
		{
			m_iGreatScientistRateModifier = 20;
			m_iTradeRouteResourceModifier = 20;
			m_iLandTradeRouteRangeBonus = 4;
			m_iTradeReligionModifier = 20;
			m_iPopulationUnhappinessModifier = -20;
			m_iWonderProductionModifier = 20;
			m_iExtraFoundedCityTerritoryClaimRange = 3;
			m_iCityStateFriendshipModifier = 25;
		}
		else if (handicap == eKing)
		{
			m_iGreatScientistRateModifier = 10;
			m_iTradeRouteResourceModifier = 10;
			m_iLandTradeRouteRangeBonus = 2;
			m_iTradeReligionModifier = 10;
			m_iPopulationUnhappinessModifier = -10;
			m_iWonderProductionModifier = 10;
			m_iExtraFoundedCityTerritoryClaimRange = 1;
			m_iCityStateFriendshipModifier = 10;
		}
		else if (handicap == ePrince)
		{
			m_iGreatScientistRateModifier = 0;
			m_iTradeRouteResourceModifier = 0;
			m_iLandTradeRouteRangeBonus = 0;
			m_iTradeReligionModifier = 0;
			m_iPopulationUnhappinessModifier = 0;
			m_iWonderProductionModifier = 0;
			m_iExtraFoundedCityTerritoryClaimRange = 0;
			m_iCityStateFriendshipModifier = 0;
		}
		else
		{
			m_iGreatScientistRateModifier = 0;
			m_iTradeRouteResourceModifier = 0;
			m_iLandTradeRouteRangeBonus = 0;
			m_iTradeReligionModifier = 0;
			m_iPopulationUnhappinessModifier = 0;
			m_iWonderProductionModifier = 0;
			m_iExtraFoundedCityTerritoryClaimRange = 0;
			m_iCityStateFriendshipModifier = 0;
		}
	}
	else if (strcmp(GetType(), "TRAIT_FAST_CIVILIANS") == 0)
	{
		if (handicap == eDeity)
		{
			m_piMovesChangeUnitCombats[eCivilianUnitCombat] = 3;
			m_piMovesChangeUnitCombats[eMeleeUnitCombat] = 3;
			m_piMovesChangeUnitCombats[eMountedUnitCombat] = 2;
			m_piMovesChangeUnitCombats[eArcherUnitCombat] = 2;
			m_piMovesChangeUnitCombats[eGunUnitCombat] = 2;
			m_piMovesChangeUnitCombats[eArmorUnitCombat] = 3;
			m_piMovesChangeUnitCombats[eSiegeUnitCombat] = 2;
			m_piMovesChangeUnitCombats[eBomberUnitCombat] = 3;
		}
		else if (handicap == eImmortal)
		{
			m_piMovesChangeUnitCombats[eCivilianUnitCombat] = 2;
			m_piMovesChangeUnitCombats[eMeleeUnitCombat] = 2;
			m_piMovesChangeUnitCombats[eMountedUnitCombat] = 1;
			m_piMovesChangeUnitCombats[eArcherUnitCombat] = 1;
			m_piMovesChangeUnitCombats[eGunUnitCombat] = 1;
			m_piMovesChangeUnitCombats[eArmorUnitCombat] = 2;
			m_piMovesChangeUnitCombats[eSiegeUnitCombat] = 1;
			m_piMovesChangeUnitCombats[eBomberUnitCombat] = 1;
		}
		else if (handicap == eEmperor)
		{
			m_piMovesChangeUnitCombats[eCivilianUnitCombat] = 1;
			m_piMovesChangeUnitCombats[eMeleeUnitCombat] = 1;
			m_piMovesChangeUnitCombats[eMountedUnitCombat] = 1;
			m_piMovesChangeUnitCombats[eArcherUnitCombat] = 1;
			m_piMovesChangeUnitCombats[eGunUnitCombat] = 1;
			m_piMovesChangeUnitCombats[eArmorUnitCombat] = 1;
			m_piMovesChangeUnitCombats[eSiegeUnitCombat] = 1;
			m_piMovesChangeUnitCombats[eBomberUnitCombat] = 1;
		}
		else if (handicap == eKing)
		{
			m_piMovesChangeUnitCombats[eCivilianUnitCombat] = 1;
			m_piMovesChangeUnitCombats[eMeleeUnitCombat] = 0;
			m_piMovesChangeUnitCombats[eMountedUnitCombat] = 0;
			m_piMovesChangeUnitCombats[eArcherUnitCombat] = 0;
			m_piMovesChangeUnitCombats[eGunUnitCombat] = 0;
			m_piMovesChangeUnitCombats[eArmorUnitCombat] = 1;
			m_piMovesChangeUnitCombats[eSiegeUnitCombat] = 0;
			m_piMovesChangeUnitCombats[eBomberUnitCombat] = 1;
		}
		else
		{
			m_piMovesChangeUnitCombats[eCivilianUnitCombat] = 0;
			m_piMovesChangeUnitCombats[eMeleeUnitCombat] = 0;
			m_piMovesChangeUnitCombats[eMountedUnitCombat] = 0;
			m_piMovesChangeUnitCombats[eArcherUnitCombat] = 0;
			m_piMovesChangeUnitCombats[eGunUnitCombat] = 0;
			m_piMovesChangeUnitCombats[eArmorUnitCombat] = 0;
			m_piMovesChangeUnitCombats[eSiegeUnitCombat] = 0;
			m_piMovesChangeUnitCombats[eBomberUnitCombat] = 0;
		}
	}
	

}