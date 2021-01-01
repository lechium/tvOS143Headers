/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SASportsTeamRank : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * position; 
@property (nonatomic,copy) NSNumber * primary; 
@property (nonatomic,copy) NSString * source; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)teamRank;
+(id)teamRankWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)source;
-(void)setSource:(NSString *)arg1 ;
-(NSNumber *)position;
-(id)groupIdentifier;
-(void)setPosition:(NSNumber *)arg1 ;
-(void)setPrimary:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(NSNumber *)primary;
@end
