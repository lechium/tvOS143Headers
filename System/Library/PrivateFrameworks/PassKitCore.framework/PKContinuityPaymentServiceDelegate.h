/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PKContinuityPaymentServiceDelegate <NSObject>
@optional
-(void)didReceiveUpdatedPaymentDevices:(id)arg1;
-(void)didReceivePaymentHostUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2;
-(void)didReceivePaymentClientUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2;
-(void)didReceivePayment:(id)arg1 forRemotePaymentRequest:(id)arg2;
-(void)didReceivePaymentResult:(id)arg1 forRemotePaymentRequest:(id)arg2;
-(void)didReceiveCancellationForRemotePaymentRequest:(id)arg1;

@end

