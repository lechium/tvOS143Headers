/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>
#import <SAObjects/SAClientStateServerBoundCommand.h>

@class NSArray, NSString;

@interface SAUpdateRestrictions : SABaseCommand <SAServerBoundCommand, SAClientStateServerBoundCommand>

@property (nonatomic,copy) NSArray * restrictionsToAdd; 
@property (nonatomic,copy) NSArray * restrictionsToRemove; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)updateRestrictions;
+(id)updateRestrictionsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)restrictionsToAdd;
-(void)setRestrictionsToAdd:(NSArray *)arg1 ;
-(NSArray *)restrictionsToRemove;
-(void)setRestrictionsToRemove:(NSArray *)arg1 ;
@end

