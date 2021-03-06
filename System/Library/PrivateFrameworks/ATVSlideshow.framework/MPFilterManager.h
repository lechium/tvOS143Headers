/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:49 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSArray;

@interface MPFilterManager : NSObject {

	NSMutableDictionary* mFilters;
	NSArray* mFilterCategories;
	NSMutableDictionary* mFilterPresets;

}
+(id)sharedManager;
+(void)releaseSharedManager;
+(void)loadFilterManagerWithPaths:(id)arg1 ;
-(void)dealloc;
-(id)initWithPaths:(id)arg1 ;
-(id)allFilterIDs;
-(id)versionOfFilterID:(id)arg1 ;
-(id)filterIDsForCategoryID:(id)arg1 ;
-(id)filterCategoryIDs;
-(id)presetIDsForFilterID:(id)arg1 ;
-(id)attributesForFilterID:(id)arg1 andPresetID:(id)arg2 ;
-(id)animationsForFilterID:(id)arg1 andPresetID:(id)arg2 ;
-(id)constraintsForFilterPresetsMatchingList:(id)arg1 andCriteria:(id)arg2 ;
-(id)randomFilterPresetFromList:(id)arg1 abidingWithConstraints:(id)arg2 ;
-(id)filterPresetsMatchingCriteria:(id)arg1 ;
-(id)randomFilter:(BOOL)arg1 ;
@end

