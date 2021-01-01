/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:05 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSNumber, VSAccountAuthentication, NSSet, NSArray;

@interface VSApplicationControllerResponse : NSObject {

	NSString* _authenticationScheme;
	NSString* _responseStatusCode;
	NSString* _responseString;
	NSNumber* _expectedAction;
	VSAccountAuthentication* _accountAuthentication;
	NSSet* _accountChannelIDs;
	NSArray* _subscriptionsToAdd;
	NSArray* _subscriptionsToRemoveByBundleID;

}

@property (nonatomic,copy) NSString * authenticationScheme;                                //@synthesize authenticationScheme=_authenticationScheme - In the implementation block
@property (nonatomic,copy) NSString * responseStatusCode;                                  //@synthesize responseStatusCode=_responseStatusCode - In the implementation block
@property (nonatomic,copy) NSString * responseString;                                      //@synthesize responseString=_responseString - In the implementation block
@property (nonatomic,copy) NSNumber * expectedAction;                                      //@synthesize expectedAction=_expectedAction - In the implementation block
@property (nonatomic,retain) VSAccountAuthentication * accountAuthentication;              //@synthesize accountAuthentication=_accountAuthentication - In the implementation block
@property (nonatomic,copy) NSSet * accountChannelIDs;                                      //@synthesize accountChannelIDs=_accountChannelIDs - In the implementation block
@property (nonatomic,copy) NSArray * subscriptionsToAdd;                                   //@synthesize subscriptionsToAdd=_subscriptionsToAdd - In the implementation block
@property (nonatomic,copy) NSArray * subscriptionsToRemoveByBundleID;                      //@synthesize subscriptionsToRemoveByBundleID=_subscriptionsToRemoveByBundleID - In the implementation block
-(id)description;
-(NSString *)responseStatusCode;
-(void)setResponseStatusCode:(NSString *)arg1 ;
-(NSString *)authenticationScheme;
-(void)setAuthenticationScheme:(NSString *)arg1 ;
-(NSNumber *)expectedAction;
-(NSArray *)subscriptionsToAdd;
-(NSArray *)subscriptionsToRemoveByBundleID;
-(void)setSubscriptionsToAdd:(NSArray *)arg1 ;
-(void)setSubscriptionsToRemoveByBundleID:(NSArray *)arg1 ;
-(void)setExpectedAction:(NSNumber *)arg1 ;
-(void)setResponseString:(NSString *)arg1 ;
-(void)setAccountChannelIDs:(NSSet *)arg1 ;
-(void)setAccountAuthentication:(VSAccountAuthentication *)arg1 ;
-(NSString *)responseString;
-(VSAccountAuthentication *)accountAuthentication;
-(NSSet *)accountChannelIDs;
@end

