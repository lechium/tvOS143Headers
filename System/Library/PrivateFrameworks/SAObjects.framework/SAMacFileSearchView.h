/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAAceView.h>

@class NSArray, NSString;

@interface SAMacFileSearchView : SAAceView

@property (nonatomic,copy) NSArray * entities; 
@property (assign,nonatomic) long long numResults; 
@property (nonatomic,copy) NSString * query; 
@property (nonatomic,copy) NSString * searchTitle; 
+(id)fileSearchView;
+(id)fileSearchViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)query;
-(void)setQuery:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSArray *)entities;
-(void)setEntities:(NSArray *)arg1 ;
-(long long)numResults;
-(void)setNumResults:(long long)arg1 ;
-(id)encodedClassName;
-(NSString *)searchTitle;
-(void)setSearchTitle:(NSString *)arg1 ;
@end
