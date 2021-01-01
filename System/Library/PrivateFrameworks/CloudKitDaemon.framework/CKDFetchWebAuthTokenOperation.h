/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSString;

@interface CKDFetchWebAuthTokenOperation : CKDDatabaseOperation {

	NSString* _webAuthToken;
	NSString* _APIToken;

}

@property (nonatomic,copy) NSString * webAuthToken;                                                               //@synthesize webAuthToken=_webAuthToken - In the implementation block
@property (nonatomic,copy) NSString * APIToken;                                                                   //@synthesize APIToken=_APIToken - In the implementation block
@property (nonatomic,retain) id<CKFetchWebAuthTokenOperationCallbacks> clientOperationCallbackProxy; 
-(void)main;
-(int)operationType;
-(id)activityCreate;
-(NSString *)APIToken;
-(void)setAPIToken:(NSString *)arg1 ;
-(void)setWebAuthToken:(NSString *)arg1 ;
-(NSString *)webAuthToken;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
@end

