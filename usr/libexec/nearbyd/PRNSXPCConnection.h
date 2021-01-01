//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface PRNSXPCConnection : NSObject
{
    struct atomic<unsigned long> outgoingMessagesCount;	// 8 = 0x8
    unsigned long long _maxAllowedOutgoingMessages;	// 16 = 0x10
    NSXPCConnection *_connection;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001001a7ad0
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) unsigned long long maxAllowedOutgoingMessages; // @synthesize maxAllowedOutgoingMessages=_maxAllowedOutgoingMessages;
- (void)invalidate;	// IMP=0x00000001001a7a3c
- (void)actOnRemoteObjectAndScheduleBarrierBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001a7688
- (id)initWithConnection:(id)arg1;	// IMP=0x00000001001a75e8

@end

