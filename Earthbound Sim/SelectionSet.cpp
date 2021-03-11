#include "SelectionSet.h"

void SelectionSet::CreateItems(int tempNum, std::string tempNomes[], int tempXPos[], int tempYPos[]) {


	for (int i = 0; i < tempNum; i++) {

		SelectItem* currentItem = new SelectItem(tempNomes[i], tempXPos[i], tempYPos[i]);
		selectItems.push_back(*currentItem);
	}
}

void SelectionSet::Set(int numberOfItems, std::string tempNames[], int tempXPositions[], int tempYPositions[]) {
	cursor.Set("Cursor.png", cursorXPos, cursorYPos, .7f, .7f, 0, 0);

	CreateItems(numberOfItems, tempNames, tempXPositions, tempYPositions);

}