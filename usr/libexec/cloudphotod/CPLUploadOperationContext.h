//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CPLCloudKitOperationContext.h"

@class NSMutableDictionary;

@interface CPLUploadOperationContext : CPLCloudKitOperationContext
{
    NSMutableDictionary *_recordIDToProgressMap;	// 72 = 0x48
    NSMutableDictionary *_recordIDToCPLRecordMap;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000010008ce38
- (id)extendedStatusDescriptionStrings;	// IMP=0x000000010008c57c
- (id)recordForRecordID:(id)arg1;	// IMP=0x000000010008c564
- (void)recordCompletionForRecordID:(id)arg1 withError:(id)arg2;	// IMP=0x000000010008c4c8
- (void)updateProgress:(double)arg1 forRecordID:(id)arg2;	// IMP=0x000000010008c408
- (void)addRecord:(id)arg1 forRecordID:(id)arg2;	// IMP=0x000000010008c330

@end
