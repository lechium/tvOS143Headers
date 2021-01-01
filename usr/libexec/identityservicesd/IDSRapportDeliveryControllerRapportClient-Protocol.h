//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;
@protocol IDSRapportClientDelegate;

@protocol IDSRapportDeliveryControllerRapportClient <NSObject>
- (void)sendMessage:(NSDictionary *)arg1 toDeviceIdentifier:(NSString *)arg2 completionBlock:(void (^)(NSError *))arg3;
- (void)removeDelegate:(id <IDSRapportClientDelegate>)arg1;
- (void)addDelegate:(id <IDSRapportClientDelegate>)arg1;
@end
