/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PKAppletSubcredentialPairingSessionDelegate <PKSessionDelegate>
@required
-(void)appletSubcredentialPairingSessionDidBeginPairing:(id)arg1;
-(void)appletSubcredentialPairingSession:(id)arg1 didEndPairingWithSubcredential:(id)arg2 registrationData:(id)arg3;
-(void)appletSubcredentialPairingSession:(id)arg1 didEndPairingWithError:(id)arg2;
-(void)appletSubcredentialPairingSessionDidFirstTransaction:(id)arg1 withError:(id)arg2;
-(void)appletSubcredentialPairingSession:(id)arg1 didFinishPreWarmWithResult:(id)arg2;
-(void)appletSubcredentialPairingSession:(id)arg1 didFinishProbingTerminalWithResult:(BOOL)arg2;

@end

