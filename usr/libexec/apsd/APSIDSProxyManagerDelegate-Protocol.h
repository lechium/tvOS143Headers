//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class APSIDSProxyManager, NSData, NSString;

@protocol APSIDSProxyManagerDelegate <NSObject>
- (void)proxyManager:(APSIDSProxyManager *)arg1 incomingPresenceWithGuid:(NSString *)arg2 token:(NSData *)arg3 hwVersion:(NSString *)arg4 swVersion:(NSString *)arg5 swBuild:(NSString *)arg6 certificate:(NSData *)arg7 nonce:(NSData *)arg8 signature:(NSData *)arg9 environmentName:(NSString *)arg10;
- (void)proxyManager:(APSIDSProxyManager *)arg1 canUseProxyChanged:(_Bool)arg2;
@end

