/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSString, NSURL;

@interface SAHACommandCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * actionResults; 
@property (nonatomic,copy) NSString * clientValidity; 
@property (nonatomic,copy) NSString * commandOutcome; 
@property (nonatomic,copy) NSURL * homeIdentifier; 
@property (nonatomic,copy) NSString * serverValidity; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)commandCompleted;
+(id)commandCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)actionResults;
-(void)setActionResults:(NSArray *)arg1 ;
-(NSString *)clientValidity;
-(void)setClientValidity:(NSString *)arg1 ;
-(NSString *)commandOutcome;
-(void)setCommandOutcome:(NSString *)arg1 ;
-(NSURL *)homeIdentifier;
-(void)setHomeIdentifier:(NSURL *)arg1 ;
-(NSString *)serverValidity;
-(void)setServerValidity:(NSString *)arg1 ;
@end

