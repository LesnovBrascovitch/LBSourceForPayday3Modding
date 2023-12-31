#pragma once
#include "CoreMinimal.h"
#include "JsonObjectWrapper.h"
#include "AccelByteModelsV2GameSessionTeam.h"
#include "EAccelByteV2SessionConfigurationServerType.h"
#include "EAccelByteV2SessionJoinability.h"
#include "AccelByteModelsV2GameSessionBaseRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsV2GameSessionBaseRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ConfigurationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJsonObjectWrapper Attributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAccelByteV2SessionConfigurationServerType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAccelByteV2SessionJoinability Joinability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsV2GameSessionTeam> Teams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ClientVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ServerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Deployment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> RequestedRegions;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 MaxPlayers;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 MinPlayers;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 InactiveTimeout;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 InviteTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MatchPool;
    
    FAccelByteModelsV2GameSessionBaseRequest();
};

