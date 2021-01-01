//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDPassReminderUserNotification.h"

#import "NSSecureCoding-Protocol.h"

@class PKFamilyMember, PKPaymentTransaction;

@interface PDPeerPaymentTransactionUserNotification : PDPassReminderUserNotification <NSSecureCoding>
{
    PKPaymentTransaction *_paymentTransaction;	// 96 = 0x60
    PKFamilyMember *_familyMember;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100149748
- (void).cxx_destruct;	// IMP=0x0000000100149ae4
@property(readonly, nonatomic) PKFamilyMember *familyMember; // @synthesize familyMember=_familyMember;
@property(readonly, nonatomic) PKPaymentTransaction *paymentTransaction; // @synthesize paymentTransaction=_paymentTransaction;
- (_Bool)isCashFamilyNotification;	// IMP=0x0000000100149aac
- (id)_formattedCounterpartName;	// IMP=0x000000010014998c
- (id)_peerPaymentNotificationType;	// IMP=0x00000001001498f8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010014984c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100149750
- (id)initWithPaymentTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 familyMember:(id)arg3 notificationIdentifier:(id)arg4;	// IMP=0x0000000100149554
- (id)initWithPaymentTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 familyMember:(id)arg3;	// IMP=0x0000000100149424

@end
