//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface RPMetrics : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
}

+ (id)sharedMetricsNoCreate;	// IMP=0x000000010003d520
+ (id)sharedMetrics;	// IMP=0x000000010003d468
- (void).cxx_destruct;	// IMP=0x000000010003dc04
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_logReceivedMessageType:(int)arg1 identifier:(id)arg2 options:(id)arg3 appID:(id)arg4 timeBegin:(double)arg5 timeEnd:(double)arg6 bytesAdded:(unsigned long long)arg7 messagesAdded:(unsigned long long)arg8;	// IMP=0x000000010003d874
- (void)logReceivedMessageType:(int)arg1 identifier:(id)arg2 options:(id)arg3 appID:(id)arg4 ctx:(CDStruct_20fd928a *)arg5;	// IMP=0x000000010003d6d4
- (void)invalidate;	// IMP=0x000000010003d664
- (void)_activate;	// IMP=0x000000010003d604
- (void)activate;	// IMP=0x000000010003d59c
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x000000010003d594
- (id)init;	// IMP=0x000000010003d52c

@end

