//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CLPlacemark, NSString, PKPaymentTransaction, PKPaymentTransactionProcessor;

@protocol PKPaymentTransactionProcessorObserver <NSObject>
- (void)paymentTransactionUpdated:(PKPaymentTransaction *)arg1 forTransactionSourceIdentifier:(NSString *)arg2;

@optional
- (void)placemarkFound:(CLPlacemark *)arg1 forTransaction:(PKPaymentTransaction *)arg2;
- (void)paymentTransactionProcessorDidDeactivate:(PKPaymentTransactionProcessor *)arg1;
- (void)paymentTransactionProcessorDidActivate:(PKPaymentTransactionProcessor *)arg1;
@end

