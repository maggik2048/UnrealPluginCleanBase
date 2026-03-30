#include "MySpartaLog.h"
#include "Modules/ModuleManager.h"
#include "Engine/Engine.h" // 추가

DEFINE_LOG_CATEGORY(LogMySpartaModule);

void FMySpartaLog::StartupModule()
{
    UE_LOG(LogMySpartaModule, Warning, TEXT("MySpartaLog is Start"));

    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(
            -1, 5.f, FColor::Red, TEXT("MySpartaLog Loaded")
        );
    }
}

void FMySpartaLog::ShutdownModule() {}

IMPLEMENT_MODULE(FMySpartaLog, MySpartaLog);