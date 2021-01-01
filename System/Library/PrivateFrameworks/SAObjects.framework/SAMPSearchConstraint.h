/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:21 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAMPSearchConstraint : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * mediaPlayerOrderingTerms; 
@property (nonatomic,copy) NSString * query; 
@property (nonatomic,copy) NSArray * searchProperties; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)searchConstraint;
+(id)searchConstraintWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)query;
-(void)setQuery:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)mediaPlayerOrderingTerms;
-(void)setMediaPlayerOrderingTerms:(NSArray *)arg1 ;
-(NSArray *)searchProperties;
-(void)setSearchProperties:(NSArray *)arg1 ;
@end

