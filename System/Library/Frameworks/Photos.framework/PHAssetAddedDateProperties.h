/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/PHBatchFetchedAssetPropertySet.h>

@class NSDate;

@interface PHAssetAddedDateProperties : PHBatchFetchedAssetPropertySet

@property (nonatomic,readonly) NSDate * addedDate; 
+(id)propertiesToFetch;
+(long long)batchSize;
+(long long)cacheSize;
+(BOOL)useNoIndexSelf;
+(BOOL)useObjectFetchingContext;
+(id)propertiesToSortBy;
-(NSDate *)addedDate;
@end

