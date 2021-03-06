//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDCloudStoreContainer.h"

#import "PDCloudStoreContainerDatabaseDataSource-Protocol.h"

@class NSString, PDCardFileManager;

@interface PDPassCloudStoreContainer : PDCloudStoreContainer <PDCloudStoreContainerDatabaseDataSource>
{
    PDCardFileManager *_passManager;	// 8 = 0x8
    _Bool _canInitializeContainer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010012695c
- (id)_ubiquitousCatalogOfRecord;	// IMP=0x00000001001268e8
- (id)_catalogOfRecord;	// IMP=0x00000001001268d0
- (_Bool)_isRemoteAssetItemFromRecordType:(id)arg1;	// IMP=0x00000001001268b4
- (_Bool)_isPassCatalogItemFromRecordType:(id)arg1;	// IMP=0x0000000100126898
- (_Bool)_isPassItemFromRecordType:(id)arg1;	// IMP=0x000000010012687c
- (_Bool)_canInitializeContainer;	// IMP=0x0000000100126734
- (void)_queue_cloudStoreAccountChanged:(id)arg1;	// IMP=0x0000000100126314
- (id)cloudStoreZonesForItemType:(unsigned long long)arg1 configuration:(id)arg2 action:(unsigned long long)arg3 inContainerDatabase:(id)arg4;	// IMP=0x00000001001261c4
- (id)cloudStoreZonesForItem:(id)arg1 action:(unsigned long long)arg2 inContainerDatabase:(id)arg3;	// IMP=0x0000000100126120
- (id)zoneIDForSubscription:(id)arg1 inContainerDatabase:(id)arg2;	// IMP=0x0000000100125fe8
- (id)subscriptionForZone:(id)arg1 inContainerDatabase:(id)arg2;	// IMP=0x0000000100125e80
- (id)possibleDatabaseSubscriptionForContainerDatabase:(id)arg1;	// IMP=0x0000000100125e5c
- (id)allPossibleZoneSubscriptionsForContainerDatabase:(id)arg1;	// IMP=0x0000000100125ce8
- (id)allPossibleZoneNamesForContainerDatabase:(id)arg1;	// IMP=0x0000000100125c78
- (void)updateCloudStoreWithLocalItems:(id)arg1 recordSpecificKeys:(id)arg2 includeServerData:(_Bool)arg3 groupName:(id)arg4 groupNameSuffix:(id)arg5 qualityOfService:(long long)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00000001001259d4
- (id)identifierFromRecord:(id)arg1;	// IMP=0x00000001001258bc
- (id)recordTypesForCloudStoreItemType:(unsigned long long)arg1;	// IMP=0x00000001001257f4
- (void)processFetchedCloudStoreDataWithModifiedRecordsByDatabaseIdentifier:(id)arg1 deletedRecordsByDatabaseIdentifier:(id)arg2 carriedOverRecordsByDatabaseIdentifier:(id)arg3 request:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100124738
- (void)_queue_setContainerState:(unsigned long long)arg1 operationGroupNameSuffix:(id)arg2 retryCount:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100123600
- (_Bool)_queue_shouldFetchAndStoreCloudDataAtStartup;	// IMP=0x00000001001235f8
- (_Bool)_queue_canInitializeContainer;	// IMP=0x00000001001235e8
- (id)initWithDataSource:(id)arg1 passManager:(id)arg2;	// IMP=0x000000010012337c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

