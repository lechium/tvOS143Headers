//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary;

@protocol ACCCommunicationsXPCServerProtocol <NSObject>
- (void)listUpdate:(NSArray *)arg1 forType:(int)arg2 coalesced:(_Bool)arg3;
- (void)commStatusDidChange:(NSDictionary *)arg1;
- (void)callStateDidChange:(NSDictionary *)arg1;
- (void)initConnection:(void (^)(_Bool))arg1;
@end

