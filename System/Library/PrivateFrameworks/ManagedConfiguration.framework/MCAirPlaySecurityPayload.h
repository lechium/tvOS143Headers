/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ManagedConfiguration/MCPayload.h>

@class NSString;

@interface MCAirPlaySecurityPayload : MCPayload {

	NSString* _accessType;
	NSString* _securityType;
	NSString* _password;

}

@property (nonatomic,retain) NSString * accessType;                //@synthesize accessType=_accessType - In the implementation block
@property (nonatomic,retain) NSString * securityType;              //@synthesize securityType=_securityType - In the implementation block
@property (nonatomic,retain) NSString * password;                  //@synthesize password=_password - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)verboseDescription;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(void)setAccessType:(NSString *)arg1 ;
-(NSString *)accessType;
-(void)setSecurityType:(NSString *)arg1 ;
-(NSString *)securityType;
@end

