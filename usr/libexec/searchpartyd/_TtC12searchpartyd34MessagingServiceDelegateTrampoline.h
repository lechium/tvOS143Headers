//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSServiceDelegate-Protocol.h"

@class MISSING_TYPE;

@interface _TtC12searchpartyd34MessagingServiceDelegateTrampoline : NSObject <IDSServiceDelegate>
{
    MISSING_TYPE *delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100083654
- (id)init;	// IMP=0x0000000100083664
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x00000001000835a4
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;	// IMP=0x0000000100083520
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 fromID:(id)arg4 hasBeenDeliveredWithContext:(id)arg5;	// IMP=0x00000001000833c8
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x00000001000832ec
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;	// IMP=0x0000000100083128
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0000000100082fe4

@end
