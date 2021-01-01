/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXMemoriesDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject, PXMemoriesDataSourceState;

@interface PXStateBasedMemoriesDataSource : PXMemoriesDataSource {

	NSObject*<OS_dispatch_queue> _queue;
	PXMemoriesDataSourceState* __state;

}

@property (nonatomic,readonly) PXMemoriesDataSourceState * _state;              //@synthesize _state=__state - In the implementation block
-(PXMemoriesDataSourceState *)_state;
-(id)objectAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)initWithState:(id)arg1 ;
-(long long)numberOfSections;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(PXSimpleIndexPath)indexPathForObjectReference:(id)arg1 ;
@end

