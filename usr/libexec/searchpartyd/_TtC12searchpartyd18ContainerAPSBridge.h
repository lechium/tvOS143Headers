//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "APSConnectionDelegate-Protocol.h"

@class MISSING_TYPE;

@interface _TtC12searchpartyd18ContainerAPSBridge : NSObject <APSConnectionDelegate>
{
    MISSING_TYPE *delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001001e5ca4
- (id)init;	// IMP=0x00000001001e5cb4
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x00000001001e5c00
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;	// IMP=0x00000001001e5ab0
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x00000001001e59f8

@end
