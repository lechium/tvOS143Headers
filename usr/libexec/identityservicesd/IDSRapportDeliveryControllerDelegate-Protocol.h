//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IDSRapportDeliveryController, NSDictionary, NSNumber, NSString;

@protocol IDSRapportDeliveryControllerDelegate <NSObject>

@optional
- (void)deliveryController:(IDSRapportDeliveryController *)arg1 didReceiveMessage:(NSDictionary *)arg2 topic:(NSString *)arg3 command:(NSNumber *)arg4 deviceID:(NSString *)arg5 messageID:(NSString *)arg6;
@end

