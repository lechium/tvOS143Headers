//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DAIDSDestination, NSObject, NSString;
@protocol NSSecureCoding;

@protocol DAIDSMessageReceiver <NSObject>
- (void)receiveMessage:(NSString *)arg1 data:(NSObject<NSSecureCoding> *)arg2 fromDestination:(DAIDSDestination *)arg3 expectsResponse:(_Bool)arg4 response:(void (^)(NSString *, NSObject<NSSecureCoding> *))arg5;
@end

