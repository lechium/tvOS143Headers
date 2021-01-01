//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CKDAccount-Protocol.h"

@interface CKDSecuritydAccount : NSObject <CKDAccount>
{
}

+ (id)securitydAccount;	// IMP=0x0000000100008ac4
- (int)syncWithAllPeers:(id *)arg1;	// IMP=0x0000000100008a70
- (id)syncWithPeers:(id)arg1 backups:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100008a00
- (_Bool)ensurePeerRegistration:(id *)arg1;	// IMP=0x00000001000089ac
- (id)keysChanged:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100008920

@end

