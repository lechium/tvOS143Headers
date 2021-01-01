//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, WiFiAwarePublishDatapathServiceSpecificInfo, WiFiAwarePublisherDataSessionHandle, WiFiMACAddress;

@protocol WiFiAwarePublisherXPCDelegate <NSObject>
- (void)publishDataTerminatedForHandle:(WiFiAwarePublisherDataSessionHandle *)arg1 reason:(long long)arg2;
- (void)publishDataConfirmedForHandle:(WiFiAwarePublisherDataSessionHandle *)arg1 localInterfaceIndex:(unsigned int)arg2 serviceSpecificInfo:(WiFiAwarePublishDatapathServiceSpecificInfo *)arg3;
- (void)publishReceivedMessage:(NSData *)arg1 fromSubscriberID:(unsigned char)arg2 subscriberAddress:(WiFiMACAddress *)arg3;
- (void)publishTerminatedWithReason:(long long)arg1;
- (void)publishFailedToStartWithError:(long long)arg1;
- (void)publishStartedWithInstanceID:(unsigned char)arg1;
@end

