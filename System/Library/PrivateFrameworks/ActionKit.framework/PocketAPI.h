/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:01 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSOperationQueue, PocketAPILogin;

@interface PocketAPI : NSObject {

	NSString* consumerKey;
	NSString* URLScheme;
	NSOperationQueue* operationQueue;
	PocketAPILogin* currentLogin;
	NSString* userAgent;

}

@property (nonatomic,retain) NSString * consumerKey; 
@property (nonatomic,retain) NSString * URLScheme; 
@property (nonatomic,copy,readonly) NSString * username; 
@property (getter=isLoggedIn,nonatomic,readonly) BOOL loggedIn; 
@property (nonatomic,retain) NSOperationQueue * operationQueue; 
+(id)pkt_hashForConsumerKey:(id)arg1 accessToken:(id)arg2 ;
+(id)sharedAPI;
+(id)pocketAppURLScheme;
-(id)init;
-(void)dealloc;
-(NSString *)username;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(unsigned long long)appID;
-(NSString *)consumerKey;
-(void)setConsumerKey:(NSString *)arg1 ;
-(NSString *)URLScheme;
-(void)logout;
-(BOOL)isLoggedIn;
-(void)setURLScheme:(NSString *)arg1 ;
-(BOOL)handleOpenURL:(id)arg1 ;
-(void)loginWithDelegate:(id)arg1 ;
-(void)saveURL:(id)arg1 delegate:(id)arg2 ;
-(void)saveURL:(id)arg1 withTitle:(id)arg2 delegate:(id)arg3 ;
-(void)saveURL:(id)arg1 withTitle:(id)arg2 tweetID:(id)arg3 delegate:(id)arg4 ;
-(void)callAPIMethod:(id)arg1 withHTTPMethod:(int)arg2 arguments:(id)arg3 delegate:(id)arg4 ;
-(id)saveOperationWithURL:(id)arg1 title:(id)arg2 tweetID:(id)arg3 delegate:(id)arg4 ;
-(id)saveOperationWithURL:(id)arg1 title:(id)arg2 delegate:(id)arg3 ;
-(id)saveOperationWithURL:(id)arg1 delegate:(id)arg2 ;
-(id)methodOperationWithAPIMethod:(id)arg1 forHTTPMethod:(int)arg2 arguments:(id)arg3 delegate:(id)arg4 ;
-(void)loginWithHandler:(/*^block*/id)arg1 ;
-(void)saveURL:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)saveURL:(id)arg1 withTitle:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)saveURL:(id)arg1 withTitle:(id)arg2 tweetID:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)callAPIMethod:(id)arg1 withHTTPMethod:(int)arg2 arguments:(id)arg3 handler:(/*^block*/id)arg4 ;
-(id)saveOperationWithURL:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)saveOperationWithURL:(id)arg1 title:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)saveOperationWithURL:(id)arg1 title:(id)arg2 tweetID:(id)arg3 handler:(/*^block*/id)arg4 ;
-(id)methodOperationWithAPIMethod:(id)arg1 forHTTPMethod:(int)arg2 arguments:(id)arg3 handler:(/*^block*/id)arg4 ;
-(id)pkt_getToken;
-(void)pkt_loggedInWithUsername:(id)arg1 token:(id)arg2 ;
-(id)pkt_loadCurrentLoginFromDefaults;
-(void)pkt_saveCurrentLoginToDefaults;
-(void)pkt_migrateAccountToAccessTokenWithUsername:(id)arg1 password:(id)arg2 delegate:(id)arg3 ;
-(void)pkt_migrateAccountToAccessTokenWithUsername:(id)arg1 password:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)pkt_actionDictionaryWithName:(id)arg1 parameters:(id)arg2 ;
-(id)pkt_userAgent;
-(id)pkt_deviceName;
-(id)pkt_deviceOSVersion;
-(void)pkt_setKeychainValue:(id)arg1 forKey:(id)arg2 ;
-(id)pkt_getKeychainValueForKey:(id)arg1 ;
-(void)pkt_setKeychainValue:(id)arg1 forKey:(id)arg2 serviceName:(id)arg3 ;
-(id)pkt_getKeychainValueForKey:(id)arg1 serviceName:(id)arg2 ;
@end

