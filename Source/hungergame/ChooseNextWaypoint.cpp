// Fill out your copyright notice in the Description page of Project Settings.

#include "hungergame.h"
#include "ChooseNextWaypoint.h"
#include "BehaviorTree/BlackboardComponent.h"


EBTNodeResult::Type UChooseNextWaypoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) {
	auto BlackboardComp = OwnerComp.GetBlackboardComponent();
	auto Index = BlackboardComp->GetValueAsInt(IndexKey.SelectedKeyName);
	Index++;
	BlackboardComp->SetValueAsInt(IndexKey.SelectedKeyName, Index);
	UE_LOG(LogTemp, Warning, TEXT("Waypoint index: %i, %s"), Index, *IndexKey.SelectedKeyName.ToString());
	return EBTNodeResult::Succeeded;
}
