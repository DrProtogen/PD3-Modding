#include "SBZQuestlineMenu.h"

USBZQuestlineMenu::USBZQuestlineMenu() {
    this->StackValue = TEXT("QuestLineMenu");
    this->DesiredGoToObject = NULL;
}

bool USBZQuestlineMenu::SetQuestActive(const FName& QuestId) {
    return false;
}


