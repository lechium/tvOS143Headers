//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PKFamilyMember, PKPaymentApplication, PKPaymentPass, PKPeerPaymentAccount, PKPeerPaymentPreferences;

@interface PDTransactionNotificationControllerConfiguration : NSObject
{
    NSString *_transactionSourceIdentifier;	// 8 = 0x8
    unsigned long long _transactionSourceType;	// 16 = 0x10
    PKPeerPaymentAccount *_associatedPeerPaymentAccount;	// 24 = 0x18
    PKPeerPaymentAccount *_peerPaymentAccount;	// 32 = 0x20
    PKPeerPaymentPreferences *_preferences;	// 40 = 0x28
    PKPaymentApplication *_paymentApplication;	// 48 = 0x30
    PKPaymentPass *_paymentPass;	// 56 = 0x38
    PKFamilyMember *_familyMember;	// 64 = 0x40
    PKFamilyMember *_currentUser;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000010016b5e0
@property(retain, nonatomic) PKFamilyMember *currentUser; // @synthesize currentUser=_currentUser;
@property(retain, nonatomic) PKFamilyMember *familyMember; // @synthesize familyMember=_familyMember;
@property(retain, nonatomic) PKPaymentPass *paymentPass; // @synthesize paymentPass=_paymentPass;
@property(retain, nonatomic) PKPaymentApplication *paymentApplication; // @synthesize paymentApplication=_paymentApplication;
@property(retain, nonatomic) PKPeerPaymentPreferences *preferences; // @synthesize preferences=_preferences;
@property(retain, nonatomic) PKPeerPaymentAccount *peerPaymentAccount; // @synthesize peerPaymentAccount=_peerPaymentAccount;
@property(retain, nonatomic) PKPeerPaymentAccount *associatedPeerPaymentAccount; // @synthesize associatedPeerPaymentAccount=_associatedPeerPaymentAccount;
@property(nonatomic) unsigned long long transactionSourceType; // @synthesize transactionSourceType=_transactionSourceType;
@property(copy, nonatomic) NSString *transactionSourceIdentifier; // @synthesize transactionSourceIdentifier=_transactionSourceIdentifier;
- (id)description;	// IMP=0x000000010016b2f4
- (_Bool)shouldReceiveNotificationsForPeerPaymentNotificationType:(unsigned long long)arg1;	// IMP=0x000000010016b250
- (id)passUniqueIdentifier;	// IMP=0x000000010016b240

@end
