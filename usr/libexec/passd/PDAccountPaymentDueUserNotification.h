//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDUserNotification.h"

#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface PDAccountPaymentDueUserNotification : PDUserNotification <NSSecureCoding>
{
    _Bool _useGenericMessaging;	// 96 = 0x60
    unsigned long long _featureIdentifier;	// 104 = 0x68
    NSString *_messageString;	// 112 = 0x70
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010014d1c8
- (void).cxx_destruct;	// IMP=0x000000010014dd44
@property(readonly, nonatomic) NSString *messageString; // @synthesize messageString=_messageString;
@property(readonly, nonatomic) _Bool useGenericMessaging; // @synthesize useGenericMessaging=_useGenericMessaging;
@property(readonly, nonatomic) unsigned long long featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
- (unsigned long long)notificationType;	// IMP=0x000000010014dd0c
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x000000010014dc0c
- (_Bool)isValid;	// IMP=0x000000010014db8c
- (id)_messageString;	// IMP=0x000000010014db04
- (id)_messageStringForAccount:(id)arg1 amount:(id)arg2 reminderOffset:(unsigned long long)arg3 fireDate:(id)arg4;	// IMP=0x000000010014d3e4
- (id)_titleString;	// IMP=0x000000010014d398
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010014d2c8
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010014d1d0
- (id)initWithAccount:(id)arg1 estimatedRemainingMinimumPayment:(id)arg2 reminderOffset:(unsigned long long)arg3;	// IMP=0x000000010014cae8

@end

