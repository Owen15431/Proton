#ifdef __cplusplus
extern "C" {
#endif
extern UGCQueryHandle_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateQueryUserUGCRequest(void *, AccountID_t, EUserUGCList, EUGCMatchingUGCType, EUserUGCListSortOrder, AppId_t, AppId_t, uint32);
extern UGCQueryHandle_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateQueryAllUGCRequest(void *, EUGCQuery, EUGCMatchingUGCType, AppId_t, AppId_t, uint32);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SendQueryUGCRequest(void *, UGCQueryHandle_t);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetQueryUGCResult(void *, UGCQueryHandle_t, uint32, SteamUGCDetails_t *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_ReleaseQueryUGCRequest(void *, UGCQueryHandle_t);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_AddRequiredTag(void *, UGCQueryHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_AddExcludedTag(void *, UGCQueryHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetReturnLongDescription(void *, UGCQueryHandle_t, bool);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetReturnTotalOnly(void *, UGCQueryHandle_t, bool);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetAllowCachedResponse(void *, UGCQueryHandle_t, uint32);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetCloudFileNameFilter(void *, UGCQueryHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetMatchAnyTag(void *, UGCQueryHandle_t, bool);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetSearchText(void *, UGCQueryHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetRankedByTrendDays(void *, UGCQueryHandle_t, uint32);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_RequestUGCDetails(void *, PublishedFileId_t, uint32);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateItem(void *, AppId_t, EWorkshopFileType);
extern UGCUpdateHandle_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_StartItemUpdate(void *, AppId_t, PublishedFileId_t);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemTitle(void *, UGCUpdateHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemDescription(void *, UGCUpdateHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemVisibility(void *, UGCUpdateHandle_t, ERemoteStoragePublishedFileVisibility);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemTags(void *, UGCUpdateHandle_t, const SteamParamStringArray_t *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemContent(void *, UGCUpdateHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemPreview(void *, UGCUpdateHandle_t, const char *);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SubmitItemUpdate(void *, UGCUpdateHandle_t, const char *);
extern EItemUpdateStatus cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemUpdateProgress(void *, UGCUpdateHandle_t, uint64 *, uint64 *);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SubscribeItem(void *, PublishedFileId_t);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_UnsubscribeItem(void *, PublishedFileId_t);
extern uint32 cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetNumSubscribedItems(void *);
extern uint32 cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetSubscribedItems(void *, PublishedFileId_t *, uint32);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemInstallInfo(void *, PublishedFileId_t, uint64 *, char *, uint32, bool *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemUpdateInfo(void *, PublishedFileId_t, bool *, bool *, uint64 *, uint64 *);
#ifdef __cplusplus
}
#endif
