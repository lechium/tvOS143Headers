/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXWidgetBar.h>

@class PXUIWidgetBarViewTile;

@interface PXUIWidgetBar : PXWidgetBar {

	PXUIWidgetBarViewTile* __viewTile;

}

@property (nonatomic,readonly) PXUIWidgetBarViewTile * _viewTile;              //@synthesize _viewTile=__viewTile - In the implementation block
-(void)updateView;
-(id)createTileAnimator;
-(id)checkOutTileWithKind:(long long)arg1 ;
-(void)checkInTile:(id)arg1 ;
-(PXUIWidgetBarViewTile *)_viewTile;
@end

