/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CoreThemeDocument;

@interface TDHistorian : NSObject {

	CoreThemeDocument* document;

}
-(id)initWithDocument:(id)arg1 ;
-(void)updateEntriesForManagedObjects:(id)arg1 ;
-(void)_updateEntryForManagedObject:(id)arg1 ;
-(id)_updateRecordsWithName:(id)arg1 sinceDate:(id)arg2 ;
-(BOOL)foundDataChangesSinceDate:(id)arg1 ;
-(id)productionsWithModifiedAssets;
-(id)productionsChangedSinceDate:(id)arg1 uuidNeedsReset:(BOOL*)arg2 ;
-(id)colorsChangedSinceDate:(id)arg1 ;
-(id)fontsChangedSinceDate:(id)arg1 ;
-(id)fontSizesChangedSinceDate:(id)arg1 ;
-(id)namedElementsChangedSinceDate:(id)arg1 ;
-(id)facetDefinitionsChangedSinceDate:(id)arg1 ;
-(id)keySpecsForRenditionsRemovedSinceDate:(id)arg1 ;
@end

