//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "SPLocalPairingManagerXPCProtocol-Protocol.h"

@class NSUUID;

@protocol SPPairingManagerXPCProtocol <NSObject, SPLocalPairingManagerXPCProtocol>
- (oneway void)allPairingErrorsWithCompletion:(void (^)(NSArray *))arg1;
- (oneway void)unpairUUID:(NSUUID *)arg1 force:(_Bool)arg2 completion:(void (^)(NSError *))arg3;
@end

