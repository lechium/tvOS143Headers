/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PLIndexMapperDataSource;
@interface PLIndexMapper : NSObject {

	id<PLIndexMapperDataSource> _dataSource;

}
-(id)initWithDataSource:(id)arg1 ;
-(id)backingIndexesForIndexes:(id)arg1 ;
-(unsigned long long)backingIndexForIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexForBackingIndex:(unsigned long long)arg1 ;
-(BOOL)applyContainerChangeNotification:(id)arg1 changeTypes:(int)arg2 toFilteredIndexes:(id)arg3 ;
-(id)indexesForBackingIndexes:(id)arg1 ;
@end

