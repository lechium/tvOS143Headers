//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AMSDTransactionStore : NSObject
{
}

+ (void)takeKeepAliveTransaction:(id)arg1 withQueue:(id)arg2 whilePerformingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010002ff60
+ (void)takeKeepAliveTransaction:(id)arg1 whilePerformingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010002fed0
+ (void)takeKeepAliveTransaction:(id)arg1;	// IMP=0x000000010002fbf8
+ (void)releaseKeepAliveTransaction:(id)arg1;	// IMP=0x000000010002f82c
+ (id)transactionsCount;	// IMP=0x000000010002f794
+ (id)transactionsAccessQueue;	// IMP=0x000000010002f6fc
+ (id)transactions;	// IMP=0x000000010002f664

@end

