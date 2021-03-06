//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSNumber, NSString;

@protocol AccessoryHIDXPCServerProtocol <NSObject>
- (void)componentUpdate:(NSString *)arg1 componentID:(NSNumber *)arg2 enabled:(_Bool)arg3 withReply:(void (^)(_Bool))arg4;
- (void)getReport:(NSString *)arg1 componentID:(NSNumber *)arg2 reportType:(NSNumber *)arg3 reportID:(NSNumber *)arg4 withReply:(void (^)(_Bool))arg5;
- (void)outReport:(NSString *)arg1 componentID:(NSNumber *)arg2 report:(NSData *)arg3 withReply:(void (^)(_Bool))arg4;
- (void)initConnection:(void (^)(_Bool))arg1;
@end

