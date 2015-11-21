// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "TryBPPluginPrivatePCH.h"
#include "TryBPPluginBPLibrary.h"
#include "EditorBuildUtils.h"
DEFINE_LOG_CATEGORY_STATIC(LogSomething, Warning, All);
UTryBPPluginBPLibrary::UTryBPPluginBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}


//USanwuHttpObject* UTryBPPluginBPLibrary::CreateHttpObject()
//{
//	//创建Http对象
//	USanwuHttpObject* httpObj;
//	httpObj = ConstructObject<USanwuHttpObject>(USanwuHttpObject::StaticClass());
//	return httpObj;
//}

float UTryBPPluginBPLibrary::TryBPPluginSampleFunction(float Param)
{
	return -3;
}

float UTryBPPluginBPLibrary::TryBPPluginTriggerFunction(float Param)
{
	UE_LOG(LogSomething, Warning, TEXT("Map %s is OK"), "path");
	return -8;
}


