/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSMutableDictionary;

@interface CKDModifySubscriptionsOperation : CKDDatabaseOperation {

	/*^block*/id _saveCompletionBlock;
	/*^block*/id _deleteCompletionBlock;
	NSArray* _subscriptionsToSave;
	NSArray* _subscriptionIDsToDelete;
	NSMutableDictionary* _subscriptionsByServerID;

}

@property (nonatomic,retain) NSArray * subscriptionsToSave;                                                         //@synthesize subscriptionsToSave=_subscriptionsToSave - In the implementation block
@property (nonatomic,retain) NSArray * subscriptionIDsToDelete;                                                     //@synthesize subscriptionIDsToDelete=_subscriptionIDsToDelete - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * subscriptionsByServerID;                                         //@synthesize subscriptionsByServerID=_subscriptionsByServerID - In the implementation block
@property (nonatomic,retain) id<CKModifySubscriptionsOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,copy) id saveCompletionBlock;                                                                  //@synthesize saveCompletionBlock=_saveCompletionBlock - In the implementation block
@property (nonatomic,copy) id deleteCompletionBlock;                                                                //@synthesize deleteCompletionBlock=_deleteCompletionBlock - In the implementation block
+(long long)isPredominatelyDownload;
-(void)main;
-(int)operationType;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(NSArray *)subscriptionsToSave;
-(void)setSubscriptionsToSave:(NSArray *)arg1 ;
-(NSArray *)subscriptionIDsToDelete;
-(void)setSubscriptionIDsToDelete:(NSArray *)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setSaveCompletionBlock:(id)arg1 ;
-(void)setDeleteCompletionBlock:(id)arg1 ;
-(id)saveCompletionBlock;
-(id)deleteCompletionBlock;
-(void)_handleSubscriptionSaved:(id)arg1 error:(id)arg2 ;
-(NSMutableDictionary *)subscriptionsByServerID;
-(void)_handleSubscriptionSaved:(id)arg1 responseCode:(id)arg2 ;
-(void)_handleSubscriptionDeleted:(id)arg1 responseCode:(id)arg2 ;
-(void)setSubscriptionsByServerID:(NSMutableDictionary *)arg1 ;
@end

