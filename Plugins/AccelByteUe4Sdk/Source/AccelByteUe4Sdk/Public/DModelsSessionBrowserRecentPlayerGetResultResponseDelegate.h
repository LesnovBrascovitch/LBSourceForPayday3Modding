#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsSessionBrowserRecentPlayerGetResult.h"
#include "DModelsSessionBrowserRecentPlayerGetResultResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsSessionBrowserRecentPlayerGetResultResponse, FAccelByteModelsSessionBrowserRecentPlayerGetResult, Response);
