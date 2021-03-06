//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLGeocoder, NSHashTable, PDDatabaseManager;

@interface PDWorldRegionAggregator : NSObject
{
    PDDatabaseManager *_databaseManager;	// 8 = 0x8
    struct os_unfair_lock_s _lockOperation;	// 16 = 0x10
    _Bool _performingOperation;	// 20 = 0x14
    _Bool _operationUserInitiated;	// 21 = 0x15
    _Bool _addingOrLocalizingRegions;	// 22 = 0x16
    _Bool _willRequireProcessing;	// 23 = 0x17
    CLGeocoder *_geocoder;	// 24 = 0x18
    NSHashTable *_observers;	// 32 = 0x20
    struct os_unfair_lock_s _lockObservers;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001002013dc
- (void)_accessObserversWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001002011d4
- (void)removeObserver:(id)arg1;	// IMP=0x0000000100201170
- (void)addObserver:(id)arg1;	// IMP=0x000000010020110c
- (id)_worldRegionFromPlacemark:(id)arg1 orAddress:(id)arg2;	// IMP=0x0000000100200bc0
- (void)_associateTransaction:(id)arg1 toRegion:(id)arg2;	// IMP=0x0000000100200a84
- (void)_processTransaction:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001ffdec
- (void)_processRemainingTransactionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001ffa78
- (void)_processMissingLocalizedContent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001ffa5c
- (void)_processMissingLocalizedContentWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001ff548
- (void)_cleanupRegionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001ff4fc
- (void)triggerAggregatorFromUserAction:(_Bool)arg1;	// IMP=0x00000001001fe9c0
- (_Bool)isProcessing;	// IMP=0x00000001001fe988
- (id)updateRegionWithIdentifier:(id)arg1 localizedName:(id)arg2 boundingRegion:(CDStruct_2b0c6e0b)arg3 mapsIdentifier:(unsigned long long)arg4 providerIdentifier:(int)arg5;	// IMP=0x00000001001fe8d8
- (id)updateRegionWithIdentifier:(id)arg1 localizedName:(id)arg2 localeIdentifier:(id)arg3 boundingRegion:(CDStruct_2b0c6e0b)arg4 mapsIdentifier:(unsigned long long)arg5 providerIdentifier:(int)arg6;	// IMP=0x00000001001fe758
- (void)transactionSourceIdentifier:(id)arg1 didReceiveTransaction:(id)arg2 oldTransaction:(id)arg3;	// IMP=0x00000001001fe708
- (void)placemarkFound:(id)arg1 forTransaction:(id)arg2;	// IMP=0x00000001001fe638
- (_Bool)willRequireProcessing;	// IMP=0x00000001001fe600
- (_Bool)_hasTransactionsToProcess;	// IMP=0x00000001001fe5f0
- (_Bool)_hasRegionsOrTransactionsToProcess;	// IMP=0x00000001001fe54c
- (id)initWithDatabaseManager:(id)arg1;	// IMP=0x00000001001fe430

@end

