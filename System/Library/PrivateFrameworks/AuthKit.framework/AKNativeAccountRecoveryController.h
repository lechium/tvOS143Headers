/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CDPAuthProvider.h>

@protocol CDPStateUIProvider;
@class CDPRecoveryController, AKAccountRecoveryContext, NSString;

@interface AKNativeAccountRecoveryController : NSObject <CDPAuthProvider> {

	CDPRecoveryController* _recoveryController;
	AKAccountRecoveryContext* _recoveryContext;
	id<CDPStateUIProvider> _cdpUiProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)postBodyForiCSCServerUIResponseWithContext:(id)arg1 recoveryError:(id)arg2 ;
+(id)requestForRecoveryCompletionWithContext:(id)arg1 recoveredInfo:(id)arg2 recoveryError:(id)arg3 ;
+(BOOL)shouldSendServerResponseForRecoveredInfo:(id)arg1 withRecoveryError:(id)arg2 ;
-(void)dismissNativeRecoveryUIWithCompletion:(/*^block*/id)arg1 ;
-(id)_mapICSCRecoveryResultsToAuthKit:(id)arg1 ;
-(void)cdpContext:(id)arg1 performSilentRecoveryTokenRenewal:(/*^block*/id)arg2 ;
-(void)cdpContext:(id)arg1 verifyMasterKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithContext:(id)arg1 uiProvider:(id)arg2 ;
-(void)presentNativeRecoveryUIWithCompletion:(/*^block*/id)arg1 ;
@end

