//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDEngineDatabaseOperation.h"

@class NSObject;
@protocol DMDDeviceStateProvider;

@interface DMDEngineDatabaseInitializationOperation : DMDEngineDatabaseOperation
{
    NSObject<DMDDeviceStateProvider> *_deviceStateProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010003bf68
@property(retain, nonatomic) NSObject<DMDDeviceStateProvider> *deviceStateProvider; // @synthesize deviceStateProvider=_deviceStateProvider;
- (_Bool)destroyPersistentStoresWithError:(id *)arg1;	// IMP=0x000000010003bb0c
- (_Bool)updateMetadataForManagedObjectContext:(id)arg1 error:(id *)arg2;	// IMP=0x000000010003b8f0
- (void)fixupDatabaseWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010003afb8
- (void)loadPersistentStoresWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010003aabc
- (void)destroyLegacyDatabaseIfNeeded;	// IMP=0x000000010003a684
- (void)main;	// IMP=0x000000010003a460
- (void)operationWillStart;	// IMP=0x000000010003a410
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010003a264
- (_Bool)isReady;	// IMP=0x000000010003a1d8
- (void)dealloc;	// IMP=0x000000010003a16c

@end

