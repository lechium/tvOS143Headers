/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/VSRemoteNotifierDelegate.h>

@class NSUndoManager, VSRemoteNotifier, NSArray, NSString;

@interface VSPrivacyVoucherLockbox : NSObject <VSRemoteNotifierDelegate> {

	NSUndoManager* _undoManager;
	VSRemoteNotifier* _remoteNotifier;

}

@property (nonatomic,retain) VSRemoteNotifier * remoteNotifier;                //@synthesize remoteNotifier=_remoteNotifier - In the implementation block
@property (nonatomic,retain) NSUndoManager * undoManager;                      //@synthesize undoManager=_undoManager - In the implementation block
@property (nonatomic,copy,readonly) NSArray * unredeemedVouchers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setUndoManager:(NSUndoManager *)arg1 ;
-(NSUndoManager *)undoManager;
-(void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2 ;
-(VSRemoteNotifier *)remoteNotifier;
-(void)setRemoteNotifier:(VSRemoteNotifier *)arg1 ;
-(NSArray *)unredeemedVouchers;
-(void)redeemVoucher:(id)arg1 ;
-(void)removeAllVouchers;
-(void)issueVouchers:(id)arg1 ;
-(void)setUnredeemedVouchers:(NSArray *)arg1 ;
-(id)_voucherArchiveURL;
-(void)issueVouchersForAppsWithAdamIDs:(id)arg1 providerID:(id)arg2 ;
@end

