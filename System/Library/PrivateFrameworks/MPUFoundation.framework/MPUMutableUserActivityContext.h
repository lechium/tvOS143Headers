/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <MPUFoundation/MPUUserActivityContext.h>

@class NSMutableArray, NSArray;

@interface MPUMutableUserActivityContext : MPUUserActivityContext {

	NSMutableArray* _containerItems;

}

@property (nonatomic,copy) NSArray * containerItems; 
@property (assign,nonatomic) long long originatorType; 
@property (assign,nonatomic) long long originatorVersion; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOriginatorType:(long long)arg1 ;
-(void)setOriginatorVersion:(long long)arg1 ;
-(NSArray *)containerItems;
-(void)setContainerItems:(NSArray *)arg1 ;
-(void)addContainerItem:(id)arg1 ;
-(void)insertContainerItem:(id)arg1 afterContainerItem:(id)arg2 ;
-(void)removeContainerItem:(id)arg1 ;
@end

