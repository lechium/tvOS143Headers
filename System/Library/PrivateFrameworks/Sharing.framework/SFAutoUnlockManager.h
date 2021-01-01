/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:31 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SFUnlockClientProtocol.h>

@protocol SFAutoUnlockManagerDelegate, OS_dispatch_queue;
@class NSObject, NSString;

@interface SFAutoUnlockManager : NSObject <SFUnlockClientProtocol> {

	id<SFAutoUnlockManagerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;              //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (assign,nonatomic) id<SFAutoUnlockManagerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double spinnerDelay; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)autoUnlockSupported;
+(BOOL)autoUnlockEnabled:(unsigned)arg1 ;
+(BOOL)bluetoothAndWiFiEnabled;
+(void)enableBluetoothAndWiFi;
-(id)init;
-(id<SFAutoUnlockManagerDelegate>)delegate;
-(void)setDelegate:(id<SFAutoUnlockManagerDelegate>)arg1 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)repairCloudPairing;
-(void)eligibleAutoUnlockDevicesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)onDelegateQueue_notifyDelegateOfEnableError:(id)arg1 device:(id)arg2 ;
-(void)cancelEnablingAutoUnlockForDevice:(id)arg1 ;
-(void)disableAutoUnlockForDevice:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)onDelegateQueue_notifyDelegateOfAttemptError:(id)arg1 ;
-(void)cancelAutoUnlock;
-(void)autoUnlockStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)authPromptInfoWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)keyDeviceLocked:(id)arg1 ;
-(void)enabledDevice:(id)arg1 ;
-(void)failedToEnableDevice:(id)arg1 error:(id)arg2 ;
-(void)beganAttemptWithDevice:(id)arg1 ;
-(void)completedUnlockWithDevice:(id)arg1 ;
-(void)failedUnlockWithError:(id)arg1 ;
-(double)spinnerDelay;
-(void)enableAutoUnlockWithDevice:(id)arg1 passcode:(id)arg2 ;
-(void)attemptAutoUnlock;
@end
