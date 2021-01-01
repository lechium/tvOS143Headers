/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAMicroblogGetSocialCredential : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * explicitUserPermission; 
@property (nonatomic,copy) NSString * socialNetwork; 
+(id)getSocialCredential;
+(id)getSocialCredentialWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)explicitUserPermission;
-(void)setExplicitUserPermission:(NSString *)arg1 ;
-(NSString *)socialNetwork;
-(void)setSocialNetwork:(NSString *)arg1 ;
@end

