//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ADNotifyAndPushContextCollector, NSXPCConnection;

@interface ADPushContextReceiver : NSObject
{
    int _pid;	// 8 = 0x8
    ADNotifyAndPushContextCollector *_collector;	// 16 = 0x10
    NSXPCConnection *_connection;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010024a808
- (oneway void)sendContext:(id)arg1;	// IMP=0x000000010024a6ec
- (id)initWithCollector:(id)arg1 pid:(int)arg2 connection:(id)arg3;	// IMP=0x000000010024a64c

@end
