//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CPLCloudKitScopeProvider-Protocol.h"

@class CKRecordZoneID, CPLCloudKitScope, CPLCloudKitZoneIdentification, CPLEngineScope, NSArray, NSDictionary;

@protocol CPLCloudKitZoneManager <CPLCloudKitScopeProvider>
- (CKRecordZoneID *)defaultZoneIDForMainScope;
- (CKRecordZoneID *)mainScopeZoneIDFromZoneIDs:(NSArray *)arg1;
- (_Bool)isZoneIDForMainScopeIdentifier:(CKRecordZoneID *)arg1;
- (CPLCloudKitZoneIdentification *)zoneIdentificationForCloudKitScope:(CPLCloudKitScope *)arg1 engineScope:(CPLEngineScope *)arg2;
- (long long)scopeTypeForCloudKitScope:(CPLCloudKitScope *)arg1 proposedScopeType:(long long)arg2 fetchedRecords:(NSDictionary *)arg3;
- (NSArray *)recordsToFetchToIdentifyCloudKitScope:(CPLCloudKitScope *)arg1 proposedScopeType:(long long)arg2;
@end

