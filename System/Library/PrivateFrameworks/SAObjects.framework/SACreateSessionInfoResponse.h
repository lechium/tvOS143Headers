/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSData, NSNumber;

@interface SACreateSessionInfoResponse : SABaseClientBoundCommand

@property (nonatomic,copy) NSData * sessionInfo; 
@property (nonatomic,copy) NSNumber * validityDuration; 
+(id)createSessionInfoResponse;
+(id)createSessionInfoResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSData *)sessionInfo;
-(void)setSessionInfo:(NSData *)arg1 ;
-(NSNumber *)validityDuration;
-(void)setValidityDuration:(NSNumber *)arg1 ;
@end

