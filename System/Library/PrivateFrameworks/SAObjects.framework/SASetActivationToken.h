/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSData, NSString;

@interface SASetActivationToken : SABaseClientBoundCommand

@property (nonatomic,copy) NSData * activationToken; 
@property (nonatomic,copy) NSString * language; 
+(id)setActivationToken;
+(id)setActivationTokenWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSData *)activationToken;
-(void)setActivationToken:(NSData *)arg1 ;
@end
