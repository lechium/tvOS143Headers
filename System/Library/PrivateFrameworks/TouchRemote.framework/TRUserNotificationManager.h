/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _TRUserNotification;

@interface TRUserNotificationManager : NSObject {

	_TRUserNotification* _activeUserNotification;

}

@property (nonatomic,retain) _TRUserNotification * activeUserNotification;              //@synthesize activeUserNotification=_activeUserNotification - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(void)cancel;
-(void)setActiveUserNotification:(_TRUserNotification *)arg1 ;
-(_TRUserNotification *)activeUserNotification;
-(void)_showUserNotificationWithDictionary:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)requestAuthenticationWithAccountID:(id)arg1 message:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)requestAppleIDAuthenticationWithAccountID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentErrorWithTitle:(id)arg1 message:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)requestPermissionToInitiateSetupWithCompletion:(/*^block*/id)arg1 ;
-(void)presentAuthenticationFailureWithMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestPermissionForDiagnosticSubmissionWithCompletion:(/*^block*/id)arg1 ;
-(void)presentWiFiNetworkConnectionError:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestLegacyAuthenticationWithAccountID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentLegacyAuthenticationFailedDialogWithMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
