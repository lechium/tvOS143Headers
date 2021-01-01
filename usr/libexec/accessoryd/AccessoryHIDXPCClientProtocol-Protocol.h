//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSString;

@protocol AccessoryHIDXPCClientProtocol <NSObject>
- (void)getReportResponse:(NSString *)arg1 componentID:(unsigned short)arg2 reportType:(unsigned char)arg3 reportID:(unsigned char)arg4 report:(NSData *)arg5 withReply:(void (^)(_Bool))arg6;
- (void)inReport:(NSString *)arg1 componentID:(unsigned short)arg2 report:(NSData *)arg3 withReply:(void (^)(_Bool))arg4;
- (void)unregisterAllDescriptors:(NSString *)arg1 withReply:(void (^)(_Bool))arg2;
- (void)unregisterHIDDescriptor:(NSString *)arg1 componentID:(unsigned short)arg2 withReply:(void (^)(_Bool))arg3;
- (void)registerHIDDescriptor:(NSString *)arg1 componentID:(unsigned short)arg2 dictionary:(NSDictionary *)arg3 withReply:(void (^)(NSString *))arg4;
@end
