/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:21 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SABackgroundContextObject.h>

@class NSString;

@interface SAMicroblogSocialCredential : AceObject <SABackgroundContextObject>

@property (nonatomic,copy) NSString * accessToken; 
@property (nonatomic,copy) NSString * personalizationPermission; 
@property (nonatomic,copy) NSString * socialNetwork; 
@property (nonatomic,copy) NSString * tokenSecret; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)socialCredential;
+(id)socialCredentialWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setAccessToken:(NSString *)arg1 ;
-(NSString *)accessToken;
-(id)encodedClassName;
-(NSString *)socialNetwork;
-(void)setSocialNetwork:(NSString *)arg1 ;
-(NSString *)personalizationPermission;
-(void)setPersonalizationPermission:(NSString *)arg1 ;
-(NSString *)tokenSecret;
-(void)setTokenSecret:(NSString *)arg1 ;
@end
