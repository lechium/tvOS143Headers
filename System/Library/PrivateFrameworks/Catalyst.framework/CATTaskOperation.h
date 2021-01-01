/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:59 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Catalyst/CATOperation.h>

@protocol CATTaskOperationNotificationDelegate;
@class CATTaskRequest, NSUUID;

@interface CATTaskOperation : CATOperation {

	CATTaskRequest* _request;
	id<CATTaskOperationNotificationDelegate> _notificationDelegate;
	NSUUID* _remoteUUID;

}

@property (nonatomic,copy) NSUUID * remoteUUID;                                                                 //@synthesize remoteUUID=_remoteUUID - In the implementation block
@property (nonatomic,readonly) CATTaskRequest * request;                                                        //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) id<CATTaskOperationNotificationDelegate> notificationDelegate;              //@synthesize notificationDelegate=_notificationDelegate - In the implementation block
+(id)new;
+(BOOL)isCancelable;
+(BOOL)validateRequest:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(CATTaskRequest *)request;
-(void)main;
-(id)initWithRequest:(id)arg1 ;
-(void)setNotificationDelegate:(id<CATTaskOperationNotificationDelegate>)arg1 ;
-(void)processMessage:(id)arg1 ;
-(id<CATTaskOperationNotificationDelegate>)notificationDelegate;
-(BOOL)canSendNotificationWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)processNotificationWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)postNotificationWithName:(id)arg1 userInfo:(id)arg2 ;
-(NSUUID *)remoteUUID;
-(void)setRemoteUUID:(NSUUID *)arg1 ;
-(void)cat_addAssertion:(id)arg1 ;
-(id)cat_assertions;
@end
