/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PKPassbookSettingsDataSource <NSObject>
@optional
-(id)deviceName;
-(BOOL)supportsCredentialType:(long long)arg1;
-(BOOL)hasFelicaSecureElement;
-(BOOL)supportsAddingPaymentPass:(id)arg1;

@required
-(id)secureElementID;
-(BOOL)secureElementIsProductionSigned;
-(id)passLibraryDataProvider;
-(id)setupDelegate;
-(id)paymentDataProvider;
-(id)peerPaymentDelegate;
-(id)peerPaymentDataSource;
-(id)optionsDelegate;
-(BOOL)canRegisterForPeerPayment;
-(BOOL)deviceInRestrictedMode;
-(BOOL)deviceSupportsInAppPayments;

@end
