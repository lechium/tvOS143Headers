/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PKPassbookPeerPaymentSettingsDataSource.h>
#import <libobjc.A.dylib/PKPassbookPeerPaymentSettingsDelegate.h>

@class PKPaymentWebService, PKPeerPaymentWebService, NSString;

@interface PKPassbookPeerPaymentSettingsDefaultBehavior : NSObject <PKPassbookPeerPaymentSettingsDataSource, PKPassbookPeerPaymentSettingsDelegate> {

	PKPaymentWebService* _paymentWebService;
	PKPeerPaymentWebService* _peerPaymentWebService;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)peerPaymentWebService;
-(void)peerPaymentRegistrationStatusHasChanged:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_registerForPeerPaymentWithCompletion:(/*^block*/id)arg1 ;
-(void)_unregisterForPeerPaymentWithCompletion:(/*^block*/id)arg1 ;
@end

