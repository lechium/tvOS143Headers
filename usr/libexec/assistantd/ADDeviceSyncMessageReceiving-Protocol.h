//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ADDeviceSyncMessage, NSString;

@protocol ADDeviceSyncMessageReceiving <NSObject>
@property(readonly, copy, nonatomic) NSString *deviceIdentifier;
- (void)receiveMessage:(ADDeviceSyncMessage *)arg1 completion:(void (^)(ADDeviceSyncMessage *, NSError *))arg2;
@end

