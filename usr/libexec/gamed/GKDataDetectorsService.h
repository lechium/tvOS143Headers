//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GKDataDetectorsService : NSObject
{
}

+ (void)loadStoreGamesListWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001250d8
+ (id)loadLocalGamesList;	// IMP=0x0000000100124f7c
+ (void)clearData;	// IMP=0x0000000100124f78
+ (void)updateData;	// IMP=0x0000000100124de0
+ (void)pushDataToDataDetectors:(id)arg1;	// IMP=0x0000000100124ddc
+ (id)dataDetectorsEntitiesForDictionary:(id)arg1;	// IMP=0x0000000100124c34
+ (id)dataDetectorsKeywords;	// IMP=0x0000000100124a40
+ (id)dataDetectorsStorageFilePath;	// IMP=0x00000001001248f8

@end
