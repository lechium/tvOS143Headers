/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVDateRangeMetadataGroup.h>

@class AVDateRangeMetadataGroupInternal, NSDate, NSArray;

@interface AVMutableDateRangeMetadataGroup : AVDateRangeMetadataGroup {

	AVDateRangeMetadataGroupInternal* _mutablePriv;

}

@property (nonatomic,copy) NSDate * startDate; 
@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,copy) NSArray * items; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(NSArray *)items;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setItems:(NSArray *)arg1 ;
-(id)_initWithTaggedRangeMetadataDictionary:(id)arg1 items:(id)arg2 ;
@end
