/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:03 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/WFOAuth2Account.h>

@class NSString;

@interface WFSlackAccount : WFOAuth2Account {

	NSString* _username;
	NSString* _teamName;

}

@property (nonatomic,copy) NSString * username;              //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * teamName;              //@synthesize teamName=_teamName - In the implementation block
+(id)clientID;
+(id)serviceID;
+(id)scopes;
+(id)sessionManager;
+(id)clientSecret;
+(id)localizedServiceName;
+(BOOL)allowsMultipleAccounts;
+(id)redirectURI;
-(id)localizedName;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(void)refreshWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)teamName;
-(void)setTeamName:(NSString *)arg1 ;
@end

