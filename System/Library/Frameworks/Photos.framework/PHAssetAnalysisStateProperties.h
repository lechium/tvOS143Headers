/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/PHAssetPropertySet.h>

@class NSMutableDictionary;

@interface PHAssetAnalysisStateProperties : PHAssetPropertySet {

	NSMutableDictionary* _fetchDictionariesByWorkerType;

}

@property (nonatomic,readonly) NSMutableDictionary * fetchDictionariesByWorkerType;              //@synthesize fetchDictionariesByWorkerType=_fetchDictionariesByWorkerType - In the implementation block
+(id)entityName;
+(id)propertiesToFetch;
+(BOOL)isToMany;
+(id)propertySetName;
+(id)keyPathFromPrimaryObject;
+(id)keyPathToPrimaryObject;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
-(int)analysisStateForWorkerType:(short)arg1 outLastIgnoreDate:(id*)arg2 outIgnoreUntilDate:(id*)arg3 ;
-(NSMutableDictionary *)fetchDictionariesByWorkerType;
@end

