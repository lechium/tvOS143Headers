//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOrderedSet, NSString;

@interface ADOfflineMetricsMap : NSObject
{
    NSString *_path;	// 8 = 0x8
    NSOrderedSet *_offlineIdentifiers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001001d34a4
- (id)_offlineIdentifiers;	// IMP=0x00000001001d2e30
- (void)deleteAllMetrics;	// IMP=0x00000001001d2d40
- (void)deleteMetricsWithOfflineIdentifier:(id)arg1;	// IMP=0x00000001001d2afc
- (void)insertMetrics:(id)arg1 withOfflineIdentifier:(id)arg2;	// IMP=0x00000001001d2548
- (void)fetchNextMetricsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001d2114
- (id)initWithPath:(id)arg1;	// IMP=0x00000001001d208c

@end

