//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MRProtocolClientConnection, MRProtocolMessage, NSError;

@protocol MRProtocolClientConnectionDelegate <NSObject>

@optional
- (void)clientDidDisconnect:(MRProtocolClientConnection *)arg1 error:(NSError *)arg2;
- (void)clientConnection:(MRProtocolClientConnection *)arg1 didReceiveMessage:(MRProtocolMessage *)arg2;
@end
