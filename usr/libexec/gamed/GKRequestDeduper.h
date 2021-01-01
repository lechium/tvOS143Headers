//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKDispatchGroup, GKThreadsafeDictionary, NSString;

@interface GKRequestDeduper : NSObject
{
    GKDispatchGroup *_dispatchGroup;	// 8 = 0x8
    GKThreadsafeDictionary *_processedResources;	// 16 = 0x10
    NSString *_poolName;	// 24 = 0x18
}

+ (id)deduperForPool:(id)arg1;	// IMP=0x0000000100144880
+ (id)deduper;	// IMP=0x0000000100144864
@property(copy, nonatomic) NSString *poolName; // @synthesize poolName=_poolName;
@property(retain, nonatomic) GKThreadsafeDictionary *processedResources; // @synthesize processedResources=_processedResources;
@property(retain, nonatomic) GKDispatchGroup *dispatchGroup; // @synthesize dispatchGroup=_dispatchGroup;
- (void)notifyOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000010014586c
- (void)openRequestForResources:(id)arg1 processCallback:(CDUnknownBlockType)arg2;	// IMP=0x0000000100144c34
- (void)getTransactionPool:(CDUnknownBlockType)arg1;	// IMP=0x00000001001449f8
- (void)dealloc;	// IMP=0x00000001001449a0
- (id)initWithPool:(id)arg1;	// IMP=0x00000001001448c8
- (id)init;	// IMP=0x00000001001448b8

@end

