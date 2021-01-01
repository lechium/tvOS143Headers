/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface IMDCKMessageSyncCKOperationFactory : NSObject
-(id)_messageFetchRecordZoneChangesOptionsDictionaryUsingToken:(id)arg1 zoneID:(id)arg2 resultsLimit:(unsigned long long)arg3 ;
-(id)_operationGroupWithName:(id)arg1 ;
-(id)_fetchOptionsDictionaryWithFetchOptions:(id)arg1 andZoneID:(id)arg2 ;
-(id)fetchMessageZoneChangesCKOperationUsingToken:(id)arg1 zoneID:(id)arg2 resultsLimit:(unsigned long long)arg3 operationGroupName:(id)arg4 activity:(id)arg5 ;
-(id)saveMessagesCKOperationUsingRecordsToSave:(id)arg1 operationGroupName:(id)arg2 activity:(id)arg3 ;
-(id)deleteMessageCKOperationUsingRecordIDstoDelete:(id)arg1 activity:(id)arg2 ;
-(id)fetchArchivedRecordsOperationWithSyncToken:(id)arg1 zoneID:(id)arg2 activity:(id)arg3 ;
@end
