/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:05 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface TMTumblrAuthenticator : NSObject {

	NSString* _OAuthConsumerKey;
	NSString* _OAuthConsumerSecret;
	/*^block*/id _threeLeggedOAuthCallback;
	NSString* _threeLeggedOAuthTokenSecret;

}

@property (nonatomic,copy) id threeLeggedOAuthCallback;                         //@synthesize threeLeggedOAuthCallback=_threeLeggedOAuthCallback - In the implementation block
@property (nonatomic,copy) NSString * threeLeggedOAuthTokenSecret;              //@synthesize threeLeggedOAuthTokenSecret=_threeLeggedOAuthTokenSecret - In the implementation block
@property (nonatomic,copy) NSString * OAuthConsumerKey;                         //@synthesize OAuthConsumerKey=_OAuthConsumerKey - In the implementation block
@property (nonatomic,copy) NSString * OAuthConsumerSecret;                      //@synthesize OAuthConsumerSecret=_OAuthConsumerSecret - In the implementation block
+(id)sharedInstance;
+(void)signRequest:(id)arg1 withParameters:(id)arg2 consumerKey:(id)arg3 consumerSecret:(id)arg4 token:(id)arg5 tokenSecret:(id)arg6 ;
-(BOOL)handleOpenURL:(id)arg1 ;
-(void)authenticate:(id)arg1 webView:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)xAuth:(id)arg1 password:(id)arg2 callback:(/*^block*/id)arg3 ;
-(NSString *)OAuthConsumerKey;
-(void)setOAuthConsumerKey:(NSString *)arg1 ;
-(NSString *)OAuthConsumerSecret;
-(void)setOAuthConsumerSecret:(NSString *)arg1 ;
-(id)threeLeggedOAuthCallback;
-(void)setThreeLeggedOAuthCallback:(id)arg1 ;
-(NSString *)threeLeggedOAuthTokenSecret;
-(void)setThreeLeggedOAuthTokenSecret:(NSString *)arg1 ;
@end

