//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSString;

@protocol ACCConnectionInfoXPCClientProtocol <NSObject>
- (void)handleInterceptData:(NSData *)arg1 forEndpoint:(NSString *)arg2 connection:(NSString *)arg3;
- (void)accessoryEndpointInfoPropertyChanged:(NSString *)arg1 properties:(NSDictionary *)arg2 forConnection:(NSString *)arg3;
- (void)accessoryConnectionInfoPropertyChanged:(NSString *)arg1 properties:(NSDictionary *)arg2;
- (void)accessoryEndpointUpdate:(NSString *)arg1 protocol:(int)arg2 properties:(NSDictionary *)arg3 forConnection:(NSString *)arg4;
- (void)accessoryEndpointDetached:(NSString *)arg1 forConnection:(NSString *)arg2;
- (void)accessoryEndpointAttached:(NSString *)arg1 transportType:(int)arg2 protocol:(int)arg3 properties:(NSDictionary *)arg4 forConnection:(NSString *)arg5;
- (void)accessoryConnectionDetached:(NSString *)arg1;
- (void)accessoryConnectionAttached:(NSString *)arg1 type:(int)arg2 info:(NSDictionary *)arg3 properties:(NSDictionary *)arg4;
@end

