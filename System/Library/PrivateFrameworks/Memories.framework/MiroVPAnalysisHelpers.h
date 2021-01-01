/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Memories/VEiOSSharedObject.h>

@class NSCache;

@interface MiroVPAnalysisHelpers : VEiOSSharedObject {

	NSCache* _analysisInfos;

}
+(id)sharedHelpers;
+(void)purgeSharedInstance;
+(void)clearStaticCache;
+(unsigned long long)_extendedFlagsWithFlags:(unsigned long long)arg1 ;
+(int)_timeInFramesWithDictionaryRepresentation:(id)arg1 naturalFrameRate:(long long)arg2 ;
+(id)_createAnalysisInfoWithVPResultDictionary:(id)arg1 asset:(id)arg2 ;
-(id)init;
-(void)clearCaches;
-(int)fetchAnalysisInfoWithAssets:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)processResults:(id)arg1 forAssets:(id)arg2 intoInfos:(id)arg3 ;
-(int)fetchAnalysisInfoWithAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

